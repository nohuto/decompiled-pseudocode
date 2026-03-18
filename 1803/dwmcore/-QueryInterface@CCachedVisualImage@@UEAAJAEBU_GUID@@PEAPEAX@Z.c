/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5270
 * Callers:
 *     ?QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDBA0 (-QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDBB0 (-QueryInterface@CCachedVisualImage@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDBC0 (-QueryInterface@CCachedVisualImage@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DDC40 (-QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::QueryInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCachedVisualImage *)((char *)this + 16), a2, a3);
}
