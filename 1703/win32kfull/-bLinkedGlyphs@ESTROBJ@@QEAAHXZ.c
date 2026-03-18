/*
 * XREFs of ?bLinkedGlyphs@ESTROBJ@@QEAAHXZ @ 0x1C0195824
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02999E8 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ESTROBJ::bLinkedGlyphs(ESTROBJ *this)
{
  return (*((_DWORD *)this + 16) & 0x1400) != 0;
}
