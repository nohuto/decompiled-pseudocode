/*
 * XREFs of ?QueryInterface@CCompressedSourceBitmap@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D67B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CCompressedSourceBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 232), a2, a3);
}
