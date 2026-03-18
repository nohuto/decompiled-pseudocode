/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0040A90 (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0x1C0041A78 (prfntKillList.c)
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00FE0AC (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0123C54 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     ?vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z @ 0x1C02797C8 (-vFindAndReplaceRFONT@@YAXAEAVPDEVOBJ@@00@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0283ED0 (vRemoveAllInactiveRFONTs.c)
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
