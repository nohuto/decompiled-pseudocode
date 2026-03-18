/*
 * XREFs of ?Release@CHwndBitmap@@UEAAKXZ @ 0x180074370
 * Callers:
 *     ?Release@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800C65C0 (-Release@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WII@EAAKXZ @ 0x1800C65D0 (-Release@CCachedVisualImage@@WII@EAAKXZ.c)
 *     ?Release@CFlipChain@@W7EAAKXZ @ 0x1800C66F0 (-Release@CFlipChain@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800C6700 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwndBitmap::Release(CHwndBitmap *this)
{
  return CMILCOMBase::InternalRelease((CHwndBitmap *)((char *)this + 16));
}
