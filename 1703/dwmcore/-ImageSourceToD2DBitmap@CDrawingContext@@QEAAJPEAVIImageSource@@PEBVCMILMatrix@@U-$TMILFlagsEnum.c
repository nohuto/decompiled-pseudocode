/*
 * XREFs of ?ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBVCMILMatrix@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A1DB4
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::ImageSourceToD2DBitmap(
        CDrawingContext *a1,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        char a4,
        struct CColorKey *a5,
        struct ID2D1Bitmap1 **a6)
{
  struct CColorKey *v6; // r10

  v6 = a5;
  if ( a5 )
    v6 = (struct CColorKey *)(-(__int64)((a4 & 2) != 0) & (unsigned __int64)a5);
  return CDrawingContext::BitmapResourceToD2DBitmap(a1, a2, a3, a4 & 1, v6, a6);
}
