/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C7A64
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00C7850 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00BACA0 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C00C6814 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C00C7B00 (MonitorGetNumConnectedMonitor.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00D6A90 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  MONITOR_MGR *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *a3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v8);
    }
    v6 = *((_QWORD *)a1 + 307);
    if ( v6 && (v5 = *(MONITOR_MGR **)(v6 + 96)) != 0LL )
    {
      MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v9 + 24) = a1;
      WdLogEvent5_WdError(v9);
    }
  }
  MonitorGetNumConnectedMonitor(a1);
  return 0LL;
}
