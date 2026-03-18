/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180095D88
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800430B0 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180077470 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801E3FB4 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapFromDxgiSurface(
        CD2DContext *this,
        struct IDXGISurface *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISurface *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 22) + 496LL))(
           *((_QWORD *)this + 22),
           a2,
           a3,
           a4);
}
