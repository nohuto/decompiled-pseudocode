/*
 * XREFs of ?QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSecondaryD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 16), a2, a3);
}
