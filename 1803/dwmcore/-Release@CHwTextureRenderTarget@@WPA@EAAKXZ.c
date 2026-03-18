/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WPA@EAAKXZ @ 0x1800DE180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 240));
}
