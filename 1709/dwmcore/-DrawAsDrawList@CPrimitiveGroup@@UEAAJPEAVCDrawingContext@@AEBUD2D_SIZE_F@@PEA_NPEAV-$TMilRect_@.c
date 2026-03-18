/*
 * XREFs of ?DrawAsDrawList@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180146EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180027B58 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 */

__int64 __fastcall CPrimitiveGroup::DrawAsDrawList(
        CSpriteVisualContent *a1,
        __int64 a2,
        struct D2D_SIZE_F *a3,
        bool *a4,
        float *a5,
        struct CDrawListCache *a6)
{
  return CPrimitiveGroup::DrawWorker(a1, 1, a2, a3, a4, a5, a6);
}
