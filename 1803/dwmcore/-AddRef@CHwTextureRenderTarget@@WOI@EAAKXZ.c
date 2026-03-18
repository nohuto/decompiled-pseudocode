/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WOI@EAAKXZ @ 0x1800DDF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 232));
}
