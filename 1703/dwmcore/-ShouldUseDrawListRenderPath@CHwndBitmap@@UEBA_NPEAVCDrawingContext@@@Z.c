/*
 * XREFs of ?ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18001FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1800200A0 (-CanUseCVI@CHwndBitmap@@AEBA_NPEAVCDrawingContext@@@Z.c)
 */

char __fastcall CHwndBitmap::ShouldUseDrawListRenderPath(CHwndBitmap *this, struct CDrawingContext *a2)
{
  bool CanUseCVI; // al
  char v4; // cl

  CanUseCVI = CHwndBitmap::CanUseCVI(this, a2);
  v4 = 0;
  if ( CanUseCVI && *((_BYTE *)a2 + 728) )
    return *((_DWORD *)a2 + 172) != 0;
  return v4;
}
