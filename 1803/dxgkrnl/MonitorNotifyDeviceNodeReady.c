/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C022EA18
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C020C6BC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoHandleQueryId @ 0x1C020CC00 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0046EB8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0235B14 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02392D0 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  PERESOURCE v13; // rax
  __int64 v14; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  __int64 v16; // rax
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v20; // rcx
  DXGMONITOR *v21; // rdi
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // esi
  struct DXGMONITOR *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  DXGMONITOR *v32; // [rsp+30h] [rbp-69h] BYREF
  struct DXGMONITOR *v33; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v34[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v35[10]; // [rsp+60h] [rbp-39h] BYREF

  v3 = a2;
  memset(v35, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v35[1]);
  v35[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v35[3]) = 8;
  LOBYTE(v35[6]) = -1;
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = this[307];
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
    v13 = this[307];
  }
  SpinLock = (struct _FAST_MUTEX *)v13->SpinLock;
  if ( !SpinLock )
  {
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v32 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 0, &v32);
  v21 = v32;
  v22 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v32 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( v22 == -1073741275 )
      goto LABEL_27;
    v25 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v25);
  }
  else
  {
    if ( !v32 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v23);
    }
    if ( *((_DWORD *)v21 + 108) == 1 )
    {
      AttachedPhysicalMonitor = v21;
      v21 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v21);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 7) != a3 )
  {
LABEL_27:
    v31 = WdLogNewEntry5_WdDmmEvent(v20);
    *(_QWORD *)(v31 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v31);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
  v26 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v35);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
  KeLeaveCriticalRegion();
  if ( v26 >= 0 && v21 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v21 + 296), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296), 1u);
    DXGMONITOR::_CopyMonitorInformation(v21, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 296));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v21 + 296));
    KeLeaveCriticalRegion();
  }
  v33 = 0LL;
  memset(v34, 0, sizeof(v34));
  v28 = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 1, &v33);
  if ( v28 >= 0 )
  {
    v29 = v33;
    if ( !v33 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v29 + 296), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v29, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v34);
    ExReleaseResourceLite((PERESOURCE)((char *)v29 + 296));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7, v3, v28, v34);
  return (unsigned int)v28;
}
