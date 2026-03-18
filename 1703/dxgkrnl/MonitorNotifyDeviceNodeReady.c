/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C011B22C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoHandleQueryId @ 0x1C01197F0 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0045CF8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0108864 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01E7A18 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGMONITOR *v22; // rdi
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGMONITOR *v33; // rdi
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  DXGMONITOR *v45; // [rsp+30h] [rbp-59h] BYREF
  struct DXGMONITOR *v46; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v47[2]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v48[8]; // [rsp+60h] [rbp-29h] BYREF

  v3 = a2;
  memset(v48, 0, sizeof(v48));
  EtwActivityIdControl(3u, (LPGUID)&v48[1]);
  v48[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v48[3]) = 8;
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !this[285] )
  {
    v38 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v38);
  }
  SpinLock = (struct _FAST_MUTEX *)this[285]->SpinLock;
  if ( !SpinLock )
  {
    v39 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdError(v39);
    return 3221225485LL;
  }
  v45 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, 0LL, (ULONG **)&v45);
  v22 = v45;
  v23 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v45 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v41);
    }
    if ( v23 == -1073741275 )
      goto LABEL_27;
    v42 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v42);
  }
  else
  {
    if ( !v45 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v40);
    }
    if ( *((_DWORD *)v22 + 94) == 1 )
    {
      AttachedPhysicalMonitor = v22;
      v22 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v22, v18, v20, v21);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 5) != a3 )
  {
LABEL_27:
    v44 = WdLogNewEntry5_WdDmmEvent(v19, v18, v20, v21);
    *(_QWORD *)(v44 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v44);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
  v26 = DXGMONITOR::_OnMonitorDeviceNodeReady(
          AttachedPhysicalMonitor,
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v48,
          v24,
          v25);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
  KeLeaveCriticalRegion();
  if ( v26 >= 0 && v22 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v22 + 240), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    DXGMONITOR::_CopyMonitorInformation(v22, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
    KeLeaveCriticalRegion();
  }
  v46 = 0LL;
  memset(v47, 0, sizeof(v47));
  LOBYTE(v27) = 1;
  v30 = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v3, v27, (ULONG **)&v46);
  if ( v30 >= 0 )
  {
    v33 = v46;
    if ( !v46 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v29, v28, v31, v32);
      WdLogEvent5_WdAssertion(v43);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v33 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v33, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v47, v34, v35);
    ExReleaseResourceLite((PERESOURCE)((char *)v33 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7LL, (unsigned int)v3, (unsigned int)v30, v47);
  return (unsigned int)v30;
}
