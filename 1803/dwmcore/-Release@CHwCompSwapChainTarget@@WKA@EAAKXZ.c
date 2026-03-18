/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800DE3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 160));
}
