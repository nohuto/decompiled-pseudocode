/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C01E34BC
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A9200 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8FD8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01AB420 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C01E3608 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  PERESOURCE v17; // rax
  __int64 v18; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  int IsTargetForcable; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // [rsp+58h] [rbp+10h] BYREF
  __int64 v30; // [rsp+68h] [rbp+20h] BYREF

  v30 = a4;
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
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = this[285];
  if ( !v17 || (SpinLock = (struct _FAST_MUTEX *)v17->SpinLock) == 0LL )
  {
    v18 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v29 = 0;
  IsTargetForcable = DmmIsTargetForcable((DXGADAPTER *)this, (unsigned int)v10, &v29, v8);
  v26 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v27 + 24) = v10;
    *(_QWORD *)(v27 + 32) = v26;
    WdLogEvent5_WdError(v27);
    return (unsigned int)v26;
  }
  if ( v29 )
  {
LABEL_16:
    v30 = 0LL;
    LODWORD(v26) = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                     SpinLock,
                     (unsigned int)v10,
                     (unsigned int)v8,
                     0LL,
                     (struct DXGMONITOR *)&v30,
                     a8);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1073741825LL, (unsigned int)v10, (unsigned int)v26, 0LL);
    return (unsigned int)v26;
  }
  v28 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
  *(_QWORD *)(v28 + 24) = v10;
  WdLogEvent5_WdWarning(v28);
  return 3221225659LL;
}
