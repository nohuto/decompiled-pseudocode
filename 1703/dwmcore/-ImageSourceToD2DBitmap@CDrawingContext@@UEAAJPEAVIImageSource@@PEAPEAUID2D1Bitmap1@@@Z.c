/*
 * XREFs of ?ImageSourceToD2DBitmap@CDrawingContext@@UEAAJPEAVIImageSource@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToD2DBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        struct ID2D1Bitmap1 **a3)
{
  return CDrawingContext::BitmapResourceToD2DBitmap((CDrawingContext *)((char *)this - 8), a2, 0LL, 0, 0LL, a3);
}
