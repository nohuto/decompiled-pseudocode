/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C00DD2E0
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01815D0 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C000B9A0 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C001ADFC (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0184714 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  bool v5; // di
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r12
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v10; // r14
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGPAGINGQUEUE *v15; // r15
  struct DXGADAPTER *v16; // rbx
  DXGADAPTER *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // r8
  unsigned int Reserved0; // eax
  ULONG64 v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int PairingAdapters; // edi
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned int v41; // r15d
  unsigned int HostProcess; // eax
  bool v43; // [rsp+30h] [rbp-158h]
  int v44; // [rsp+38h] [rbp-150h] BYREF
  __int64 v45; // [rsp+40h] [rbp-148h]
  char v46[8]; // [rsp+48h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v47; // [rsp+50h] [rbp-138h] BYREF
  struct DXGADAPTER *v48; // [rsp+58h] [rbp-130h] BYREF
  DXGADAPTER *v49; // [rsp+60h] [rbp-128h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v50; // [rsp+70h] [rbp-118h]
  unsigned __int64 v51; // [rsp+78h] [rbp-110h] BYREF
  ULONG64 v52; // [rsp+80h] [rbp-108h]
  struct DXGPROCESS *v53; // [rsp+88h] [rbp-100h]
  _BYTE v54[80]; // [rsp+90h] [rbp-F8h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS v55; // [rsp+100h] [rbp-88h] BYREF

  v52 = a1;
  v4 = 0LL;
  v45 = 0LL;
  v44 = 2098;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2098);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2098);
  v5 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v43 = v5;
  Current = DXGPROCESS::GetCurrent();
  v53 = Current;
  if ( !Current )
  {
    v30 = WdLogNewEntry5_WdError(v7);
    v20 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
LABEL_34:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    v28 = (qword_1C0079010 & 2) == 0;
LABEL_28:
    if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v44);
    return (unsigned int)v20;
  }
  if ( v5 )
  {
    v10 = &v55;
    v50 = &v55;
    v7 = MmUserProbeAddress;
    v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v55 = *v11;
  }
  else
  {
    v10 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v50 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v10->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v31 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    v20 = -1073741811;
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    *(_QWORD *)(v31 + 32) = 12122LL;
    WdLogEvent5_WdWarning(v31);
    goto LABEL_34;
  }
  v47 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v46, v10->hPagingQueue, Current, &v47);
  v48 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v49,
    v10->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v48);
  v15 = v47;
  v16 = v48;
  if ( v47 )
  {
    v16 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v47 + 2) + 16LL) + 16LL);
    v4 = *((_QWORD *)v47 + 4);
  }
  else if ( !v48 )
  {
    v32 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v32 + 24) = v10->hPagingQueue;
    v20 = -1073741811;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v32);
LABEL_25:
    if ( v49 )
      DXGADAPTER::ReleaseReferenceNoTracking(v49);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    v28 = (qword_1C0079010 & 2) == 0;
    goto LABEL_28;
  }
  v17 = 0LL;
  v47 = 0LL;
  if ( *((_QWORD *)v16 + 308) )
  {
LABEL_11:
    v48 = (struct DXGADAPTER *)*((_QWORD *)v16 + 308);
    v51 = (unsigned __int64)v48;
    if ( *((_BYTE *)v16 + 185) )
    {
      if ( v15 )
        v41 = *((_DWORD *)v15 + 7);
      else
        v41 = *((_DWORD *)v16 + 1034);
      HostProcess = DXGPROCESS::GetHostProcess(Current);
      v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v16 + 4080),
              HostProcess,
              v41,
              v10);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v16, 0LL);
      v20 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
      if ( v20 < 0 )
      {
LABEL_49:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_23:
        if ( v17 )
          DXGADAPTER::ReleaseReferenceNoTracking(v17);
        goto LABEL_25;
      }
      Reserved0 = v10->Reserved0;
      if ( Reserved0 > 1 )
      {
        v40 = WdLogNewEntry5_WdWarning(v19, v18, v21);
LABEL_48:
        v20 = -1073741811;
        *(_QWORD *)(v40 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v40);
        goto LABEL_49;
      }
      if ( Reserved0 == 1 && !v4 )
      {
        v40 = WdLogNewEntry5_WdWarning(v19, v18, v21);
        *(_QWORD *)(v40 + 32) = 12185LL;
        goto LABEL_48;
      }
      v20 = _guard_dispatch_icall_fptr();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    }
    if ( v20 >= 0 && v43 )
    {
      v23 = v52;
      v24 = (_QWORD *)(v52 + 56);
      if ( v52 + 56 >= MmUserProbeAddress )
        v24 = (_QWORD *)MmUserProbeAddress;
      *v24 = v10->VirtualAddress;
      v25 = (_QWORD *)(v23 + 64);
      if ( v23 + 64 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = v10->PagingFenceValue;
    }
    goto LABEL_23;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v16, 0, &v47, &v51, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v16 = v47;
    v17 = v47;
    goto LABEL_11;
  }
  v37 = WdLogNewEntry5_WdWarning(v34, v33, v36);
  *(_QWORD *)(v37 + 24) = v16;
  WdLogEvent5_WdWarning(v37);
  if ( v49 )
    DXGADAPTER::ReleaseReferenceNoTracking(v49);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v38, &EventProfilerExit, v39, v44);
  return (unsigned int)PairingAdapters;
}
