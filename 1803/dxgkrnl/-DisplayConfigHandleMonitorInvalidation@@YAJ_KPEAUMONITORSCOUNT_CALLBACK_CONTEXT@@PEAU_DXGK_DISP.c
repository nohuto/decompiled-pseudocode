/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C462C
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00C44F0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C5C40 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C67BC (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C6B98 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4774 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v3; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  struct DXGGLOBAL *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  struct DXGGLOBAL *v23; // rax
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v26; // [rsp+38h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h]
  unsigned __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  int v31; // [rsp+60h] [rbp-10h]
  char v32; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v27;
  LODWORD(v30) = 257;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0xFFFFFFFF00000000uLL;
  if ( a2 )
    v3 = a2;
  WORD2(v30) = 0;
  BYTE6(v30) = 0;
  v31 = 0;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v3 + 25);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v3 + 8) |= 4u;
  LODWORD(v25) = 4;
  v26 = a3;
  BYTE4(v25) = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v9 = (int)DXGGLOBAL::IterateAdaptersWithCallback(Global, DisplayConfigDestroySimulatedMonitors, &v25, 1LL);
  if ( (a1 & 1) == 0 )
  {
    v17 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = v9;
    WdLogEvent5_WdEvent(v17);
    return (unsigned int)v9;
  }
  *(_QWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 0;
  v10 = DXGGLOBAL::GetGlobal(v8);
  v11 = DXGGLOBAL::IterateAdaptersWithCallback(v10, DisplayConfigCountMonitorsCallback, v3, 1LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v18 + 24) = v9;
    WdLogEvent5_WdWarning(v18);
    return (unsigned int)v9;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 > 1u )
    {
      if ( *((_DWORD *)v3 + 2) )
        *((_DWORD *)v3 + 8) |= 2u;
      LODWORD(v25) = 5;
      BYTE4(v25) = 0;
      v26 = a3;
      v24 = DXGGLOBAL::GetGlobal(v13);
      LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(v24, DisplayConfigDestroySimulatedMonitors, &v25, 1LL);
    }
    return (unsigned int)v9;
  }
  if ( *((_DWORD *)v3 + 2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v19 + 24) = 2684LL;
    WdLogEvent5_WdAssertion(v19);
  }
  *((_DWORD *)v3 + 8) |= 1u;
  v20 = *((unsigned int *)v3 + 5);
  if ( (_DWORD)v20 != -1 )
  {
    LOBYTE(v15) = *((_BYTE *)v3 + 29);
    v32 = 0;
    LODWORD(v9) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v3 + 12,
                    v20,
                    5LL,
                    v15,
                    &v32,
                    a3,
                    v25,
                    v26,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31);
    if ( (int)v9 < 0 || !v32 )
    {
LABEL_22:
      if ( (a1 & 4) != 0 )
      {
        v23 = DXGGLOBAL::GetGlobal(v22);
        DXGGLOBAL::IterateAdaptersWithCallback(v23, InvalidateChildRelationsOnAdapterCallback, 0LL, 1LL);
      }
      return (unsigned int)v9;
    }
    if ( (a1 & 4) != 0 )
    {
      *((_BYTE *)v3 + 25) = 0;
      goto LABEL_22;
    }
    return (unsigned int)v9;
  }
  v21 = WdLogNewEntry5_WdWarning(v13, v20, v14);
  *(_QWORD *)(v21 + 24) = a1;
  WdLogEvent5_WdWarning(v21);
  return 3223191554LL;
}
