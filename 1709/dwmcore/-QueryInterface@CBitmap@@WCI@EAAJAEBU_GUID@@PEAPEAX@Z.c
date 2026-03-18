/*
 * XREFs of ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C68A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 40), a2, a3);
}
