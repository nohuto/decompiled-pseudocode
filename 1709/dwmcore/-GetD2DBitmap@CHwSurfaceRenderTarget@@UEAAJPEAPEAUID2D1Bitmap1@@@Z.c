/*
 * XREFs of ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002F040
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18008F9C0 (-GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C6C20 (-GetD2DBitmap@CHwFullScreenRenderTarget@@WMA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002DFB0 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  D2DBitmap = CD3DSurface::GetD2DBitmap(this[23], a2);
  v5 = D2DBitmap;
  v3 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DBitmap, 0x2FAu);
  TranslateDXGIorD3DErrorInContext(v3, 13, &v5);
  return v5;
}
