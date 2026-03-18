/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x180048810
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)((char *)this - 80), a2, a3);
}
