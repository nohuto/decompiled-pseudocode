/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C68D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 192));
}
