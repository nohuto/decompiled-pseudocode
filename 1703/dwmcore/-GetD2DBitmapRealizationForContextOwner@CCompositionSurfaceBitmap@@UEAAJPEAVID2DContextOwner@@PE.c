/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000B360
 * Callers:
 *     ?GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap@@@Z @ 0x18000A068 (-GetD2DBitmapRealization@CCommandListBitmapRepresentation@@AEAAJPEAVID2DContextOwner@@PEAPEAUID2.c)
 *     ?BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1Bitmap@@@Z @ 0x18000BC5C (-BuildD2DBitmapList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@IIPEAPEAUID2D1B.c)
 *     ?DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z @ 0x18014C2C0 (-DrawYCbCrBitmap@CDrawingContext@@UEAAJPEAVCResource@@0W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@@Z.c)
 *     ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBUtagRECT@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x18016F0A8 (-GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVID2DContext@@PEAVID2DContextOwner@@AEBU.c)
 *     ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180198970 (-DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIV.c)
 * Callees:
 *     ?InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000A8F8 (-InternalGetD2DBitmap@CCompositionSurfaceBitmap@@QEAAJAEBURenderTargetInfo@@PEAPEAUID2D1Bitmap1@.c)
 *     ?GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z @ 0x1800C21D0 (-GetCurrentRenderTargetInfo@ID2DContextOwner@@QEAAXPEAURenderTargetInfo@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetD2DBitmapRealizationForContextOwner(
        CCompositionSurfaceBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v7 = 0;
  ID2DContextOwner::GetCurrentRenderTargetInfo(a2, (struct RenderTargetInfo *)v6);
  return CCompositionSurfaceBitmap::InternalGetD2DBitmap(
           (CCompositionSurfaceBitmap *)((char *)this - 88),
           (const struct RenderTargetInfo *)v6,
           a3);
}
