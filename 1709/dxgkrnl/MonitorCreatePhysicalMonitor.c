/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C0104ED8
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C010B6E0 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  MONITOR_MGR *v14; // rbp
  __int64 v15; // rcx
  int MonitorInstance; // r14d
  struct DXGMONITOR *v17; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _OWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v23; // [rsp+70h] [rbp+8h] BYREF

  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = (__int64)a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *(_QWORD *)(v11 + 52) = *(_QWORD *)((char *)this + 268);
    *(_DWORD *)(v11 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v19);
  }
  v13 = *((_QWORD *)this + 288);
  if ( !v13 || (v14 = *(MONITOR_MGR **)(v13 + 96)) == 0LL )
  {
    v20 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  MONITOR_MGR::_HandleCreatePhysicalMonitor(v14, v7, a3, a4, a5, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11);
  v23 = 0LL;
  memset(v22, 0, sizeof(v22));
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v14, v7, 1, (ULONG **)&v23);
  if ( MonitorInstance >= 0 )
  {
    v17 = v23;
    if ( !v23 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v21);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v17 + 280), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v17, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v22);
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 280));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v14, 1, v7, MonitorInstance, v22);
  return (unsigned int)MonitorInstance;
}
