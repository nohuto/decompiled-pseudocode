/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C016BBD0 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017CB90 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00D2EF4 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00D2F18 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C01471FC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0158BDC (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r15
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  ULONG64 v8; // rax
  __int64 v9; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  HANDLE hProcess; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int PairingAdapters; // r14d
  __int64 v32; // rax
  struct DXGADAPTER *v33; // r14
  int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r8
  ADAPTER_RENDER *v37; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v42; // [rsp+38h] [rbp-150h] BYREF
  __int64 v43; // [rsp+40h] [rbp-148h]
  struct DXGADAPTER *v44; // [rsp+48h] [rbp-140h] BYREF
  struct DXGADAPTER *v45; // [rsp+50h] [rbp-138h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v46; // [rsp+58h] [rbp-130h] BYREF
  struct DXGADAPTER *v47; // [rsp+78h] [rbp-110h] BYREF
  DXGADAPTER *v48; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v50[80]; // [rsp+A0h] [rbp-E8h] BYREF
  _BYTE v51[96]; // [rsp+F0h] [rbp-98h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v43 = 0LL;
  v42 = 2120;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2120);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2120);
  memset(&v46, 0, sizeof(v46));
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v8 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_OWORD *)&v46.hProcess = *(_OWORD *)v8;
    v46.Reservation = *(_QWORD *)(v8 + 16);
  }
  else
  {
    v46 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    LODWORD(v12) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_11:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v13, &EventProfilerExit, v14, v42);
    return (unsigned int)v12;
  }
  hProcess = v46.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51, v46.hProcess, 512);
  if ( hProcess )
  {
    v17 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v51, 1);
    v12 = v17;
    if ( v17 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = hProcess;
      *(_QWORD *)(v21 + 32) = v12;
      WdLogEvent5_WdWarning(v21);
LABEL_18:
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51);
      goto LABEL_11;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v51);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v44 = v3;
  v23 = 0LL;
  v45 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v48, v46.hAdapter, Current, &v44);
    if ( !v44 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
      LODWORD(v12) = -1073741811;
      v27[3] = -1073741811LL;
      v27[4] = Current;
      v27[5] = v46.hAdapter;
      WdLogEvent5_WdWarning(v27);
      if ( v48 )
        DXGADAPTER::ReleaseReferenceNoTracking(v48);
      goto LABEL_18;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v44 + 3);
    v3 = v44;
    v23 = v44;
    v45 = v44;
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
  }
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, &v47, &v49, 0LL, 0LL);
  if ( PairingAdapters < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v32 + 24) = v3;
    WdLogEvent5_WdWarning(v32);
LABEL_42:
    if ( v23 )
      DXGADAPTER::ReleaseReferenceNoTracking(v23);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v42);
    return (unsigned int)PairingAdapters;
  }
  v33 = v47;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v47, 0LL);
  v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
  DXGADAPTER::ReleaseReferenceNoTracking(v33);
  if ( v34 >= 0 )
  {
    v37 = (ADAPTER_RENDER *)*((_QWORD *)v33 + 308);
    if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v33 + 24) + 64LL) + 40LL) + 28LL) >= 0x5018u )
    {
      p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
      if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
        p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
      v46.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
    }
    PairingAdapters = ADAPTER_RENDER::ChangeVideoMemoryReservation(v37, Process, &v46);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    goto LABEL_42;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
  if ( v23 )
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v51);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v42);
  return (unsigned int)v34;
}
