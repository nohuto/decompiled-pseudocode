/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WOI@EAAKXZ @ 0x1800DE170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 232));
}
