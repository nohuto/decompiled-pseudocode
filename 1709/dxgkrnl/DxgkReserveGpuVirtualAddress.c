/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C00BC110
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194FC0 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0008920 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0014DC8 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0197B2C (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r12
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v11; // r15
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGPAGINGQUEUE *v16; // r13
  struct DXGADAPTER *v17; // rbx
  DXGADAPTER *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  unsigned int Reserved0; // eax
  ULONG64 v24; // r8
  _QWORD *v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int PairingAdapters; // edi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  unsigned int v42; // r13d
  unsigned int HostProcess; // eax
  bool v44; // [rsp+30h] [rbp-158h]
  char v45[8]; // [rsp+38h] [rbp-150h] BYREF
  struct DXGADAPTER *v46; // [rsp+40h] [rbp-148h] BYREF
  struct DXGPAGINGQUEUE *v47; // [rsp+48h] [rbp-140h] BYREF
  DXGADAPTER *v48; // [rsp+50h] [rbp-138h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v49; // [rsp+60h] [rbp-128h]
  unsigned __int64 v50; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-118h]
  ULONG64 v52; // [rsp+78h] [rbp-110h]
  struct DXGPROCESS *v53; // [rsp+80h] [rbp-108h]
  _BYTE v54[80]; // [rsp+90h] [rbp-F8h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS v55; // [rsp+100h] [rbp-88h] BYREF

  v52 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2098);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v44 = v4;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v53 = Current;
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v8);
    v21 = -1073741811;
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    v27 = qword_1C005F010;
    v29 = (qword_1C005F010 & 2) == 0;
LABEL_29:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v27, &EventProfilerExit, v28, 2098);
    return (unsigned int)v21;
  }
  if ( v4 )
  {
    v11 = &v55;
    v49 = &v55;
    v8 = MmUserProbeAddress;
    v12 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v55 = *v12;
  }
  else
  {
    v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v49 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v11->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v32 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    v21 = -1073741811;
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    *(_QWORD *)(v32 + 32) = 11917LL;
    WdLogEvent5_WdWarning(v32);
    v29 = (qword_1C005F010 & 2) == 0;
    goto LABEL_29;
  }
  v47 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v45, v11->hPagingQueue, Current, &v47);
  v46 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v48,
    v11->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v46);
  v16 = v47;
  v17 = v46;
  if ( !v47 && !v46 )
  {
    v33 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v33 + 24) = v11->hPagingQueue;
    v21 = -1073741811;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
LABEL_26:
    if ( v48 )
      DXGADAPTER::ReleaseReferenceNoTracking(v48);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v45);
    v29 = (qword_1C005F010 & 2) == 0;
    goto LABEL_29;
  }
  v46 = 0LL;
  if ( v47 )
  {
    v17 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v47 + 2) + 16LL) + 16LL);
    v46 = (struct DXGADAPTER *)*((_QWORD *)v47 + 4);
  }
  v18 = 0LL;
  v47 = 0LL;
  if ( *((_QWORD *)v17 + 289) )
  {
LABEL_12:
    v51 = *((_QWORD *)v17 + 289);
    v50 = v51;
    if ( *((_BYTE *)v17 + 185) )
    {
      if ( v16 )
        v42 = *((_DWORD *)v16 + 7);
      else
        v42 = *((_DWORD *)v17 + 978);
      HostProcess = DXGPROCESS::GetHostProcess(Current);
      v21 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v17 + 3888),
              HostProcess,
              v42,
              v11);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v17, 0LL);
      v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
      if ( v21 < 0 )
      {
LABEL_48:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
LABEL_24:
        if ( v18 )
          DXGADAPTER::ReleaseReferenceNoTracking(v18);
        goto LABEL_26;
      }
      Reserved0 = v11->Reserved0;
      if ( Reserved0 > 1 )
      {
        v41 = WdLogNewEntry5_WdWarning(v20, v19, v22);
LABEL_47:
        v21 = -1073741811;
        *(_QWORD *)(v41 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v41);
        goto LABEL_48;
      }
      if ( Reserved0 == 1 && !v46 )
      {
        v41 = WdLogNewEntry5_WdWarning(v20, v19, 0LL);
        *(_QWORD *)(v41 + 32) = 11980LL;
        goto LABEL_47;
      }
      v21 = _guard_dispatch_icall_fptr();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v54);
    }
    if ( v21 >= 0 && v44 )
    {
      v24 = v52;
      v25 = (_QWORD *)(v52 + 56);
      if ( v52 + 56 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = v11->VirtualAddress;
      v26 = (_QWORD *)(v24 + 64);
      if ( v24 + 64 >= MmUserProbeAddress )
        v26 = (_QWORD *)MmUserProbeAddress;
      *v26 = v11->PagingFenceValue;
    }
    goto LABEL_24;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v17, 0, &v47, &v50, 0LL, 0LL);
  if ( PairingAdapters >= 0 )
  {
    v17 = v47;
    v18 = v47;
    goto LABEL_12;
  }
  v38 = WdLogNewEntry5_WdWarning(v35, v34, v37);
  *(_QWORD *)(v38 + 24) = v17;
  WdLogEvent5_WdWarning(v38);
  if ( v48 )
    DXGADAPTER::ReleaseReferenceNoTracking(v48);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v45);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, 2098);
  return (unsigned int)PairingAdapters;
}
