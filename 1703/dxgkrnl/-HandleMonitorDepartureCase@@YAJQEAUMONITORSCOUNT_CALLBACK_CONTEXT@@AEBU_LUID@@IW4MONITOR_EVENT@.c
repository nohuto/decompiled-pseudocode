/*
 * XREFs of ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AA74C
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C01A9568 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C008CE40 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008CF3C (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00AEB28 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EBFAC (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01AAF40 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DE30C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01DE47C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall HandleMonitorDepartureCase(
        __int64 a1,
        const struct _LUID *a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rax
  DXGGLOBAL *v19; // rax
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  DXGADAPTER *v24; // r12
  _QWORD *v25; // rax
  unsigned int v26; // ebx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  struct DXGGLOBAL *v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct CCD_BTL *v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned int v67; // r14d
  __int64 v68; // rax
  int PathDescriptorByTarget; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rsi
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  int v81; // eax
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  unsigned __int64 v88; // [rsp+30h] [rbp-99h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v89[9]; // [rsp+40h] [rbp-89h] BYREF
  int v90; // [rsp+8Ch] [rbp-3Dh]
  int v91; // [rsp+90h] [rbp-39h]
  _BYTE v92[8]; // [rsp+A0h] [rbp-29h] BYREF
  _BYTE v93[32]; // [rsp+A8h] [rbp-21h] BYREF
  _BYTE v94[40]; // [rsp+C8h] [rbp-1h] BYREF
  char v95; // [rsp+138h] [rbp+6Fh] BYREF

  v6 = (int)a4;
  v8 = (unsigned int)a3;
  if ( (_DWORD)a4 == 10 && a5 == 2 )
  {
    *(_BYTE *)(a1 + 24) = 0;
    Global = DXGGLOBAL::GetGlobal(2LL, (__int64)a2, a3, a4);
    v11 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)Global,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            (unsigned int)(v6 - 9));
    v16 = v11;
    if ( v11 >= 0 )
    {
      *(_BYTE *)(a1 + 25) = 1;
      return 0LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdWarning(v17);
      return (unsigned int)v16;
    }
  }
  if ( a5 != 5 )
  {
    v43 = DxgkInvalidateMonitorConnections(2uLL);
    v26 = 0;
    v45 = v43;
    if ( v43 < 0 )
    {
      v46 = WdLogNewEntry5_WdEvent(v44);
      *(_QWORD *)(v46 + 24) = v45;
      WdLogEvent5_WdEvent(v46);
    }
    *(_BYTE *)(a1 + 25) = 1;
    if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, a2, (unsigned int)v8) < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v48, v47, v49, v50);
      v51[3] = a2->HighPart;
      v51[4] = a2->LowPart;
      v51[5] = v8;
      WdLogEvent5_WdWarning(v51);
    }
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v89, 8u, 0);
    v56 = CCD_BTL::Global(v53, v52, v54, v55);
    v57 = CCD_TOPOLOGY::CopyRenewScope((CCD_TOPOLOGY *)v89, v56);
    v62 = v57;
    if ( v57 < 0 )
    {
      v82 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
      v82[3] = v62;
      v82[4] = a2->HighPart;
      v82[5] = a2->LowPart;
      v82[6] = v8;
      v82[7] = v6;
      WdLogEvent5_WdError(v82);
      DxgkLogCodePointPacket(0x3Du, v62, 0, 0, (__int64)*a2);
      goto LABEL_35;
    }
    v67 = *((_DWORD *)DXGGLOBAL::GetGlobal(v59, v58, v60, v61) + 318);
    if ( v67 > 1 )
    {
      v68 = WdLogNewEntry5_WdWarning(v64, v63, v65, v66);
      *(_QWORD *)(v68 + 24) = 3801LL;
      WdLogEvent5_WdWarning(v68);
      v88 = 0LL;
      DxgkLogCodePointPacket(0x52u, v67, 0, 0, 0LL);
      *(_BYTE *)(a1 + 25) = 1;
LABEL_40:
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v89);
      return v26;
    }
    if ( *(_DWORD *)(a1 + 20) != -1 )
    {
      *(_BYTE *)(a1 + 24) = 0;
      PathDescriptorByTarget = CCD_TOPOLOGY::FindPathDescriptorByTarget((CCD_TOPOLOGY *)v89, a2, v8, 0LL);
      v74 = PathDescriptorByTarget;
      if ( PathDescriptorByTarget == -1073741275 )
      {
        v90 = 1;
        v91 = 4;
        v75 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)v89, 0LL, v72, v73);
        v74 = v75;
        if ( v75 >= 0 )
        {
          v81 = CCD_TOPOLOGY::Persist((CCD_TOPOLOGY *)v89, 0LL, v78, v79);
          v74 = v81;
          if ( v81 >= 0 )
          {
            *(_DWORD *)(a1 + 32) |= 0x20u;
            *(_BYTE *)(a1 + 25) = 0;
            goto LABEL_35;
          }
        }
        v80 = WdLogNewEntry5_WdWarning(v77, v76, v78, v79);
      }
      else
      {
        if ( PathDescriptorByTarget >= 0 )
          goto LABEL_35;
        v80 = WdLogNewEntry5_WdWarning(v71, v70, v72, v73);
        *(_QWORD *)(v80 + 32) = v8;
      }
      *(_QWORD *)(v80 + 24) = v74;
      WdLogEvent5_WdWarning(v80);
    }
LABEL_35:
    if ( *(_BYTE *)(a1 + 29) )
    {
      *(_BYTE *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 20) = v8;
    }
    v83 = DisplayConfigHandleMonitorInvalidation(5LL, (struct MONITORSCOUNT_CALLBACK_CONTEXT *)a1, a6);
    v85 = v83;
    if ( v83 < 0 )
    {
      v86 = WdLogNewEntry5_WdEvent(v84);
      *(_QWORD *)(v86 + 24) = v85;
      WdLogEvent5_WdEvent(v86);
      LODWORD(v85) = 0;
    }
    v87 = WdLogNewEntry5_WdEvent(v84);
    *(_QWORD *)(v87 + 24) = (int)v85;
    WdLogEvent5_WdEvent(v87);
    v26 = v85;
    goto LABEL_40;
  }
  v19 = DXGGLOBAL::GetGlobal(2LL, (__int64)a2, a3, a4);
  v21 = DXGGLOBAL::ReferenceAdapterByLuid(v19, *a2, &v88, v20);
  v24 = v21;
  if ( !v21 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v26 = -1073741811;
    v25[3] = a2->HighPart;
    v25[4] = a2->LowPart;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return v26;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v92, v21, 0LL);
  DXGADAPTER::ReleaseReference(v24);
  v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92);
  v30 = v27;
  if ( v27 >= 0 )
  {
    v95 = 0;
    if ( (int)DmmIsTargetInClientVidPnTopology(v24, (unsigned int)v8, &v95) >= 0 && !v95 )
      *(_BYTE *)(a1 + 25) = 0;
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v92);
    *(_BYTE *)(a1 + 24) = 0;
    v36 = DXGGLOBAL::GetGlobal(v33, v32, v34, v35);
    v37 = DXGGLOBAL::IterateAdaptersWithCallback(
            (__int64)v36,
            (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
            a1,
            1LL);
    v30 = v37;
    if ( v37 >= 0 )
    {
      LODWORD(v30) = 0;
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      *(_QWORD *)(v42 + 24) = v30;
      WdLogEvent5_WdWarning(v42);
    }
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v31[3] = a2->HighPart;
    v31[4] = a2->LowPart;
    v31[5] = v30;
    WdLogEvent5_WdError(v31);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v94);
  COREACCESS::~COREACCESS((COREACCESS *)v93);
  return (unsigned int)v30;
}
