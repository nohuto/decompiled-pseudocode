/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WJA@EAAKXZ @ 0x1800C6AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 144));
}
