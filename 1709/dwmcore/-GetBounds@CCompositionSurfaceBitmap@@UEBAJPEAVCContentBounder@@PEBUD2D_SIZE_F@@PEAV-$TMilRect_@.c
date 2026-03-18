/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028B70
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WEA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C6010 (-GetBounds@CCompositionSurfaceBitmap@@WEA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A180 (-GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0);
  return CCompositionSurfaceBitmap::GetBoundsInternal((__int64)a1, a3, a4);
}
