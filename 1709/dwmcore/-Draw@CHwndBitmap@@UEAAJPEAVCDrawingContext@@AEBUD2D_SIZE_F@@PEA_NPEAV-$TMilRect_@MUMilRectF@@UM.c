/*
 * XREFs of ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180074380
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800743F0 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 */

__int64 __fastcall CHwndBitmap::Draw(
        CSpriteVisualContent *a1,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5)
{
  return CHwndBitmap::DrawAsDrawList(a1, a2, a3, a5, 0LL);
}
