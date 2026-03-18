/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C00027E0
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[38])(this, a2);
}
