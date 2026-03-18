/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WJA@EAAKXZ @ 0x1800C68C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 144));
}
