/*
 * XREFs of ?GetMonitorManager@CApplicationViewManager@@QEBA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x180074660
 * Callers:
 *     ?GetMonitorManager@CGlobals@ApplicationViewManagement@@SA?AV?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@XZ @ 0x18007AAC8 (-GetMonitorManager@CGlobals@ApplicationViewManagement@@SA-AV-$ComPtr@UIImmersiveMonitorManager@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CApplicationViewManager::GetMonitorManager(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 584);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
