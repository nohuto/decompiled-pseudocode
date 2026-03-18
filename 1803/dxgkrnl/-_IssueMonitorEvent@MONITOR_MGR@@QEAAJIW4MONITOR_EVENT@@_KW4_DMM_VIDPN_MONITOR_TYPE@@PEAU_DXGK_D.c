/*
 * XREFs of ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B0D8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B444 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B610 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B9B8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C098 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C234 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetUsageClass @ 0x1C022F470 (MonitorSetUsageClass.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C01D10D4 (DxgkIncreaseMonitorUniqueness.c)
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
  const GUID *v8; // r9
  int v9; // eax
  GUID *p_ActivityId; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  LIST_ENTRY *Flink; // rsi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  GUID ActivityId; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int64 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]

  v7 = a3;
  v21 = a2;
  v25 = a4;
  if ( !a3 || a3 == 7 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( dword_1C0079090 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x400000000080uLL) )
      {
        v30 = 4LL;
        v29 = &v21;
        v26 = *(_QWORD *)(*((_QWORD *)a1->Owner + 2) + 268LL);
        v31 = &v26;
        v33 = &v22;
        v35 = &v25;
        v37 = &v23;
        v32 = 8LL;
        v22 = v7;
        v34 = 4LL;
        v36 = 8LL;
        v23 = a5;
        v38 = 4LL;
        if ( a6 )
          v9 = *(unsigned __int8 *)(a6 + 48);
        else
          v9 = -1;
        v24 = v9;
        v39 = &v24;
        v40 = 4LL;
        p_ActivityId = (GUID *)(a6 + 8);
        if ( !a6 )
          p_ActivityId = &ActivityId;
        TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C005985F, p_ActivityId, v8, 8u, &pData);
      }
    }
  }
  if ( !(_DWORD)v7 )
    goto LABEL_18;
  if ( (int)v7 <= 0 )
  {
LABEL_17:
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 9423LL;
    WdLogEvent5_WdAssertion(v11);
    goto LABEL_19;
  }
  if ( (int)v7 > 2 )
  {
    if ( (int)v7 <= 8 )
      goto LABEL_18;
    if ( (_DWORD)v7 != 9 )
    {
      if ( (_DWORD)v7 != 10 )
        goto LABEL_17;
LABEL_18:
      DxgkIncreaseMonitorUniqueness((__int64)a1);
    }
  }
LABEL_19:
  if ( (unsigned int)v7 > 3 && (unsigned int)(v7 - 7) > 3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( a1 == (struct _FAST_MUTEX *)-224LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  KeAcquireGuardedMutex(a1 + 4);
  Flink = a1[2].Event.Header.WaitListHead.Flink;
  if ( Flink == &a1[2].Event.Header.WaitListHead )
    Flink = 0LL;
  while ( 1 )
  {
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v19 = WdLogNewEntry5_WdAssertion(v14);
      WdLogEvent5_WdAssertion(v19);
    }
    KeReleaseGuardedMutex(a1 + 4);
    if ( !Flink )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, struct _LIST_ENTRY *, _QWORD, __int64, int, __int64))Flink[1].Flink)(
           *((_QWORD *)a1->Owner + 2),
           v21,
           Flink[1].Blink,
           (unsigned int)v7,
           v25,
           a5,
           a6) < 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v17[3] = Flink[1].Flink;
      v17[4] = Flink[1].Blink;
      v17[5] = v7;
      v17[6] = v21;
      WdLogEvent5_WdError(v17);
    }
    if ( a1 == (struct _FAST_MUTEX *)-224LL )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v18);
    }
    KeAcquireGuardedMutex(a1 + 4);
    Flink = Flink->Flink;
    if ( Flink == &a1[2].Event.Header.WaitListHead )
      Flink = 0LL;
  }
  return 0LL;
}
