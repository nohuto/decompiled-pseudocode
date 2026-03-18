/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800D6310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 192));
}
