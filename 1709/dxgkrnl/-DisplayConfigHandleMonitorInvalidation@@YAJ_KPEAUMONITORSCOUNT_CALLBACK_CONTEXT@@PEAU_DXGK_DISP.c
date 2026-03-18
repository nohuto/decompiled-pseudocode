/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0
 * Callers:
 *     DxgkInvalidateMonitorConnections @ 0x1C00FBDA0 (DxgkInvalidateMonitorConnections.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4928 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3968 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGGLOBAL *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  struct DXGGLOBAL *v25; // rax
  struct DXGGLOBAL *v26; // rax
  __int64 v27; // [rsp+30h] [rbp-40h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v28; // [rsp+38h] [rbp-38h]
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h]
  unsigned __int64 v31; // [rsp+50h] [rbp-20h]
  __int64 v32; // [rsp+58h] [rbp-18h]
  int v33; // [rsp+60h] [rbp-10h]
  char v34; // [rsp+A0h] [rbp+30h] BYREF

  v3 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)&v29;
  LODWORD(v32) = 257;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0xFFFFFFFF00000000uLL;
  if ( a2 )
    v3 = a2;
  WORD2(v32) = 0;
  BYTE6(v32) = 0;
  v33 = 0;
  if ( a3 )
    *((_BYTE *)a3 + 48) = *((_BYTE *)v3 + 25);
  if ( (a1 & 2) != 0 )
    *((_DWORD *)v3 + 8) |= 4u;
  LODWORD(v27) = 4;
  v28 = a3;
  BYTE4(v27) = (a1 & 2) == 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  v9 = (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
              (__int64)&v27,
              1);
  if ( (a1 & 1) == 0 )
  {
    v19 = WdLogNewEntry5_WdEvent(v8, v7, v10, v11);
    *(_QWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 32) = v9;
    WdLogEvent5_WdEvent(v19);
    return (unsigned int)v9;
  }
  *(_QWORD *)v3 = 0LL;
  *((_DWORD *)v3 + 2) = 0;
  v12 = DXGGLOBAL::GetGlobal(v8);
  v13 = DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v12,
          (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
          (__int64)v3,
          1);
  v9 = v13;
  if ( v13 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v20 + 24) = v9;
    WdLogEvent5_WdWarning(v20);
    return (unsigned int)v9;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)v3 > 1u )
    {
      if ( *((_DWORD *)v3 + 2) )
        *((_DWORD *)v3 + 8) |= 2u;
      LODWORD(v27) = 5;
      BYTE4(v27) = 0;
      v28 = a3;
      v26 = DXGGLOBAL::GetGlobal(v15);
      LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(
                      (__int64)v26,
                      (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                      (__int64)&v27,
                      1);
    }
    return (unsigned int)v9;
  }
  if ( *((_DWORD *)v3 + 2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v21 + 24) = 2659LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *((_DWORD *)v3 + 8) |= 1u;
  v22 = *((unsigned int *)v3 + 5);
  if ( (_DWORD)v22 != -1 )
  {
    LOBYTE(v17) = *((_BYTE *)v3 + 29);
    v34 = 0;
    LODWORD(v9) = DisplayConfigHelperCreateSimulateMonitor(
                    (char *)v3 + 12,
                    v22,
                    5LL,
                    v17,
                    &v34,
                    a3,
                    v27,
                    v28,
                    v29,
                    v30,
                    v31,
                    v32,
                    v33);
    if ( (int)v9 < 0 || !v34 )
    {
LABEL_22:
      if ( (a1 & 4) != 0 )
      {
        v25 = DXGGLOBAL::GetGlobal(v24);
        DXGGLOBAL::IterateAdaptersWithCallback(
          (__int64)v25,
          (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
          0LL,
          1);
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
  v23 = WdLogNewEntry5_WdWarning(v15, v22, v16);
  *(_QWORD *)(v23 + 24) = a1;
  WdLogEvent5_WdWarning(v23);
  return 3223191554LL;
}
