/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x1800B4140
 * Callers:
 *     ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800DDBD0 (-Release@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800DDBE0 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 *     ?Release@CHwndBitmap@@W7EAAKXZ @ 0x1800DDC50 (-Release@CHwndBitmap@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800DDC60 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CMILCOMBase::InternalRelease((CHwndBitmap *)((char *)this + 16));
}
