/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@WBII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C7050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 392), a2, a3);
}
