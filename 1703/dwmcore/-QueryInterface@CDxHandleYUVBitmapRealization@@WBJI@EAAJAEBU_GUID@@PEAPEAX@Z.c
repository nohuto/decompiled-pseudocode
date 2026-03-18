/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 408), a2, a3);
}
