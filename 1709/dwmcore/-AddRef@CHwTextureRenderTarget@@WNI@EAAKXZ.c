/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WNI@EAAKXZ @ 0x1800C6900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 216));
}
