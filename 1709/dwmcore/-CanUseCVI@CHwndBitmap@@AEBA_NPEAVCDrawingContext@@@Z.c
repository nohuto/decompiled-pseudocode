/*
 * XREFs of ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x18007447C
 * Callers:
 *     ?ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1800743A0 (-ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800743F0 (-DrawAsDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180036CA0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::CanUseCVI(CHwndBitmap *this, struct CDrawingContext *a2)
{
  char v2; // bl

  v2 = 1;
  if ( *((_DWORD *)a2 + 64) && !*((_DWORD *)a2 + 65) && !*((_DWORD *)a2 + 66) )
    return CDrawingContext::IsIn3DMode((struct CDrawingContext *)((char *)a2 + 8));
  return v2;
}
