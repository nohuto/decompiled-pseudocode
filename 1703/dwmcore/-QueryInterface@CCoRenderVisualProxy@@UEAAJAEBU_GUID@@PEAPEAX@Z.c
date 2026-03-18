/*
 * XREFs of ?QueryInterface@CCoRenderVisualProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180016830
 * Callers:
 *     ?QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5520 (-QueryInterface@CCoRenderVisualProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D59A0 (-QueryInterface@CRenderTargetImageSource@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D59B0 (-QueryInterface@CRenderTargetImageSource@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CRenderTargetImageSource@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D59C0 (-QueryInterface@CRenderTargetImageSource@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CCoRenderVisualProxy::QueryInterface(CCoRenderVisualProxy *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CCoRenderVisualProxy *)((char *)this + 8), a2, a3);
}
