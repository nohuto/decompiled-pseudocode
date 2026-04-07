/*
 * XREFs of ?QueryInterface@CBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CWICBitmapWrapper::QueryInterface((CWICBitmapWrapper *)(a1 - 48), a2, a3);
}
