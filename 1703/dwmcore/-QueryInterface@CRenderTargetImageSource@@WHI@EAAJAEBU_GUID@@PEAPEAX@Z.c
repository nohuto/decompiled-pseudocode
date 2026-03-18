/*
 * XREFs of ?QueryInterface@CRenderTargetImageSource@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D59C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRenderTargetImageSource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCoRenderVisualProxy::QueryInterface((CCoRenderVisualProxy *)(a1 - 120), a2, a3);
}
