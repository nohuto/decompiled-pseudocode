/*
 * XREFs of ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F2C4
 * Callers:
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00FB2E8 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01E5070 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01E548C (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 *     DxgkHandleIndirectEscape @ 0x1C01E5EA4 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall AUTO_PNPPOWER_LOCK::Release(AUTO_PNPPOWER_LOCK *this)
{
  if ( *((_BYTE *)this + 10) )
  {
    if ( *(_BYTE *)(*(_QWORD *)this + 483LL) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 64LL) + 3912LL));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)this + 168LL));
    KeLeaveCriticalRegion();
    *((_BYTE *)this + 10) = 0;
  }
}
