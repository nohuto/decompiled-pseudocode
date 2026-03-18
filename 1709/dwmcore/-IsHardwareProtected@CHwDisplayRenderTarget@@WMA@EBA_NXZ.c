/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@WMA@EBA_NXZ @ 0x1800C6C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CHwDisplayRenderTarget::IsHardwareProtected(__int64 a1)
{
  return CHwDisplayRenderTarget::IsHardwareProtected((CDWMSwapChain **)(a1 - 192));
}
