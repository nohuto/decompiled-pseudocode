/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180081FF4
 * Callers:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18008506C (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008FF50 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002E4DC (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD3DTexture::UpdatePixelFormatInfo(CD3DTexture *this, const struct PixelFormatInfo *a2)
{
  bool v2; // zf
  int v5; // ebp
  __int64 i; // rdi
  CD3DSurface *v7; // rcx

  v2 = *((_QWORD *)this + 24) == 0LL;
  v5 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
  if ( !v2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
    {
      v7 = *(CD3DSurface **)(*((_QWORD *)this + 24) + 8 * i);
      if ( v7 )
        CD3DSurface::UpdatePixelFormatInfo(v7, a2);
    }
  }
  if ( v5 != *((_DWORD *)this + 44) )
  {
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 28);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 29);
  }
}
