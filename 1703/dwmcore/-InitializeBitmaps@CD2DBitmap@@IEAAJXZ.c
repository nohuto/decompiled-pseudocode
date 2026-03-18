/*
 * XREFs of ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18007A9E8
 * Callers:
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18007ACFC (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18019AAE0 (-UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z @ 0x18007B300 (--$SetInterface@UID2D1Bitmap1@@U1@@@YAXAEAPEAUID2D1Bitmap1@@PEAU0@@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800AEA08 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 */

__int64 __fastcall CD2DBitmap::InitializeBitmaps(CD2DBitmap *this)
{
  _QWORD *v1; // rsi
  int D2DBitmapFromDxgiSurface; // eax
  unsigned int v4; // edi

  v1 = (_QWORD *)((char *)this + 152);
  D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                               *(CD2DContext **)(*((_QWORD *)this + 3) + 24LL),
                               *((struct IDXGISurface **)this + 17),
                               (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 216),
                               (struct ID2D1Bitmap1 **)this + 19);
  v4 = D2DBitmapFromDxgiSurface;
  if ( D2DBitmapFromDxgiSurface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromDxgiSurface, 0x7Cu);
  }
  else if ( *((_DWORD *)this + 55) == 3 )
  {
    SetInterface<ID2D1Bitmap1,ID2D1Bitmap1>((char *)this + 160, *v1);
  }
  return v4;
}
