/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180070AE0
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801A05F0 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnu.c)
 * Callees:
 *     ?Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18003AE68 (-Init@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTIn.c)
 *     ?GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z @ 0x18003F7F8 (-GetBackBuffer@CSwapChainBase@@QEBAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18004D014 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x1801A0AC4 (-EnsureHDRIntermediateTargetBitmap@CHwFullScreenRenderTarget@@IEAAJXZ.c)
 *     Template_qz @ 0x1801A11D4 (Template_qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CHwFullScreenRenderTarget *this, __int64 a2, CDisplay *a3, int a4)
{
  bool IsPrimary; // al
  bool v9; // zf
  int SwapChain; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  char *v14; // r14
  int BackBuffer; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  bool v20; // cc
  int v21; // eax

  IsPrimary = CDisplay::IsPrimary(a3);
  v9 = *((_DWORD *)this + 60) == 24;
  *((_BYTE *)this + 320) = IsPrimary;
  if ( v9 )
  {
    v20 = *((_DWORD *)this + 66) <= 2u;
    *((_BYTE *)this + 321) = 1;
    if ( !v20 )
      *((_DWORD *)this + 66) = 2;
  }
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((_QWORD *)this + 23),
                (char *)this + 224,
                *((unsigned int *)this + 75));
  v13 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChain, 0x4Cu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qz(v12, v11, *((unsigned int *)this + 66), (char *)a3 + 136);
    v14 = (char *)this + 168;
    BackBuffer = CSwapChainBase::GetBackBuffer(*((CSwapChainBase **)this + 27), v11, (struct CD3DSurface **)this + 21);
    v13 = BackBuffer;
    if ( BackBuffer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BackBuffer, 0x55u);
    }
    else if ( *((_BYTE *)this + 321)
           && (v21 = CHwFullScreenRenderTarget::EnsureHDRIntermediateTargetBitmap(this), v13 = v21, v21 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x5Bu);
    }
    else
    {
      v16 = *(_QWORD *)v14;
      *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)v14 + 148LL);
      *((_DWORD *)this + 3) = *(_DWORD *)(v16 + 152);
      v17 = CHwDisplayRenderTarget::Init((__int64)this, a2, (__int64)a3, a4);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x65u);
      }
      else
      {
        v18 = CBaseRenderTarget::Init(this);
        v13 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x6Bu);
      }
    }
  }
  return v13;
}
