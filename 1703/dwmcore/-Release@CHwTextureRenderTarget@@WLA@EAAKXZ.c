/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800D6500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 176));
}
