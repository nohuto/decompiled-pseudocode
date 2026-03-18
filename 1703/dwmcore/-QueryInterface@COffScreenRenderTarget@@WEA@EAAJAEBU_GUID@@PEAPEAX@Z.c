/*
 * XREFs of ?QueryInterface@COffScreenRenderTarget@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D66A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall COffScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILFactory *)(a1 - 64), a2, a3);
}
