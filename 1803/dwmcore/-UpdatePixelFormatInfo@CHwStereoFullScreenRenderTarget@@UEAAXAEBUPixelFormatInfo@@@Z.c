/*
 * XREFs of ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1801F1890
 * Callers:
 *     ?Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1801F1550 (-Init@CHwStereoFullScreenRenderTarget@@MEAAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInit.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(
        CHwStereoFullScreenRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DSurface *v4; // rcx
  CD3DSurface *v5; // rcx

  v4 = (CD3DSurface *)*((_QWORD *)this + 77);
  if ( v4 )
    CD3DSurface::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 79);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
