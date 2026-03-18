/*
 * XREFs of ?AddRef@CHwndBitmap@@UEAAKXZ @ 0x1800B4130
 * Callers:
 *     ?AddRef@CImageSource@@W7EAAKXZ @ 0x1800DDB40 (-AddRef@CImageSource@@W7EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WEI@EAAKXZ @ 0x1800DDB50 (-AddRef@CCachedVisualImage@@WEI@EAAKXZ.c)
 *     ?AddRef@CCachedVisualImage@@WII@EAAKXZ @ 0x1800DDB60 (-AddRef@CCachedVisualImage@@WII@EAAKXZ.c)
 *     ?AddRef@CHwndBitmap@@WBA@EAAKXZ @ 0x1800DDD20 (-AddRef@CHwndBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndBitmap::AddRef(CHwndBitmap *this)
{
  return CMILCOMBase::InternalAddRef((CHwndBitmap *)((char *)this + 16));
}
