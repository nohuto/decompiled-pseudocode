/*
 * XREFs of ?ReleaseResourcesForDisplayChange@COffScreenRenderTarget@@UEAAXXZ @ 0x180148A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall COffScreenRenderTarget::ReleaseResourcesForDisplayChange(COffScreenRenderTarget *this)
{
  COffScreenRenderTarget::ReleaseRenderTargets((COffScreenRenderTarget *)((char *)this - 64));
}
