/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4774
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00C462C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C6B98 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00BA5C4 (-DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C0213FCC (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C022D784 (MonitorCreateSimulatedMonitor.c)
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
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  int v31; // [rsp+20h] [rbp-88h]
  int v32; // [rsp+30h] [rbp-78h]
  bool v33; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-60h] BYREF
  __int64 v35; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v36[32]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v37[40]; // [rsp+78h] [rbp-30h] BYREF

  v7 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v34);
  v16 = v11;
  if ( v11 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v35, v11, 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive(&v35);
    IsTargetInClientVidPnTopology = v19;
    if ( v19 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v16, v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26, v28, v29);
          IsTargetInClientVidPnTopology = 0;
          v30[3] = v7;
          v30[4] = v16;
          v30[5] = *((int *)v16 + 68);
          v30[6] = *((unsigned int *)v16 + 67);
        }
      }
      v33 = 0;
      if ( a4 || (int)DmmIsTargetForcable(v16, v7, &v33, a3) >= 0 && v33 )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v16, v31, a4, v32, a6);
    }
    else
    {
      if ( v19 == -1073741130 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
        v25[3] = v16;
        v25[4] = *((int *)v16 + 68);
        v25[5] = *((unsigned int *)v16 + 67);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v16);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = a1->HighPart;
    *(_QWORD *)(v17 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
