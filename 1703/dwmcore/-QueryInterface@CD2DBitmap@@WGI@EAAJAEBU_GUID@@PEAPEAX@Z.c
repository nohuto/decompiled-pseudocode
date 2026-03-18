/*
 * XREFs of ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CD2DBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 104), a2, a3);
}
