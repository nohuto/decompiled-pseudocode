/*
 * XREFs of ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180164750
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 */

__int64 __fastcall CHwndBitmap::DrawAsDrawList(
        __int64 a1,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        CDrawListCache *a6)
{
  return CHwndBitmap::DrawWorker((CHwndBitmap *)(a1 - 16), 1, a2, a3, a4, a5, a6);
}
