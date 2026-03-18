/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WPA@EAAKXZ @ 0x1800DDF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 240));
}
