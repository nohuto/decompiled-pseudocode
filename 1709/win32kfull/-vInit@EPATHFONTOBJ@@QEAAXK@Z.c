/*
 * XREFs of ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C013579C
 * Callers:
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02AD9F0 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02ADB08 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHFONTOBJ::vInit(EPATHFONTOBJ *this, int a2)
{
  *((_QWORD *)this + 1) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 416;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = (char *)this + 440;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 108) = a2 - 416;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 1;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 44) = 1;
  *(_QWORD *)this = 0LL;
}
