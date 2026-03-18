/*
 * XREFs of ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180078180
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@WNI@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800DDFE0 (-GetD2DBitmap@CHwTextureRenderTarget@@WNI@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetD2DBitmap(CHwTextureRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  return CHwSurfaceRenderTarget::GetD2DBitmap(this, a2);
}
