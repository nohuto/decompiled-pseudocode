/*
 * XREFs of ?CanUseSwapChainBuffersAsShaderInput@CD3DDeviceLevel1@@QEBA_NXZ @ 0x18001FF60
 * Callers:
 *     ?CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ @ 0x18002BC30 (-CanUseSwapChainBuffersAsShaderInput@CHwDisplayRenderTarget@@UEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDeviceLevel1::CanUseSwapChainBuffersAsShaderInput(CD3DDeviceLevel1 *this)
{
  char v1; // dl
  __int64 v3; // r8

  v1 = 0;
  if ( *((int *)this + 189) >= 40960 )
    return 1;
  v3 = *((_QWORD *)this + 89);
  if ( *(_DWORD *)(v3 + 296) == 1297040209 )
    return *(_DWORD *)(v3 + 344) >= 1200;
  return v1;
}
