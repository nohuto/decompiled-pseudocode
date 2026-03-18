/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C011953C
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0118D50 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0108864 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  char v6; // r15
  __int64 v7; // rsi
  __int64 v10; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  MONITOR_MGR *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int MonitorInstance; // r14d
  struct DXGMONITOR *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _OWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v32; // [rsp+70h] [rbp+8h] BYREF

  v6 = a4;
  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = this;
  if ( !this || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *((_QWORD *)v11 + 6) = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)v11 + 10) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v28);
  }
  v16 = *((_QWORD *)this + 285);
  if ( !v16 || (v17 = *(MONITOR_MGR **)(v16 + 96)) == 0LL )
  {
    v29 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v29 + 24) = this;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  LOBYTE(v15) = v6;
  MONITOR_MGR::_HandleCreatePhysicalMonitor(v17, (unsigned int)v7, a3, v15, a5, v11);
  v32 = 0LL;
  memset(v31, 0, sizeof(v31));
  LOBYTE(v18) = 1;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v17, (unsigned int)v7, v18, (ULONG **)&v32);
  if ( MonitorInstance >= 0 )
  {
    v24 = v32;
    if ( !v32 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v24 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v24, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v31, v25, v26);
    ExReleaseResourceLite((PERESOURCE)((char *)v24 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v17, 1LL, (unsigned int)v7, (unsigned int)MonitorInstance, v31);
  return (unsigned int)MonitorInstance;
}
