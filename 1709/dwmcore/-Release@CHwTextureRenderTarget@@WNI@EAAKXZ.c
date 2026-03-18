/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WNI@EAAKXZ @ 0x1800C6B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 216));
}
