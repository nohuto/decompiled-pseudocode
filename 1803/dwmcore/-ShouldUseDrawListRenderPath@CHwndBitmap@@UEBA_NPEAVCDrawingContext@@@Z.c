/*
 * XREFs of ?ShouldUseDrawListRenderPath@CHwndBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1800B5A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
bool __fastcall CHwndBitmap::ShouldUseDrawListRenderPath(CHwndBitmap *this, struct CDrawingContext *a2)
{
  return CHwndBitmap::CanUseCVI(this, a2);
}
