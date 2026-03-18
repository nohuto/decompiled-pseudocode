/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18008F940
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@WMA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800C6980 (-GetD2DContext@CHwTextureRenderTarget@@WMA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetD2DContext(CHwSurfaceRenderTarget *this, struct ID2DContext **a2)
{
  return CHwSurfaceRenderTarget::GetD2DContext(this, a2);
}
