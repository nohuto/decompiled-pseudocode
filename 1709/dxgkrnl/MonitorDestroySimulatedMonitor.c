/*
 * XREFs of MonitorDestroySimulatedMonitor @ 0x1C01FE0DC
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C4FE0 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C01FDF58 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorDestroySimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  PERESOURCE v9; // rax
  __int64 v10; // rax
  __int64 SpinLock; // rsi
  unsigned int v13; // ebx

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = this[288];
  if ( !v9 || (SpinLock = v9->SpinLock) == 0 )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v13 = MONITOR_MGR::_HandleRemoveSimulatedMonitor((struct _FAST_MUTEX *)v9->SpinLock, v4, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(SpinLock, 1073741826, v4, v13, 0LL);
  return v13;
}
