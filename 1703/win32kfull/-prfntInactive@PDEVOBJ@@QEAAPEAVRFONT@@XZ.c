/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0008BFC (prfntDeactivateEudcRFONTs.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0008CB0 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00D465C (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     prfntKillList @ 0x1C0103FFC (prfntKillList.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C027CDD8 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02873A0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x800000) != 0 )
    return *(struct RFONT **)(*(_QWORD *)(v1 + 3536) + 1536LL);
  else
    return *(struct RFONT **)(v1 + 1536);
}
