/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WOA@EAAKXZ @ 0x1800DDF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 224));
}
