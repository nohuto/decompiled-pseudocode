/*
 * XREFs of ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180049CCC
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800492B0 (-GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180073008 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  int D2DBitmap; // eax
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  D2DBitmap = CD3DSurface::GetD2DBitmap(this[21], a2);
  v5 = D2DBitmap;
  v3 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x36Cu);
  TranslateDXGIorD3DErrorInContext(v3, 13LL, &v5);
  return v5;
}
