/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180021540
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180078930 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x1800CDD5C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  int v2; // ebp
  int v4; // ecx
  bool v6; // zf
  __int64 v7; // rdi
  CD3DSurface *v8; // rcx

  v2 = *((_DWORD *)this + 44);
  v4 = *((_DWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 24) == 0LL;
  *((_DWORD *)this + 44) = v4;
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
  if ( !v6 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 46) )
    {
      do
      {
        v8 = *(CD3DSurface **)(*((_QWORD *)this + 24) + 8 * v7);
        if ( v8 )
          CD3DSurface::UpdatePixelFormatInfo(v8, a2);
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 46) );
      v4 = *((_DWORD *)this + 44);
    }
  }
  if ( v2 != v4 )
  {
    ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 28);
    ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 29);
  }
}
