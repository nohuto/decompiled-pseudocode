/*
 * XREFs of ?Init@CHwFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007CA60
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F1550 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800470F4 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0560 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 *     McTemplateU0qz @ 0x1801F247C (McTemplateU0qz.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Init(CBaseRenderTarget *this, struct _LUID *a2, int a3)
{
  CSwapChainBase **v4; // r14
  int SwapChain; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  int LogicalBackBuffer; // eax
  int v12; // eax

  v4 = (CSwapChainBase **)((char *)this + 248);
  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 28),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 256),
                (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 83),
                a3,
                a2,
                (CBaseRenderTarget *)((char *)this + 248));
  v10 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, SwapChain, 0x3Du);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v9, v8, *((unsigned int *)this + 74), &a2[20]);
    LogicalBackBuffer = CSwapChainBase::GetLogicalBackBuffer(*v4, (struct CD3DSurface **)this + 25);
    v10 = LogicalBackBuffer;
    if ( LogicalBackBuffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, LogicalBackBuffer, 0x44u);
    }
    else
    {
      v12 = CHwDisplayRenderTarget::Init(this, (__int64)a2, a3);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180277AC0, 2u, v12, 0x48u);
    }
  }
  return v10;
}
