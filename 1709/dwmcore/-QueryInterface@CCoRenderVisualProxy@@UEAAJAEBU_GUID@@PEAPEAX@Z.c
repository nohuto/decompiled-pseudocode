/*
 * XREFs of ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180129870
 * Callers:
 *     ?QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C5E50 (-QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C62C0 (-QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C62D0 (-QueryInterface@CRenderTargetImageSource@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C62E0 (-QueryInterface@CRenderTargetImageSource@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCoRenderVisualProxy::QueryInterface(CCoRenderVisualProxy *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCoRenderVisualProxy *)((char *)this + 8), a2, a3);
}
