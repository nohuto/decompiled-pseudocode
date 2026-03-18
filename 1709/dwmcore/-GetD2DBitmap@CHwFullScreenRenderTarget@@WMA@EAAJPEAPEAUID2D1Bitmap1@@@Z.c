/*
 * XREFs of ?GetD2DBitmap@CHwFullScreenRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C6C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetD2DBitmap(__int64 a1, struct ID2D1Bitmap1 **a2)
{
  return CHwSurfaceRenderTarget::GetD2DBitmap((CD3DSurface **)(a1 - 192), a2);
}
