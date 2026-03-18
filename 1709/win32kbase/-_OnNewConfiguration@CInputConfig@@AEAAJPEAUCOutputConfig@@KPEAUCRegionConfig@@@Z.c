/*
 * XREFs of ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0061268
 * Callers:
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 *     ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C012FC84 (-OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?_ProcessOutputConfig@CInputConfig@@AEAAXPEAUCOutputConfig@@@Z @ 0x1C0061130 (-_ProcessOutputConfig@CInputConfig@@AEAAXPEAUCOutputConfig@@@Z.c)
 */

__int64 __fastcall CInputConfig::_OnNewConfiguration(
        CInputConfig *this,
        struct COutputConfig *a2,
        int a3,
        struct CRegionConfig *a4)
{
  unsigned int v8; // ebx
  char *v9; // rax
  _QWORD *v10; // rsi
  __int128 v11; // xmm0
  _OWORD *v12; // rdi

  v8 = 0;
  v9 = (char *)Win32AllocPoolZInit(0xC8uLL, 1866690121LL);
  v10 = v9;
  if ( v9 )
  {
    *(_OWORD *)(v9 + 8) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 24) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v9 + 40) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v9 + 56) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(v9 + 72) = *((_OWORD *)a2 + 4);
    *(_OWORD *)(v9 + 88) = *((_OWORD *)a2 + 5);
    *(_OWORD *)(v9 + 104) = *((_OWORD *)a2 + 6);
    v11 = *((_OWORD *)a2 + 7);
    v12 = (_OWORD *)((char *)a2 + 128);
    *(_OWORD *)(v9 + 120) = v11;
    *(_OWORD *)(v9 + 136) = *v12;
    *(_OWORD *)(v9 + 152) = v12[1];
    *(_OWORD *)(v9 + 168) = v12[2];
    *(_OWORD *)(v9 + 184) = v12[3];
    *((_DWORD *)v9 + 5) = a3;
    *((_QWORD *)v9 + 3) = a4;
    CInputConfig::_ProcessOutputConfig((CInputConfig *)(v9 + 136), (struct COutputConfig *)(v9 + 8));
    *v10 = *((_QWORD *)this + 1);
    *((_QWORD *)this + 1) = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}
