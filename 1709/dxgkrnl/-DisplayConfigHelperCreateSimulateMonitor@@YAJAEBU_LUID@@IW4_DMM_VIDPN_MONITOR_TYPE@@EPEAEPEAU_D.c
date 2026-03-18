/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3968
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4928 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C01ED724 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01FDE0C (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        int a3,
        char a4,
        unsigned __int8 *a5,
        __int64 a6)
{
  __int64 v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // [rsp+20h] [rbp-88h]
  int v27; // [rsp+30h] [rbp-78h]
  unsigned __int8 v28[8]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-60h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v31[32]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v32[40]; // [rsp+78h] [rbp-30h] BYREF

  v7 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v29);
  v14 = (__int64)v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v30, v11, 0LL);
    v18 = COREADAPTERACCESS::AcquireExclusive(&v30, v17 + 2);
    IsTargetInClientVidPnTopology = v18;
    if ( v18 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology((void *const)v14, v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
          IsTargetInClientVidPnTopology = 0;
          v25[3] = v7;
          v25[4] = v14;
          v25[5] = *(int *)(v14 + 272);
          v25[6] = *(unsigned int *)(v14 + 268);
        }
      }
      v28[0] = 0;
      if ( a4 || (int)DmmIsTargetForcable(v14, v7, v28, a3) >= 0 && v28[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor((DXGADAPTER *)v14, v26, a4, v27, a6);
    }
    else
    {
      if ( v18 == -1073741130 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        v22[3] = v14;
        v22[4] = *(int *)(v14 + 272);
        v22[5] = *(unsigned int *)(v14 + 268);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v14);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v15 = WdLogNewEntry5_WdTrace(v13, v12);
    *(_QWORD *)(v15 + 24) = a1->HighPart;
    *(_QWORD *)(v15 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
