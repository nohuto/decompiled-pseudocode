/*
 * XREFs of ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x180048760
 * Callers:
 *     ?Release@CHwndBitmap@@WFI@EAAKXZ @ 0x1800D5CE0 (-Release@CHwndBitmap@@WFI@EAAKXZ.c)
 *     ?Release@CFlipChain@@W7EAAKXZ @ 0x1800D5E20 (-Release@CFlipChain@@W7EAAKXZ.c)
 *     ?Release@CHwndBitmap@@WBA@EAAKXZ @ 0x1800D5E30 (-Release@CHwndBitmap@@WBA@EAAKXZ.c)
 *     ?Release@CCachedVisualImage@@WFA@EAAKXZ @ 0x1800D5E40 (-Release@CCachedVisualImage@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::Release(CGdiSpriteBitmap *this)
{
  return CMILCOMBase::InternalRelease((CGdiSpriteBitmap *)((char *)this + 16));
}
