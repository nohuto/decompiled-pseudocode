/*
 * XREFs of ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 */

__int64 __fastcall CHwndBitmap::Draw(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  return CHwndBitmap::DrawWorker((CHwndBitmap *)(a1 - 16), a4, a5, 0LL);
}
