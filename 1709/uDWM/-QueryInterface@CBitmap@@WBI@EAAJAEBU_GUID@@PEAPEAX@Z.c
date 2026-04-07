/*
 * XREFs of ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180046A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCompoundBitmapLock::QueryInterface((CCompoundBitmapLock *)(a1 - 24), a2, a3);
}
