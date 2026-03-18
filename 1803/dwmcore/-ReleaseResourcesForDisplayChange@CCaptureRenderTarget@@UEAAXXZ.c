/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CCaptureRenderTarget@@UEAAXXZ @ 0x180156610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCaptureRenderTarget::ReleaseResourcesForDisplayChange(__int64 **this)
{
  CCaptureRenderTarget::ReleaseRenderingResources(this - 8);
}
