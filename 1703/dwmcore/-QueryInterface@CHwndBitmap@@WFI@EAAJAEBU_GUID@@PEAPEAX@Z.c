/*
 * XREFs of ?QueryInterface@CHwndBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CHwndBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCachedVisualImage::QueryInterface((CCachedVisualImage *)(a1 - 88), a2, a3);
}
