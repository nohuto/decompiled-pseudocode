/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C0120768
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoHandleQueryId @ 0x1C0120530 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0036E90 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C010B6E0 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v13; // rcx
  DXGMONITOR *v14; // rdi
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rcx
  int v18; // esi
  struct DXGMONITOR *v19; // rdi
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  DXGMONITOR *v30; // [rsp+30h] [rbp-69h] BYREF
  struct DXGMONITOR *v31; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v32[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v33[10]; // [rsp+60h] [rbp-39h] BYREF

  v3 = a2;
  memset(v33, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v33[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 8;
  LOBYTE(v33[6]) = -1;
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = v3;
  *(_QWORD *)(v8 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !this[288] )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v23);
  }
  SpinLock = (struct _FAST_MUTEX *)this[288]->SpinLock;
  if ( !SpinLock )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = this;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
  v30 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 0, (ULONG **)&v30);
  v14 = v30;
  v15 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v30 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( v15 == -1073741275 )
      goto LABEL_27;
    v27 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v27);
  }
  else
  {
    if ( !v30 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v25);
    }
    if ( *((_DWORD *)v14 + 104) == 1 )
    {
      AttachedPhysicalMonitor = v14;
      v14 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v14);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 5) != a3 )
  {
LABEL_27:
    v29 = WdLogNewEntry5_WdDmmEvent(v13);
    *(_QWORD *)(v29 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v29);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 280), 1u);
  v16 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 280));
  KeLeaveCriticalRegion();
  if ( v16 >= 0 && v14 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v14 + 280), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 280), 1u);
    DXGMONITOR::_CopyMonitorInformation(v14, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 280));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 280));
    KeLeaveCriticalRegion();
  }
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  v18 = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 1, (ULONG **)&v31);
  if ( v18 >= 0 )
  {
    v19 = v31;
    if ( !v31 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v28);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 280), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v19, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v32, v20);
    ExReleaseResourceLite((PERESOURCE)((char *)v19 + 280));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7, v3, v18, v32);
  return (unsigned int)v18;
}
