/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800C68E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 200));
}
