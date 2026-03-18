/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4554
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01028B0 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DF48C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00E0CC8 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00FBDA0 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00FBEA0 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C010392C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01C4AA4 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C01ED724 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01F755C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // r12
  __int64 v8; // r15
  struct DXGGLOBAL *Global; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  DXGGLOBAL *v18; // rax
  struct DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  DXGADAPTER *v21; // r12
  _QWORD *v22; // rax
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // rax
  __int64 v28; // rcx
  struct DXGGLOBAL *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _QWORD *v45; // rax
  __int64 v46; // rcx
  struct CCD_BTL *v47; // rax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // r14d
  __int64 v55; // rax
  int PathDescriptorByTarget; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rsi
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  int v66; // eax
  _QWORD *v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // [rsp+30h] [rbp-99h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v77[9]; // [rsp+40h] [rbp-89h] BYREF
  int v78; // [rsp+8Ch] [rbp-3Dh]
  int v79; // [rsp+90h] [rbp-39h]
  _BYTE v80[8]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v81[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v82[40]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned __int8 v83; // [rsp+138h] [rbp+6Fh] BYREF

  v6 = a4;
  v8 = a3;
  if ( a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    Global = DXGGLOBAL::GetGlobal(2LL);
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (int)v6 - 9);
    v15 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return 0LL;
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v16 + 24) = v15;
      WdLogEvent5_WdWarning(v16);
      return (unsigned int)v15;
    }
  }
  if ( a5 != 5 )
  {
    v35 = DxgkInvalidateMonitorConnections(2uLL);
    v23 = 0;
    v40 = v35;
    if ( v35 < 0 )
    {
      v41 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
      *(_QWORD *)(v41 + 24) = v40;
      WdLogEvent5_WdEvent(v41);
    }
    *(_BYTE *)(a1 + 25) = 1;
    *(_BYTE *)(a1 + 30) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v8) < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v42, v44);
      v45[3] = a2->HighPart;
      v45[4] = a2->LowPart;
      v45[5] = v8;
      WdLogEvent5_WdWarning(v45);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v77, 8u, 0);
    v47 = CCD_BTL::Global(v46);
    v48 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v77, v47);
    v50 = v48;
    if ( v48 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v67[3] = v50;
      v67[4] = a2->HighPart;
      v67[5] = a2->LowPart;
      v67[6] = v8;
      v67[7] = v6;
      WdLogEvent5_WdError(v67);
      DxgkLogCodePointPacket(0x3Du, v50, 0, 0, (__int64)*a2);
      goto LABEL_35;
    }
    v54 = *((_DWORD *)DXGGLOBAL::GetGlobal(v49) + 314);
    if ( v54 > 1 )
    {
      v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
      *(_QWORD *)(v55 + 24) = 3194LL;
      WdLogEvent5_WdWarning(v55);
      v76 = 0LL;
      DxgkLogCodePointPacket(0x52u, v54, 0, 0, 0LL);
LABEL_40:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v77);
      return v23;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v77, a2, v8, 0LL);
      v60 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v78 = 1;
        v79 = 4;
        v61 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v77, 0);
        v60 = v61;
        if ( v61 >= 0 )
        {
          v66 = CCD_TOPOLOGY::Persist(v77, 0LL);
          v60 = v66;
          if ( v66 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            *(_BYTE *)(a1 + 30) = 0;
            goto LABEL_35;
          }
        }
        v65 = WdLogNewEntry5_WdWarning(v63, v62, v64);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_35;
        v65 = WdLogNewEntry5_WdWarning(v58, v57, v59);
        *(_QWORD *)(v65 + 32) = v8;
      }
      *(_QWORD *)(v65 + 24) = v60;
      WdLogEvent5_WdWarning(v65);
    }
LABEL_35:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v8;
    }
    v68 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v73 = v68;
    if ( v68 < 0 )
    {
      v74 = WdLogNewEntry5_WdEvent(v70, v69, v71, v72);
      *(_QWORD *)(v74 + 24) = v73;
      WdLogEvent5_WdEvent(v74);
      LODWORD(v73) = 0;
    }
    v75 = WdLogNewEntry5_WdEvent(v70, v69, v71, v72);
    *(_QWORD *)(v75 + 24) = (int)v73;
    WdLogEvent5_WdEvent(v75);
    v23 = v73;
    goto LABEL_40;
  }
  v18 = DXGGLOBAL::GetGlobal(2LL);
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(v18, *a2, &v76);
  v21 = v19;
  if ( !v19 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v23 = -1073741811;
    v22[3] = a2->HighPart;
    v22[4] = a2->LowPart;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdError(v22);
    return v23;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v80, v19, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v21);
  v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v80);
  v26 = v24;
  if ( v24 >= 0 )
  {
    v83 = 0;
    if ( DmmIsTargetInClientVidPnTopology(v21, v8, &v83) >= 0 && !v83 )
      *(_BYTE *)(a1 + 25) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v80);
    *(_BYTE *)(a1 + 24) = 0;
    v29 = DXGGLOBAL::GetGlobal(v28);
    v30 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v29,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            1);
    v26 = v30;
    if ( v30 >= 0 )
    {
      LODWORD(v26) = 0;
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = v26;
      WdLogEvent5_WdWarning(v34);
    }
  }
  else
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v27[3] = a2->HighPart;
    v27[4] = a2->LowPart;
    v27[5] = v26;
    WdLogEvent5_WdError(v27);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v82);
  COREACCESS::~COREACCESS((COREACCESS *)v81);
  return (unsigned int)v26;
}
