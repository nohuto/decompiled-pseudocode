/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00E4D80
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00E2A20 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00B108C (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00E4428 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00E4E1C (MonitorGetNumConnectedMonitor.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *this, __int64 a2, unsigned __int8 *a3)
{
  MONITOR_MGR *v4; // rcx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *a3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v7);
    }
    v5 = *((_QWORD *)this + 288);
    if ( v5 && (v4 = *(MONITOR_MGR **)(v5 + 96)) != 0LL )
    {
      MONITOR_MGR::_IsUsingSimulatedMonitor(v4);
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v8 + 24) = this;
      WdLogEvent5_WdError(v8);
    }
  }
  MonitorGetNumConnectedMonitor(this);
  return 0LL;
}
