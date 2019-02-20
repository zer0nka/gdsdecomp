
/*************************************************************************/
/*  bytecode_ff1e7cf.h                                                   */
/*************************************************************************/

#ifndef GDSCRIPT_DECOMP_ff1e7cf_H
#define GDSCRIPT_DECOMP_ff1e7cf_H

#include "bytecode_base.h"

class GDScriptDecomp_ff1e7cf : public GDScriptDecomp {
	GDCLASS(GDScriptDecomp_ff1e7cf, GDScriptDecomp);

protected:
	static void _bind_methods(){};

	static const int bytecode_version = 12;

	enum {
		TOKEN_BYTE_MASK = 0x80,
		TOKEN_BITS = 8,
		TOKEN_MASK = (1 << TOKEN_BITS) - 1,
		TOKEN_LINE_BITS = 24,
		TOKEN_LINE_MASK = (1 << TOKEN_LINE_BITS) - 1,
	};

public:
	virtual Error decompile_buffer(Vector<uint8_t> p_buffer);
};

#endif
