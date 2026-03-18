/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008FF50
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x18008CE70 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002E4DC (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180081FF4 (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800BE1B8 (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DTexture *v4; // rcx
  CD3DSurface *v5; // rcx

  *((_QWORD *)this + 29) = *(_QWORD *)a2;
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 2);
  ReleaseInterface<CSwRenderTargetGetBounds>((char *)this + 256);
  v4 = (CD3DTexture *)*((_QWORD *)this + 28);
  if ( v4 )
    CD3DTexture::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 23);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
