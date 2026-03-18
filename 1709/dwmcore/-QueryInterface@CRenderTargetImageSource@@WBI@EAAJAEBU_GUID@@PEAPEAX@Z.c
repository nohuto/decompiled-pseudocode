/*
 * XREFs of ?QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C62C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetImageSource::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CCoRenderVisualProxy::QueryInterface((CCoRenderVisualProxy *)(a1 - 24), a2, a3);
}
