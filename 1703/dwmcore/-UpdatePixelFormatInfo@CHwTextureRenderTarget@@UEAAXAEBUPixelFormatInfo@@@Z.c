/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800497D0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180045644 (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0 (--$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800734E4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DTexture *v4; // rcx
  CD3DSurface *v5; // rcx

  *((_QWORD *)this + 27) = *(_QWORD *)a2;
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 2);
  ReleaseInterface<CBitmapOfDeviceBitmaps>((char *)this + 240);
  v4 = (CD3DTexture *)*((_QWORD *)this + 26);
  if ( v4 )
    CD3DTexture::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 21);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
