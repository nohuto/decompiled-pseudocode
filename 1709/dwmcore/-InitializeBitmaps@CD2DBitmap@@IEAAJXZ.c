/*
 * XREFs of ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18004CA20
 * Callers:
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I@Z @ 0x18004C74C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801ABCE0 (-SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180044520 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z @ 0x18007843C (--$SetInterface@VIRenderTargetBitmap@@V1@@@YAXAEAPEAVIRenderTargetBitmap@@PEAV0@@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmapFromDxgiSurface, 0x80u);
  }
  else if ( *((_DWORD *)this + 55) == 3 )
  {
    SetInterface<IRenderTargetBitmap,IRenderTargetBitmap>((char *)this + 160, *v1);
  }
  return v4;
}
