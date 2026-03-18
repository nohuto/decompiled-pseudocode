/*
 * XREFs of ?CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ @ 0x18002BC30
 * Callers:
 *     <none>
 * Callees:
 *     ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x18001FF60 (-CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x18002B910 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CanUseSwapChainBuffersAsShaderInput(CD3DDeviceLevel1 **this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)(this - 24));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2D8u);
  }
  else if ( !CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(this[1]) )
  {
    v3 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0x2DCu);
  }
  return v3;
}
