/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WIA@EAAKXZ @ 0x1800D62F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 128));
}
