/*
 * XREFs of ?QueryInterface@CCachedVisualImage@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047650
 * Callers:
 *     ?QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5D20 (-QueryInterface@CHwndBitmap@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5DB0 (-QueryInterface@CHwndBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CHwndBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5DC0 (-QueryInterface@CHwndBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCachedVisualImage@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5E10 (-QueryInterface@CCachedVisualImage@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CCachedVisualImage::QueryInterface(CCachedVisualImage *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCachedVisualImage *)((char *)this + 16), a2, a3);
}
