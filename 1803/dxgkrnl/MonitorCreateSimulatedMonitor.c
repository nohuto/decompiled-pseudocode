/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C022D784
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4774 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C7430 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C022D8D0 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  PERESOURCE v14; // rax
  __int64 v15; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  int IsTargetForcable; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h] BYREF

  v26 = a4;
  v8 = (int)a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = this;
  if ( !this || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = this[307];
  if ( !v14 || (SpinLock = (struct _FAST_MUTEX *)v14->SpinLock) == 0LL )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v25 = 0;
  IsTargetForcable = DmmIsTargetForcable((DXGADAPTER *)this, v10, &v25, v8);
  v22 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v23 + 24) = v10;
    *(_QWORD *)(v23 + 32) = v22;
    WdLogEvent5_WdError(v23);
    return (unsigned int)v22;
  }
  if ( v25 )
  {
LABEL_16:
    v26 = 0LL;
    LODWORD(v22) = MONITOR_MGR::_HandleCreateSimulatedMonitor(SpinLock, v10, v8, 0LL, (struct DXGMONITOR *)&v26, a8);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1073741825, v10, v22, 0LL);
    return (unsigned int)v22;
  }
  v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v24 + 24) = v10;
  WdLogEvent5_WdWarning(v24);
  return 3221225659LL;
}
