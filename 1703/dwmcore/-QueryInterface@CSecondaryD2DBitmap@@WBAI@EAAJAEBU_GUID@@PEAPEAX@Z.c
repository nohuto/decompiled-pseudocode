/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 264), a2, a3);
}
