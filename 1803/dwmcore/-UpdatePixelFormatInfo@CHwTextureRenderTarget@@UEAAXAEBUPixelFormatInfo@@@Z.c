/*
 * XREFs of ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180078930
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800B9A38 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180021540 (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800C3D4C (--$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z.c)
 */

void __fastcall CHwTextureRenderTarget::UpdatePixelFormatInfo(
        CHwTextureRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DTexture *v4; // rcx
  CD3DSurface *v5; // rcx

  *((_QWORD *)this + 32) = *(_QWORD *)a2;
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 2);
  ReleaseInterface<CSwRenderTargetGetBounds>((char *)this + 280);
  v4 = (CD3DTexture *)*((_QWORD *)this + 31);
  if ( v4 )
    CD3DTexture::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 25);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
