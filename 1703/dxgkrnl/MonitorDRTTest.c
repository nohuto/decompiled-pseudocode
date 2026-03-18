/*
 * XREFs of MonitorDRTTest @ 0x1C01E3608
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01D4D04 (DmmEnableModeResetOnMonitorEvent.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01E2648 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01E378C (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  MONITOR_MGR *v36; // rcx
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-28h]
  int v39; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v11 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + 285);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v14, 0LL);
    *(_QWORD *)(v19 + 24) = this;
    WdLogEvent5_WdError(v19);
    return 3221225659LL;
  }
  v20 = *((_DWORD *)a2 + 3);
  if ( !v20 )
  {
    v36 = *(MONITOR_MGR **)(v18 + 96);
    if ( !v36 )
    {
      v37 = WdLogNewEntry5_WdError(0LL, v18);
      *(_QWORD *)(v37 + 24) = this;
      WdLogEvent5_WdError(v37);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v36, a2, v15, v16);
  }
  v21 = (unsigned int)(v20 - 1);
  if ( !(_DWORD)v21 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0LL) < 0 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v35);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((unsigned int *)a2 + 5),
                         v34,
                         v38,
                         0,
                         v39,
                         a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v21 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((__int64)this, 0LL) < 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
      WdLogEvent5_WdAssertion(v28);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
    LOBYTE(v30) = 1;
    v23 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((__int64)this, v30);
    return v23;
  }
  v22 = WdLogNewEntry5_WdWarning(v21, v18, v15, v16);
  *(_QWORD *)(v22 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v22 + 32) = a2;
  WdLogEvent5_WdWarning(v22);
  return (unsigned int)-1073741811;
}
