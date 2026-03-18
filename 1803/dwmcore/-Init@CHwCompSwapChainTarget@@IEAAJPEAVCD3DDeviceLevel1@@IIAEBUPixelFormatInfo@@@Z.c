/*
 * XREFs of ?Init@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@@Z @ 0x1801E47A8
 * Callers:
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1801E4558 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800C28BC (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1801DFA14 (-CreateSwapChainForComposition@CD3DDeviceLevel1@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwa.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x1801E48BC (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Init(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2,
        UINT a3,
        UINT a4,
        const struct PixelFormatInfo *a5)
{
  DXGI_FORMAT v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  int inited; // eax
  int v13; // eax
  DXGI_SWAP_CHAIN_DESC1 v15; // [rsp+30h] [rbp-40h] BYREF

  memset_0(&v15, 0, sizeof(v15));
  v9 = *(_DWORD *)a5;
  v15.Stereo = 0;
  v15.SampleDesc.Quality = 0;
  v15.Scaling = DXGI_SCALING_STRETCH;
  v15.Flags = 0;
  v15.Format = v9;
  v15.BufferCount = 3;
  v15.SwapEffect = DXGI_SWAP_EFFECT_FLIP_SEQUENTIAL;
  v15.AlphaMode = *((_DWORD *)a5 + 1);
  v15.Width = a3;
  v15.Height = a4;
  v15.SampleDesc.Count = 1;
  v15.BufferUsage = 32;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 28);
  v10 = CD3DDeviceLevel1::CreateSwapChainForComposition(a2, &v15, (struct IDXGISwapChain1 **)this + 28);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x48u);
  }
  else
  {
    *((_DWORD *)this + 2) = a3;
    *((_DWORD *)this + 3) = a4;
    inited = CHwCompSwapChainTarget::InitTargetSurface(this, a2, a5);
    v11 = inited;
    if ( inited < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x4Du);
    }
    else
    {
      v13 = CBaseRenderTarget::Init(this);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x4Fu);
    }
  }
  return v11;
}
