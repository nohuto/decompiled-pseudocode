/*
 * XREFs of ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x18000D778
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18000D6E8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?Present@CCaptureRenderTarget@@UEAAJ_NI@Z @ 0x180156090 (-Present@CCaptureRenderTarget@@UEAAJ_NI@Z.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180159888 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x180159CC0 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180159DC0 (-ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x180159DE0 (-ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015A350 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x18015AD44 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ @ 0x18015BCE0 (-EnsureRenderTargets@CPlaneCaptureRenderTargetEngine@@MEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801B7160 (-ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall COffScreenRenderTarget::ReleaseRenderTargets(COffScreenRenderTarget *this)
{
  __int64 i; // rdi
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 74); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 34) + 8 * i);
    ReleaseInterface<IRenderTargetBitmap>(&v3);
  }
  *((_DWORD *)this + 74) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 8LL);
}
