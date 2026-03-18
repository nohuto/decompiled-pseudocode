/*
 * XREFs of ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSecondarySysmemBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 96), a2, a3);
}
