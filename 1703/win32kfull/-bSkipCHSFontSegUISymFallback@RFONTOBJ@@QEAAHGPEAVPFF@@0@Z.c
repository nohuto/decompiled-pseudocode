/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C013F4F0
 * Callers:
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C008F0B8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bSkipCHSFontSegUISymFallback(RFONTOBJ *this, __int16 a2, struct PFF *a3, struct PFF *a4)
{
  return !gbAllowSCPUAFontFallback
      && (unsigned __int16)(a2 + 0x2000) <= 0x18FFu
      && (*((_DWORD *)a4 + 13) & 0x4000) != 0
      && (*((_DWORD *)a3 + 13) & 0x8000) != 0;
}
