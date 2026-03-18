/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C60D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 48), a2, a3);
}
