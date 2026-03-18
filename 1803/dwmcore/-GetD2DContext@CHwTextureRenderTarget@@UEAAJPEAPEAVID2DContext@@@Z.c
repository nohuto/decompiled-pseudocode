/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180078170
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@WNI@EAAJPEAPEAVID2DContext@@@Z @ 0x1800DDFF0 (-GetD2DContext@CHwTextureRenderTarget@@WNI@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall CHwTextureRenderTarget::GetD2DContext(CHwTextureRenderTarget *this, struct ID2DContext **a2)
{
  return CHwSurfaceRenderTarget::GetD2DContext(this, a2);
}
