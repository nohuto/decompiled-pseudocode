/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CIndirectSwapchainRenderTarget@@UEAAXXZ @ 0x180159DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x18015A0E0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CIndirectSwapchainRenderTarget::ReleaseResourcesForDisplayChange(CIndirectSwapchainRenderTarget *this)
{
  COffScreenRenderTarget *v1; // rbx

  v1 = (CIndirectSwapchainRenderTarget *)((char *)this - 64);
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)((char *)this - 64));
  COffScreenRenderTarget::ReleaseRenderTargets(v1);
}
