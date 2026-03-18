/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8790
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801B8130 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B3B4 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x1801A693C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801AE3F8 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     McTemplateU0qz @ 0x1801B8D7C (McTemplateU0qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, CDisplay *a2, int a3)
{
  CSwapChainBase **v4; // r14
  signed int SwapChain; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  signed int LogicalBackBuffer; // eax
  signed int v12; // eax

  v4 = (CSwapChainBase **)((char *)this + 232);
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 25),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 240),
                (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 79),
                a3,
                a2,
                (struct CDWMSwapChain **)this + 29);
  v10 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, SwapChain, 0x38u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v9, v8, *((unsigned int *)this + 70), (char *)a2 + 136);
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(*v4, (struct CD3DSurface **)this + 23);
    v10 = LogicalBackBuffer;
    if ( LogicalBackBuffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LogicalBackBuffer, 0x3Fu);
    }
    else
    {
      v12 = CHwDisplayRenderTarget::Init(this, (__int64)a2, a3);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x43u);
    }
  }
  return v10;
}
