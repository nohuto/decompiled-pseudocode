/*
 * XREFs of ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0002988
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C008EC54 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C008F0B8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     NtGdiEngTextOut @ 0x1C009ABE0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009B810 (NtGdiFONTOBJ_pifi.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0292C90 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0292ED0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02999E8 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RFONTOBJ::~RFONTOBJ(this);
}
