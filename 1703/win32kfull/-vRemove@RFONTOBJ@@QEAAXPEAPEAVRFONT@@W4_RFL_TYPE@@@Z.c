/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0008BFC (prfntDeactivateEudcRFONTs.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C008F9D0 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntKillList @ 0x1C0103FFC (prfntKillList.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02873A0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vRemove(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rcx

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v4 = (__int64 *)(*(_QWORD *)a1 + 496LL);
    v5 = *v4;
    if ( *v4 )
      v6 = v5 + 496;
    else
      v6 = 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
    if ( !v7 )
      goto LABEL_6;
    v8 = (__int64 *)(v7 + 496);
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 512LL);
    v5 = *v4;
    if ( *v4 )
      v6 = v5 + 512;
    else
      v6 = 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 520LL);
    if ( !v7 )
    {
LABEL_6:
      v8 = 0LL;
      goto LABEL_7;
    }
    v8 = (__int64 *)(v7 + 512);
  }
LABEL_7:
  if ( v5 )
  {
    *(_QWORD *)(v6 + 8) = v7;
    if ( v8 )
      *v8 = *v4;
  }
  else
  {
    *a2 = v7;
    if ( v8 )
      *v8 = 0LL;
  }
}
