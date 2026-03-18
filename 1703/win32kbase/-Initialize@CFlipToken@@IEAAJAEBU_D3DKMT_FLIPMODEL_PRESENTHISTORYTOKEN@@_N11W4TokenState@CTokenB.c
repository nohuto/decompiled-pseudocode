/*
 * XREFs of ?Initialize@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_N11W4TokenState@CTokenBase@@@Z @ 0x1C00061A8
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C0005808 (-CreateCompleted@CFlipToken@@SAJ_KPEAUCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0005D98 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0005E48 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C00066E4 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z @ 0x1C0007080 (-Initialize@CToken@@MEAAJW4TokenState@CTokenBase@@@Z.c)
 *     ?AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1C0012910 (-AddRect@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0072320 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 CFlipToken::Initialize(__int64 a1, __int64 a2, char a3, char a4, char a5, ...)
{
  int v9; // esi
  _OWORD *v10; // rcx
  int v11; // r9d
  _DWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebp
  va_list va; // [rsp+68h] [rbp+30h] BYREF

  va_start(va, a5);
  v9 = CToken::Initialize(a1, 2LL);
  if ( v9 >= 0 )
  {
    v9 = -1073741811;
    if ( ((*(_DWORD *)(a2 + 44) >> 7) & 3) != 2 )
      v9 = 0;
    if ( v9 >= 0 )
    {
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 108);
      *(_QWORD *)(a1 + 104) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 28);
      if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(a2 + 84)) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *v10;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v12 = (_DWORD *)(a1 + 188);
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
      v13 = 6LL;
      *(_BYTE *)(a1 + 117) = (*(_BYTE *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 136) = (*(_BYTE *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 137) = (*(_BYTE *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 116) = (*(_BYTE *)(a2 + 44) & 0x20) != 0;
      *(_BYTE *)(a1 + 138) = (*(_BYTE *)(a2 + 44) & 0x40) != 0;
      *(_DWORD *)(a1 + 140) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 164) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 744);
      *(_BYTE *)(a1 + 220) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 796);
      do
      {
        *v12 = *(_DWORD *)((char *)v12 + a2 - a1 + 576);
        ++v12;
        --v13;
      }
      while ( v13 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 223) = a3;
      if ( a4 )
      {
        *(_BYTE *)(a1 + 221) = 1;
        *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 64);
      }
      if ( a5 )
        *(_BYTE *)(a1 + 222) = 1;
      v14 = *(_DWORD *)(a2 + 804);
      if ( v14 )
      {
        if ( v14 > 0x10 )
        {
          v9 = v11;
        }
        else
        {
          v15 = 0;
          do
            CRegion::AddRect(*(CRegion **)(a1 + 80), (const struct tagRECT *)(16LL * v15++ + a2 + 808));
          while ( v15 < *(_DWORD *)(a2 + 804) );
        }
      }
    }
  }
  CFlipToken::TraceStateChanged((CFlipToken *)a1);
  if ( v9 >= 0 && !*(_BYTE *)(a1 + 223) )
  {
    *(_DWORD *)(a1 + 24) = 3;
    CFlipToken::TraceStateChanged((CFlipToken *)a1);
    v9 = CompositionSurfaceObject::NotifyTokenInFrame(
           *(CompositionSurfaceObject **)(a1 + 32),
           (const struct CToken *)a1,
           (bool *)va);
    CFlipToken::SignalGpuFenceAndPresentLimitSemaphore((CFlipToken *)a1, 0);
  }
  return (unsigned int)v9;
}
