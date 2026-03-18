/*
 * XREFs of ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800200A0
 * Callers:
 *     ?ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18001FFB0 (-ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18002001C (-DrawWorker@CHwndBitmap@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::CanUseCVI(CHwndBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl

  v2 = 1;
  if ( *((_DWORD *)a2 + 66) && !*((_DWORD *)a2 + 67) && !*((_DWORD *)a2 + 68) )
    return CDrawingContext::IsIn3DMode((struct CDrawingContext *)((char *)a2 + 8));
  return v2;
}
