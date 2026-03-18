/*
 * XREFs of ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x180079884
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ @ 0x180022DA0 (-CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B7A48 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(CD3DDeviceLevel1 *this)
{
  char v1; // dl
  __int64 v3; // r8

  v1 = 0;
  if ( *((int *)this + 185) >= 40960 )
    return 1;
  v3 = *((_QWORD *)this + 88);
  if ( *(_DWORD *)(v3 + 296) == 1297040209 )
    return *(_DWORD *)(v3 + 344) >= 1200;
  return v1;
}
