/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9B80 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAB1C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8FD8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdi
  struct DXGGLOBAL *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *v21; // rax
  __int64 v22; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h]
  unsigned __int64 v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+60h] [rbp-10h]
  char v29; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v24;
  LODWORD(v27) = 257;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0xFFFFFFFF00000000uLL;
  WORD2(v27) = 0;
  if ( a2 )
    v3 = a2;
  v28 = 0;
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v3 + 8) |= 4u;
  LODWORD(v22) = 4;
  v23 = a3;
  BYTE4(v22) = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal();
  v7 = (int)DXGGLOBAL::IterateAdaptersWithCallback(Global, DisplayConfigDestroySimulatedMonitors, &v22, 1LL);
  if ( (a1 & 1) == 0 )
  {
    v15 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = v7;
    WdLogEvent5_WdEvent(v15);
    return (unsigned int)v7;
  }
  *(_QWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 0;
  v8 = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::IterateAdaptersWithCallback(v8, DisplayConfigCountMonitorsCallback, v3, 1LL);
  v7 = v9;
  if ( v9 < 0 )
  {
    v16 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v16 + 24) = v7;
    WdLogEvent5_WdWarning(v16);
    return (unsigned int)v7;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 > 1u )
    {
      if ( *((_DWORD *)v3 + 2) )
        *((_DWORD *)v3 + 8) |= 2u;
      LODWORD(v22) = 5;
      BYTE4(v22) = 0;
      v23 = a3;
      v21 = DXGGLOBAL::GetGlobal();
      LODWORD(v7) = DXGGLOBAL::IterateAdaptersWithCallback(v21, DisplayConfigDestroySimulatedMonitors, &v22, 1LL);
    }
    return (unsigned int)v7;
  }
  if ( *((_DWORD *)v3 + 2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v17 + 24) = 3267LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *((_DWORD *)v3 + 8) |= 1u;
  v18 = *((unsigned int *)v3 + 5);
  if ( (_DWORD)v18 != -1 )
  {
    LOBYTE(v13) = *((_BYTE *)v3 + 29);
    v29 = 0;
    LODWORD(v7) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v3 + 12,
                    v18,
                    5LL,
                    v13,
                    &v29,
                    a3,
                    v22,
                    v23,
                    v24,
                    v25,
                    v26,
                    v27,
                    v28);
    if ( (int)v7 < 0 || !v29 )
    {
LABEL_20:
      if ( (a1 & 4) != 0 )
      {
        v20 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::IterateAdaptersWithCallback(v20, InvalidateChildRelationsOnAdapterCallback, 0LL, 1LL);
      }
      return (unsigned int)v7;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v3 + 25) = 0;
      goto LABEL_20;
    }
    return (unsigned int)v7;
  }
  v19 = WdLogNewEntry5_WdWarning(v11, v18, v12, v13);
  *(_QWORD *)(v19 + 24) = a1;
  WdLogEvent5_WdWarning(v19);
  return 3223191554LL;
}
