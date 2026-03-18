/*
 * XREFs of ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x180044140
 * Callers:
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18004D718 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DTexture *__fastcall CHwBitmapColorSource::GetTextureNoRef(CHwBitmapColorSource *this)
{
  return (struct CD3DTexture *)*((_QWORD *)this + 20);
}
