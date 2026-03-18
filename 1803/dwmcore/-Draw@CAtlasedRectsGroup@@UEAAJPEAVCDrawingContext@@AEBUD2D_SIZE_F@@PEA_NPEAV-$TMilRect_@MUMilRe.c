/*
 * XREFs of ?Draw@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B34B0 (-DrawAsDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRec.c)
 */

__int64 __fastcall CAtlasedRectsGroup::Draw(
        CCompositionSurfaceBitmap *a1,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5)
{
  return CAtlasedRectsGroup::DrawAsDrawList(a1, a2, a3, a4, a5, 0LL);
}
