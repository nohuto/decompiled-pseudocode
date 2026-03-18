/*
 * XREFs of DxgkQueryStatisticsInternal @ 0x1C0168B08
 * Callers:
 *     DxgkQueryStatistics @ 0x1C0168AF0 (DxgkQueryStatistics.c)
 *     ?VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01813E0 (-VmBusQueryStatistics@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C0149194 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C014931C (-GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z.c)
 *     ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C0149434 (-GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C01494B4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z @ 0x1C01667F0 (-QueryProcessStatistics@@YAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGADAPTER@@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGPROCESS@@@Z @ 0x1C0184484 (-VmBusSendQueryStatistics@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkQueryStatisticsInternal(ULONG64 a1, char a2, __int64 a3)
{
  char v3; // di
  _OWORD *v5; // rax
  int *v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rdx
  _OWORD *v9; // rax
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGADAPTER *v17; // r15
  struct DXGPROCESS *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGPROCESS *Process; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  DXGADAPTER *v32; // rdi
  __int64 v33; // rax
  int Statistics; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  int ProcessStatistics; // eax
  DXGADAPTER *v41; // rcx
  __int64 v42; // r8
  int AdapterPerfData; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int AdapterPerfDataCaps; // eax
  int NodePerfData; // eax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rax
  _OWORD *v55; // rcx
  _OWORD *v56; // rax
  _OWORD *v57; // rcx
  _OWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r8
  DXGADAPTER *v63; // [rsp+38h] [rbp-410h] BYREF
  int v64; // [rsp+40h] [rbp-408h] BYREF
  __int64 v65; // [rsp+48h] [rbp-400h]
  _BYTE v66[8]; // [rsp+50h] [rbp-3F8h] BYREF
  DXGADAPTER *v67; // [rsp+58h] [rbp-3F0h]
  char v68; // [rsp+60h] [rbp-3E8h]
  unsigned __int64 v69; // [rsp+68h] [rbp-3E0h] BYREF
  unsigned __int64 v70; // [rsp+70h] [rbp-3D8h] BYREF
  int v71; // [rsp+80h] [rbp-3C8h] BYREF
  struct _LUID v72; // [rsp+84h] [rbp-3C4h]
  void *v73; // [rsp+90h] [rbp-3B8h]
  _BYTE v74[776]; // [rsp+98h] [rbp-3B0h] BYREF
  unsigned int v75; // [rsp+3A0h] [rbp-A8h]
  _BYTE v76[96]; // [rsp+3B0h] [rbp-98h] BYREF

  v3 = a2;
  v65 = 0LL;
  v64 = 2049;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2049);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v64, 2049);
  if ( v3 )
  {
    v5 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v5 = (_OWORD *)MmUserProbeAddress;
    v6 = &v71;
    v7 = 6LL;
    v8 = 6LL;
    do
    {
      *(_OWORD *)v6 = *v5;
      *((_OWORD *)v6 + 1) = v5[1];
      *((_OWORD *)v6 + 2) = v5[2];
      *((_OWORD *)v6 + 3) = v5[3];
      *((_OWORD *)v6 + 4) = v5[4];
      *((_OWORD *)v6 + 5) = v5[5];
      *((_OWORD *)v6 + 6) = v5[6];
      v6 += 32;
      *((_OWORD *)v6 - 1) = v5[7];
      v5 += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v6 = *v5;
    *((_OWORD *)v6 + 1) = v5[1];
    *((_QWORD *)v6 + 4) = *((_QWORD *)v5 + 4);
  }
  else
  {
    v9 = (_OWORD *)a1;
    v10 = &v71;
    v7 = 6LL;
    v11 = 6LL;
    do
    {
      *(_OWORD *)v10 = *v9;
      *((_OWORD *)v10 + 1) = v9[1];
      *((_OWORD *)v10 + 2) = v9[2];
      *((_OWORD *)v10 + 3) = v9[3];
      *((_OWORD *)v10 + 4) = v9[4];
      *((_OWORD *)v10 + 5) = v9[5];
      *((_OWORD *)v10 + 6) = v9[6];
      v10 += 32;
      *((_OWORD *)v10 - 1) = v9[7];
      v9 += 8;
      --v11;
    }
    while ( v11 );
    *(_OWORD *)v10 = *v9;
    *((_OWORD *)v10 + 1) = v9[1];
    *((_QWORD *)v10 + 4) = *((_QWORD *)v9 + 4);
  }
  memset(v74, 0, sizeof(v74));
  Global = DXGGLOBAL::GetGlobal(v12);
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v72, &v69);
  if ( v17 )
  {
    v18 = 0LL;
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v76, v73, 1024);
    if ( v73 )
    {
      if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v76, 1) < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v22, v21, v23);
        *(_QWORD *)(v28 + 24) = v73;
        WdLogEvent5_WdWarning(v28);
        goto LABEL_20;
      }
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v76);
    }
    else
    {
      Process = DXGPROCESS::GetCurrent(v20, v19);
    }
    v18 = Process;
LABEL_20:
    if ( !v18 )
    {
      v53 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v53 + 24) = 4889LL;
      WdLogEvent5_WdWarning(v53);
      LODWORD(v30) = -1073741811;
LABEL_61:
      DXGADAPTER::ReleaseReferenceNoTracking(v17);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v76);
      goto LABEL_64;
    }
    v63 = 0LL;
    LODWORD(v30) = DxgkpGetPairingAdapters(v17, 0, &v63, &v70, 0LL, 0LL);
    if ( (int)v30 < 0 )
    {
      v31 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v31 + 24) = v17;
      WdLogEvent5_WdError(v31);
      v32 = v63;
LABEL_58:
      if ( v32 )
        DXGADAPTER::ReleaseReferenceNoTracking(v32);
      v3 = a2;
      goto LABEL_61;
    }
    v32 = v63;
    if ( !v63 )
    {
      v33 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v33 + 24) = v17;
      v30 = -1073741637LL;
      goto LABEL_28;
    }
    if ( *((_BYTE *)v63 + 185) )
    {
      Statistics = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryStatistics(
                     (DXGADAPTER *)((char *)v63 + 4080),
                     (struct _D3DKMT_QUERYSTATISTICS *)&v71,
                     v18);
      v30 = Statistics;
      if ( Statistics >= 0 )
        goto LABEL_58;
      v33 = WdLogNewEntry5_WdError(v35);
      *(_QWORD *)(v33 + 24) = v32;
LABEL_28:
      *(_QWORD *)(v33 + 32) = v30;
      WdLogEvent5_WdError(v33);
      goto LABEL_58;
    }
    v67 = v63;
    v68 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
    v36 = *((_DWORD *)v32 + 44);
    v32 = v63;
    if ( v36 != 1 )
    {
LABEL_56:
      if ( v68 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v66);
      goto LABEL_58;
    }
    v37 = *((_QWORD *)v63 + 308);
    if ( !*(_QWORD *)(v37 + 544) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      *(_QWORD *)(v38 + 24) = 4771LL;
      WdLogEvent5_WdAssertion(v38);
      v37 = *((_QWORD *)v32 + 308);
    }
    if ( !*(_QWORD *)(v37 + 520) )
    {
      v39 = WdLogNewEntry5_WdAssertion(v37);
      *(_QWORD *)(v39 + 24) = 4772LL;
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v71 )
    {
      if ( v71 != 3 )
      {
        if ( v71 == 5 )
        {
          v49 = _guard_dispatch_icall_fptr();
          v30 = v49;
          if ( v49 < 0 )
            goto LABEL_47;
          if ( (int)DXGADAPTER::GetDriverVersion(v32) < 2400 )
            goto LABEL_56;
          v52 = v75 % **((unsigned __int16 **)v32 + 295);
          *(_DWORD *)&v74[548] = v75 / **((unsigned __int16 **)v32 + 295);
          *(_DWORD *)&v74[544] = v52;
          NodePerfData = DXGADAPTER::GetNodePerfData(
                           (unsigned __int64)v32,
                           (struct _D3DKMT_NODE_PERFDATA *)&v74[544],
                           v51);
          goto LABEL_50;
        }
        if ( v71 != 7 )
        {
          if ( v71 != 10 )
          {
            ProcessStatistics = QueryProcessStatistics((struct _D3DKMT_QUERYSTATISTICS *)&v71, v32, v18);
LABEL_55:
            LODWORD(v30) = ProcessStatistics;
            goto LABEL_56;
          }
          if ( (int)DXGADAPTER::GetDriverVersion(v32) < 2400 )
          {
            LODWORD(v30) = -1073741822;
            goto LABEL_56;
          }
          *(_DWORD *)v74 = v75;
          AdapterPerfData = DXGADAPTER::GetAdapterPerfData(v41, (struct _D3DKMT_ADAPTER_PERFDATA *)v74, v42);
          v30 = AdapterPerfData;
          if ( AdapterPerfData < 0
            || (*(_DWORD *)&v74[64] = v75,
                AdapterPerfDataCaps = DXGADAPTER::GetAdapterPerfDataCaps(
                                        v32,
                                        (struct _D3DKMT_ADAPTER_PERFDATACAPS *)&v74[64],
                                        v46),
                v30 = AdapterPerfDataCaps,
                AdapterPerfDataCaps < 0) )
          {
LABEL_47:
            v50 = WdLogNewEntry5_WdWarning(v45, v44, v46);
            *(_QWORD *)(v50 + 24) = v30;
            WdLogEvent5_WdWarning(v50);
            goto LABEL_56;
          }
          *(_DWORD *)&v74[104] = v75;
          NodePerfData = DXGADAPTER::GetGpuVersion(v32, (struct _D3DKMT_GPUVERSION *)&v74[104], v46);
LABEL_50:
          v30 = NodePerfData;
          if ( NodePerfData >= 0 )
            goto LABEL_56;
          goto LABEL_47;
        }
      }
    }
    else
    {
      LODWORD(v30) = _guard_dispatch_icall_fptr();
      if ( (int)v30 < 0 )
        goto LABEL_56;
    }
    ProcessStatistics = _guard_dispatch_icall_fptr();
    goto LABEL_55;
  }
  v54 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v54 + 24) = v72.LowPart;
  *(_QWORD *)(v54 + 32) = v72.HighPart;
  WdLogEvent5_WdWarning(v54);
  LODWORD(v30) = -1073741811;
LABEL_64:
  if ( (int)v30 >= 0 )
  {
    if ( v3 )
    {
      v55 = (_OWORD *)(a1 + 24);
      if ( a1 + 800 > MmUserProbeAddress || a1 + 800 <= (unsigned __int64)v55 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v56 = v74;
      do
      {
        *v55 = *v56;
        v55[1] = v56[1];
        v55[2] = v56[2];
        v55[3] = v56[3];
        v55[4] = v56[4];
        v55[5] = v56[5];
        v55[6] = v56[6];
        v55 += 8;
        *(v55 - 1) = v56[7];
        v56 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v55 = *(_QWORD *)v56;
    }
    else
    {
      v57 = (_OWORD *)(a1 + 24);
      v58 = v74;
      do
      {
        *v57 = *v58;
        v57[1] = v58[1];
        v57[2] = v58[2];
        v57[3] = v58[3];
        v57[4] = v58[4];
        v57[5] = v58[5];
        v57[6] = v58[6];
        v57 += 8;
        *(v57 - 1) = v58[7];
        v58 += 8;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v57 = *(_QWORD *)v58;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v59, &EventProfilerExit, v60, v64);
  return (unsigned int)v30;
}
