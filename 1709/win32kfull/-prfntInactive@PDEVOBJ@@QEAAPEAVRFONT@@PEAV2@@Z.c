/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0040A90 (prfntDeactivateEudcRFONTs.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F5FD4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0276DBC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0283ED0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this, struct RFONT *a2)
{
  __int64 v2; // r8
  struct RFONT *result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 3536);
    result = *(struct RFONT **)(v4 + 1536);
    *(_QWORD *)(v4 + 1536) = a2;
  }
  else
  {
    result = *(struct RFONT **)(v2 + 1536);
    *(_QWORD *)(v2 + 1536) = a2;
  }
  return result;
}
