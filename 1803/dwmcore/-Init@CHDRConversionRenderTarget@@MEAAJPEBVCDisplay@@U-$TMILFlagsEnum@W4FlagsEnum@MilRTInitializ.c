/*
 * XREFs of ?Init@CHDRConversionRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F3010
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800470F4 (-Init@CHwDisplayRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180075470 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     McTemplateU0qz @ 0x1801F247C (McTemplateU0qz.c)
 *     ?CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z @ 0x1801F2948 (-CreateHDRIntermediateTargetBitmap@CHDRConversionRenderTarget@@AEAAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall CHDRConversionRenderTarget::Init(CHDRConversionRenderTarget *this, __int64 a2, int a3)
{
  int SwapChain; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  int HDRIntermediateTargetBitmap; // eax
  int v11; // eax

  SwapChain = CD3DDeviceLevel1::CreateSwapChain(
                *((CD3DDeviceLevel1 **)this + 28),
                (struct DXGI_SWAP_CHAIN_DESC *)((char *)this + 256),
                (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 150),
                a3,
                (struct _LUID *)a2,
                (CHDRConversionRenderTarget *)((char *)this + 248));
  v9 = SwapChain;
  if ( SwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SwapChain, 0x3Cu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qz(v8, v7, *((_DWORD *)this + 74), (const wchar_t *)(a2 + 160));
    HDRIntermediateTargetBitmap = CHDRConversionRenderTarget::CreateHDRIntermediateTargetBitmap(
                                    this,
                                    (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 82));
    v9 = HDRIntermediateTargetBitmap;
    if ( HDRIntermediateTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HDRIntermediateTargetBitmap, 0x42u);
    }
    else
    {
      v11 = CHwDisplayRenderTarget::Init(this, a2, a3);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x46u);
    }
  }
  return v9;
}
