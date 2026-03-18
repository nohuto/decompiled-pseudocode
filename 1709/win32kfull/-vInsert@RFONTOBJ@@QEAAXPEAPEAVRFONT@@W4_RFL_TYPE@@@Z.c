/*
 * XREFs of ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0040A90 (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0x1C0041A78 (prfntKillList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::vInsert(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int128 v8; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return v8;
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 496LL);
    v7 = *a2 + 496;
    v8 = -(__int128)*a2;
    *((_QWORD *)&v8 + 1) &= v7;
  }
  else
  {
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 512LL);
    if ( *a2 )
      *((_QWORD *)&v8 + 1) = v5 + 512;
    else
      *((_QWORD *)&v8 + 1) = 0LL;
  }
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = v5;
    if ( *((_QWORD *)&v8 + 1) )
      **((_QWORD **)&v8 + 1) = *a1;
    *(_QWORD *)&v8 = *a1;
    *a2 = *a1;
  }
  return v8;
}
