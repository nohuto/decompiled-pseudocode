/*
 * XREFs of ?QueryInterface@CRenderTargetImageSource@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C62E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCoRenderVisualProxy::QueryInterface((CCoRenderVisualProxy *)(a1 - 152), a2, a3);
}
