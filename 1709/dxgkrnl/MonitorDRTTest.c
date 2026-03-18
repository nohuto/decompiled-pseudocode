/*
 * XREFs of MonitorDRTTest @ 0x1C01FDF58
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C01EBC64 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01FCE08 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01FDE0C (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01FE0DC (MonitorDestroySimulatedMonitor.c)
 */

__int64 __fastcall MonitorDRTTest(
        DXGADAPTER *this,
        struct _D3DKMT_DRT_MONITOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int SimulatedMonitor; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  MONITOR_MGR *v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-18h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  if ( *((_DWORD *)a2 + 1) < 0x20u )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = *((unsigned int *)a2 + 1);
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 288);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225659LL;
  }
  v17 = *((_DWORD *)a2 + 3);
  if ( !v17 )
  {
    v27 = *(MONITOR_MGR **)(v15 + 96);
    if ( !v27 )
    {
      v28 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v28 + 24) = this;
      WdLogEvent5_WdError(v28);
      return 3221225485LL;
    }
    return (unsigned int)MONITOR_MGR::_DRTGetTargetInformation(v27, a2, v12, v13);
  }
  v18 = (unsigned int)(v17 - 1);
  if ( !(_DWORD)v18 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24);
      WdLogEvent5_WdAssertion(v26);
    }
    SimulatedMonitor = MonitorCreateSimulatedMonitor(
                         (PERESOURCE *)this,
                         *((unsigned int *)a2 + 4),
                         *((_DWORD *)a2 + 5),
                         v25,
                         v29,
                         0,
                         v30,
                         a3);
    goto LABEL_20;
  }
  if ( (_DWORD)v18 == 1 )
  {
    if ( (int)DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 0) < 0 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v22);
    }
    SimulatedMonitor = MonitorDestroySimulatedMonitor(this, *((_DWORD *)a2 + 4), a3);
LABEL_20:
    v20 = SimulatedMonitor;
    DmmEnableModeResetOnMonitorEvent((PERESOURCE *)this, 1);
    return v20;
  }
  v19 = WdLogNewEntry5_WdWarning(v18, v15, v12);
  *(_QWORD *)(v19 + 24) = *((unsigned int *)a2 + 3);
  *(_QWORD *)(v19 + 32) = a2;
  WdLogEvent5_WdWarning(v19);
  return (unsigned int)-1073741811;
}
