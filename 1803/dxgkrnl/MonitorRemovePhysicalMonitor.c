/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C022EE88
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01FC280 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C020D7C0 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C098 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rsi
  char v6; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rbp
  unsigned int v16; // ebx

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a4 )
  {
    *((_DWORD *)a4 + 9) = v5;
    v9 = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)a4 + 10) = 0;
    *(_QWORD *)((char *)a4 + 52) = v9;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)this + 307);
  if ( !v12 || (v15 = *(_QWORD *)(v12 + 96)) == 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v16 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(struct _FAST_MUTEX **)(v12 + 96), v5, v6, a4);
  MONITOR_MGR::_LogMonitorPresentEvent(v15, 2, v5, v16, 0LL);
  return v16;
}
