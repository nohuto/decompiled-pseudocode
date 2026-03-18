/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C01E42D4
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0103FE8 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C01CEAF0 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008987C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rbp
  unsigned int v19; // ebx

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
    *((_QWORD *)a4 + 6) = v9;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 285);
  if ( !v15 || (v18 = *(_QWORD *)(v15 + 96)) == 0 )
  {
    v16 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  LOBYTE(v12) = v6;
  v19 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(MONITOR_MGR **)(v15 + 96), (unsigned int)v5, v12, a4);
  MONITOR_MGR::_LogMonitorPresentEvent(v18, 2LL, (unsigned int)v5, v19, 0LL);
  return v19;
}
