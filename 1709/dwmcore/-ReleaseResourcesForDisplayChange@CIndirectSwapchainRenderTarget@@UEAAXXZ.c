/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180137930
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::ReleaseResourcesForDisplayChange(CIndirectSwapchainRenderTarget *this)
{
  COffScreenRenderTarget *v1; // rbx

  v1 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  COffScreenRenderTarget::ReleaseRenderTargets(v1);
}
