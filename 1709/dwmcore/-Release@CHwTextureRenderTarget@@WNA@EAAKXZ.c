/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WNA@EAAKXZ @ 0x1800C6AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 208));
}
