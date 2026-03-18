/*
 * XREFs of ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E3FB4
 * Callers:
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E41B0 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180095D88 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x1801E409C (-EnsureDXGISurface@CD3DTexture@@AEAAJXZ.c)
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x1801E4308 (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 */

__int64 __fastcall CD3DTexture::CreateD2DBitmap(struct IDXGISurface **this, char a2, struct ID2D1Bitmap1 **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  struct IDXGISurface *v10; // rax
  int v11; // eax
  struct D2D1_BITMAP_PROPERTIES1 v13; // [rsp+30h] [rbp-28h] BYREF

  *a3 = 0LL;
  v6 = CD3DTexture::EnsureDXGISurface((CD3DTexture *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x223u);
  }
  else
  {
    v8 = 3;
    if ( !a2 )
      v8 = *((_DWORD *)this + 44);
    v9 = *((_DWORD *)this + 36);
    v13.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
    v13.pixelFormat = (D2D1_PIXEL_FORMAT)__PAIR64__(v8, v9);
    v13.dpiX = 96.0;
    v13.dpiY = 96.0;
    if ( v9 != 88 && CD3DTexture::IsRenderTarget((CD3DTexture *)this) )
      v13.bitmapOptions |= 1u;
    v10 = this[2];
    v13.colorContext = 0LL;
    v11 = CD2DContext::CreateD2DBitmapFromDxgiSurface((CD2DContext *)v10[10].lpVtbl, this[26], &v13, a3);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x24Cu);
  }
  return v7;
}
