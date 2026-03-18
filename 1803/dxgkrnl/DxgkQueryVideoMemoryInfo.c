/*
 * XREFs of DxgkQueryVideoMemoryInfo @ 0x1C009AB00
 * Callers:
 *     ?VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01814F0 (-VmBusQueryVideoMemoryInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0009844 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C009B170 (-QueryVideoMemoryInfo@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@Z @ 0x1C018463C (-VmBusSendQueryVideoMemoryInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAU_D3DKMT_QUERYVIDEOMEMORYIN.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkQueryVideoMemoryInfo(_OWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // r13
  _D3DKMT_QUERYVIDEOMEMORYINFO *v5; // r14
  _OWORD *v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rbx
  DXGPROCESS *Process; // r12
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PairingAdapters; // ebx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  UINT *v20; // rdx
  int VideoMemoryInfo; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42; // ebx
  unsigned int HostProcess; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+30h] [rbp-168h] BYREF
  __int64 v47; // [rsp+38h] [rbp-160h]
  DXGADAPTER *v48; // [rsp+40h] [rbp-158h] BYREF
  struct DXGADAPTER *v49; // [rsp+50h] [rbp-148h] BYREF
  struct DXGADAPTER *v50; // [rsp+58h] [rbp-140h] BYREF
  unsigned __int64 v51; // [rsp+60h] [rbp-138h] BYREF
  _BYTE v52[80]; // [rsp+70h] [rbp-128h] BYREF
  _D3DKMT_QUERYVIDEOMEMORYINFO v53; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v54[96]; // [rsp+100h] [rbp-98h] BYREF

  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v47 = 0LL;
  v46 = 2119;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v2, &EventProfilerEnter, v3, 2119);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2119);
  memset(&v53, 0, sizeof(v53));
  v5 = &v53;
  if ( v4 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)&v53.hProcess = *v6;
    *(_OWORD *)&v53.Budget = v6[1];
    *(_OWORD *)&v53.CurrentReservation = v6[2];
  }
  else
  {
    v5 = (_D3DKMT_QUERYVIDEOMEMORYINFO *)a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v29 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v30, &EventProfilerExit, v31, v46);
    return 3221225485LL;
  }
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v5->hProcess, 0x400u);
  Process = (DXGPROCESS *)Current;
  if ( v5->hProcess )
  {
    v32 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
    v36 = v32;
    if ( v32 < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      *(_QWORD *)(v37 + 24) = v5->hProcess;
      *(_QWORD *)(v37 + 32) = v36;
      WdLogEvent5_WdWarning(v37);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v38, &EventProfilerExit, v39, v46);
      return (unsigned int)v36;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v54);
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v5->hAdapter, Current, &v50);
  v11 = v50;
  if ( !v50 )
  {
    v40 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v40 + 24) = Current;
    *(_QWORD *)(v40 + 32) = v5->hAdapter;
    WdLogEvent5_WdError(v40);
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
    goto LABEL_30;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v50, 0, &v49, &v51, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v13, v12, v15);
    *(_QWORD *)(v41 + 24) = v11;
    WdLogEvent5_WdWarning(v41);
    goto LABEL_21;
  }
  v16 = v49;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v52, v49, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v52);
  DXGADAPTER::ReleaseReferenceNoTracking(v16);
  if ( PairingAdapters < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v25 + 24) = v16;
    goto LABEL_20;
  }
  if ( v4 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v16 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    v20 = (UINT *)(a1 + 3);
    if ( (unsigned __int64)(a1 + 3) >= MmUserProbeAddress )
      v20 = (UINT *)MmUserProbeAddress;
    v5->PhysicalAdapterIndex = *v20;
    v16 = v49;
  }
  if ( *((_BYTE *)v16 + 185) )
  {
    v42 = *((_DWORD *)v16 + 1034);
    HostProcess = DXGPROCESS::GetHostProcess(Process);
    VideoMemoryInfo = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryVideoMemoryInfo(
                        (struct DXGADAPTER *)((char *)v16 + 4080),
                        HostProcess,
                        v42,
                        v5);
  }
  else
  {
    VideoMemoryInfo = ADAPTER_RENDER::QueryVideoMemoryInfo(*((ADAPTER_RENDER **)v16 + 308), Process, v5);
  }
  PairingAdapters = VideoMemoryInfo;
  if ( VideoMemoryInfo < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = PairingAdapters;
LABEL_20:
    WdLogEvent5_WdWarning(v25);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
LABEL_21:
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v46);
    return (unsigned int)PairingAdapters;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_OWORD *)MmUserProbeAddress;
    *a1 = *(_OWORD *)&v5->hProcess;
    a1[1] = *(_OWORD *)&v5->Budget;
    a1[2] = *(_OWORD *)&v5->CurrentReservation;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v52);
  if ( v48 )
    DXGADAPTER::ReleaseReferenceNoTracking(v48);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v44, &EventProfilerExit, v45, v46);
  return 0LL;
}
