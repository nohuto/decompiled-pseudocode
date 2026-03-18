/*
 * XREFs of ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F678
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002F64 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0008BFC (prfntDeactivateEudcRFONTs.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     prfntKillList @ 0x1C0103FFC (prfntKillList.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vInsert(__int64 *a1, __int64 *a2, int a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 *v7; // rcx

  if ( a3 )
  {
    if ( a3 != 1 )
      return;
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 496);
    if ( v5 )
    {
      v7 = (__int64 *)(v5 + 496);
      goto LABEL_8;
    }
  }
  else
  {
    v5 = *a2;
    v6 = (_QWORD *)(*a1 + 512);
    if ( v5 )
    {
      v7 = (__int64 *)(v5 + 512);
      goto LABEL_8;
    }
  }
  v7 = 0LL;
LABEL_8:
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = v5;
    if ( v7 )
      *v7 = *a1;
    *a2 = *a1;
  }
}
