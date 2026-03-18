/*
 * XREFs of ?QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C6430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 16), a2, a3);
}
