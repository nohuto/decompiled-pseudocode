/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B110C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0104228 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD4A4 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01FE418 (MonitorEnableDisableTargetAsHMD.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1C010E204 (-IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rdi
  DXGSESSIONMGR *v8; // rcx
  __int64 v9; // rcx
  LIST_ENTRY *i; // rsi
  __int64 v11; // rcx
  const GUID *v13; // r9
  GUID *p_ActivityId; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+4Ch] [rbp-B4h] BYREF
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]

  v7 = a3;
  v22 = a2;
  v26 = a4;
  if ( !a3 || a3 == 7 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( dword_1C005F810 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C005F810, 0x400000000080uLL) )
      {
        v31 = 4LL;
        v30 = &v22;
        v27 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 268LL);
        v32 = &v27;
        v34 = &v24;
        v36 = &v26;
        v38 = &v25;
        v33 = 8LL;
        v24 = v7;
        v35 = 4LL;
        v37 = 8LL;
        v25 = a5;
        v39 = 4LL;
        if ( a6 )
          v23 = *(unsigned __int8 *)(a6 + 48);
        else
          v23 = -1;
        v41 = 4LL;
        v40 = &v23;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C005F810, &unk_1C0041714, p_ActivityId, v13, 8u, &pData);
      }
    }
  }
  if ( !(_DWORD)v7 )
  {
LABEL_7:
    v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)a1) + 73);
    if ( v8 )
    {
      DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(v8);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v16 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v16);
    }
    goto LABEL_9;
  }
  if ( (int)v7 <= 0 )
    goto LABEL_36;
  if ( (int)v7 > 2 )
  {
    if ( (int)v7 > 8 )
    {
      if ( (_DWORD)v7 == 9 )
        goto LABEL_9;
      if ( (_DWORD)v7 != 10 )
      {
LABEL_36:
        v15 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v15 + 24) = 9370LL;
        WdLogEvent5_WdAssertion(v15);
        goto LABEL_9;
      }
    }
    goto LABEL_7;
  }
LABEL_9:
  if ( (unsigned int)v7 > 3 && (unsigned int)(v7 - 7) > 3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex(a1 + 4);
  for ( i = a1[2].Event.Header.WaitListHead.Flink; ; i = i->Flink )
  {
    if ( i == &a1[2].Event.Header.WaitListHead )
      i = 0LL;
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v21);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !i )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int, __int64))i[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v22,
           i[1].Blink,
           (unsigned int)v7,
           v26,
           a5,
           a6) < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v19[3] = i[1].Flink;
      v19[4] = i[1].Blink;
      v19[5] = v7;
      v19[6] = v22;
      WdLogEvent5_WdError(v19);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v20);
    }
    KeAcquireGuardedMutex(a1 + 4);
  }
  return 0LL;
}
