/*
 * XREFs of ?IsOfType@CCachedVisualImage@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180047630
 * Callers:
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18007B360 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800A7630 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( (unsigned int)(a2 - 60) > 1 )
    return a2 == 91;
  return v2;
}
