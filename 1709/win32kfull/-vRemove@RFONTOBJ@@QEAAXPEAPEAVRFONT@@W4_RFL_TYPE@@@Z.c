/*
 * XREFs of ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0
 * Callers:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0007C34 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0035900 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C0040A90 (prfntDeactivateEudcRFONTs.c)
 *     prfntKillList @ 0x1C0041A78 (prfntKillList.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0283ED0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::vRemove(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 *v4; // r8
  __int64 v5; // r11
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  __int128 v8; // rax

  if ( a3 )
  {
    if ( a3 != 1 )
      return v8;
    v4 = (__int64 *)(*(_QWORD *)a1 + 496LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
    v7 = (*v4 + 496) & -(__int64)(*v4 != 0);
    v8 = -(__int128)v6;
    *((_QWORD *)&v8 + 1) &= v6 + 496;
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)a1 + 512LL);
    v5 = *v4;
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 520LL);
    *(_QWORD *)&v8 = -*v4;
    v7 = (*v4 + 512) & -(__int64)(*v4 != 0);
    if ( v6 )
      *((_QWORD *)&v8 + 1) = v6 + 512;
    else
      *((_QWORD *)&v8 + 1) = 0LL;
  }
  if ( v5 )
  {
    *(_QWORD *)(v7 + 8) = v6;
    if ( *((_QWORD *)&v8 + 1) )
    {
      *(_QWORD *)&v8 = *v4;
      **((_QWORD **)&v8 + 1) = *v4;
    }
  }
  else
  {
    *a2 = v6;
    if ( *((_QWORD *)&v8 + 1) )
      **((_QWORD **)&v8 + 1) = 0LL;
  }
  return v8;
}
