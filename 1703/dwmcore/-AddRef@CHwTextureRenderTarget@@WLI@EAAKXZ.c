/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800D6120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 184));
}
