/*
 * XREFs of ?_EnterMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0045C98
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_EnterMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 96);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 20);
    *(_DWORD *)(v7 + 20) = v8 + 1;
    if ( !v8 )
      KeClearEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL));
  }
}
