/*
 * XREFs of ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00422A0
 * Callers:
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CACA0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01CB080 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C01CBAC4 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall AUTO_REMOVE_LOCK::Release(PVOID *this)
{
  if ( *((_BYTE *)this + 8) )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)*this + 2, *this, 0x20u);
    *((_BYTE *)this + 8) = 0;
  }
}
