/*
 * XREFs of ?AddRef@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800DDE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 160));
}
