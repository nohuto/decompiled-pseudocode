/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A8FD8
 * Callers:
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAB1C (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DmmIsTargetForcable @ 0x1C01D6310 (DmmIsTargetForcable.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // bp
  __int64 v7; // rsi
  unsigned int v8; // r14d
  DXGGLOBAL *Global; // rax
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGADAPTER *v17; // rbx
  __int64 v18; // rax
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  int v33; // [rsp+20h] [rbp-88h]
  int v34; // [rsp+30h] [rbp-78h]
  _BYTE v35[8]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v38[32]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v39[40]; // [rsp+78h] [rbp-30h] BYREF

  v6 = a4;
  v7 = (unsigned int)a2;
  v8 = a3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, a3, a4);
  v12 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v36, v11);
  v17 = v12;
  if ( v12 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v37, v12, 0LL);
    v21 = COREADAPTERACCESS::AcquireExclusive(&v37, v20 + 2);
    IsTargetInClientVidPnTopology = v21;
    if ( v21 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v17, (unsigned int)v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
          IsTargetInClientVidPnTopology = 0;
          v32[3] = v7;
          v32[4] = v17;
          v32[5] = *((int *)v17 + 68);
          v32[6] = *((unsigned int *)v17 + 67);
        }
      }
      v35[0] = 0;
      if ( v6 || (int)DmmIsTargetForcable(v17, (unsigned int)v7, v35, v8) >= 0 && v35[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v17, v33, v6, v34, a6);
    }
    else
    {
      if ( v21 == -1073741130 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
        v27[3] = v17;
        v27[4] = *((int *)v17 + 68);
        v27[5] = *((unsigned int *)v17 + 67);
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v17);
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v18 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = a1->HighPart;
    *(_QWORD *)(v18 + 32) = a1->LowPart;
    return 3223191554LL;
  }
}
