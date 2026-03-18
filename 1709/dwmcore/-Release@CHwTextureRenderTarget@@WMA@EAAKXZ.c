/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C6D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 192));
}
