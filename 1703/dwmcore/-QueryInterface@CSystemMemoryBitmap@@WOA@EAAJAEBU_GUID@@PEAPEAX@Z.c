/*
 * XREFs of ?QueryInterface@CSystemMemoryBitmap@@WOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CSystemMemoryBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 224), a2, a3);
}
