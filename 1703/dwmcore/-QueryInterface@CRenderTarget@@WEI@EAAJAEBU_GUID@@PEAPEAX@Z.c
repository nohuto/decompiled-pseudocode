/*
 * XREFs of ?QueryInterface@CRenderTarget@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 72), a2, a3);
}
