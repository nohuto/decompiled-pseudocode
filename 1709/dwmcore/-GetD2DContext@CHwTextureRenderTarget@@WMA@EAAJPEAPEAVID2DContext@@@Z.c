/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@WMA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800C6980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetD2DContext(__int64 a1, struct ID2DContext **a2)
{
  return CHwTextureRenderTarget::GetD2DContext((CHwSurfaceRenderTarget *)(a1 - 192), a2);
}
