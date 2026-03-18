/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C61F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CColorKeyBitmap::QueryInterface((CColorKeyBitmap *)(a1 - 224), a2, a3);
}
