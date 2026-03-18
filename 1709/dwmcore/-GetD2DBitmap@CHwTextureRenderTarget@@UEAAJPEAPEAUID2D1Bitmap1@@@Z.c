/*
 * XREFs of ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18008F9C0
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C6970 (-GetD2DBitmap@CHwTextureRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  return CHwSurfaceRenderTarget::GetD2DBitmap(this, a2);
}
