/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800D6130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 192));
}
