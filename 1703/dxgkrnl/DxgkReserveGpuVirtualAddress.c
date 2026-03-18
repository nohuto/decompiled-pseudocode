/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C00A36F0
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002EAA0 (-VmBusReserveGpuVirtualAddress@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x1C0002BF8 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0013E4C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXGADAPTER@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0031524 (-VmBusSendReserveGpuVirtualAddress@DXGADAPTER@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // bl
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r15
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v10; // rbx
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGPAGINGQUEUE *v15; // rdx
  struct DXGADAPTER *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  unsigned int Reserved0; // eax
  _QWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // r12d
  int HostProcess; // eax
  bool v47; // [rsp+30h] [rbp-148h]
  _BYTE v48[8]; // [rsp+38h] [rbp-140h] BYREF
  struct DXGPAGINGQUEUE *v49; // [rsp+40h] [rbp-138h] BYREF
  struct DXGADAPTER *v50; // [rsp+48h] [rbp-130h] BYREF
  DXGADAPTER *v51; // [rsp+50h] [rbp-128h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v52; // [rsp+60h] [rbp-118h]
  ULONG64 v53; // [rsp+68h] [rbp-110h]
  struct DXGPROCESS *v54; // [rsp+70h] [rbp-108h]
  _BYTE v55[80]; // [rsp+80h] [rbp-F8h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS v56; // [rsp+F0h] [rbp-88h] BYREF

  v53 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2098);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v47 = v4;
  Current = DXGPROCESS::GetCurrent();
  v54 = Current;
  if ( !Current )
  {
    v31 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    v33 = qword_1C006E790;
    v34 = (qword_1C006E790 & 2) == 0;
    goto LABEL_32;
  }
  if ( v4 )
  {
    v10 = &v56;
    v52 = &v56;
    v6 = MmUserProbeAddress;
    v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v56 = *v11;
  }
  else
  {
    v10 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v52 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v10->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v35 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    *(_QWORD *)(v35 + 24) = -1073741811LL;
    *(_QWORD *)(v35 + 32) = 11070LL;
    WdLogEvent5_WdWarning(v35);
LABEL_39:
    v34 = (qword_1C006E790 & 2) == 0;
LABEL_32:
    if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v33, &EventProfilerExit, v32, 2098);
    return 3221225485LL;
  }
  v49 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v48, v10->hPagingQueue, Current, &v49);
  v50 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v51,
    v10->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v50);
  v15 = v49;
  v16 = v50;
  if ( !v49 && !v50 )
  {
    v36 = WdLogNewEntry5_WdWarning(v12, 0LL, v13, v14);
    *(_QWORD *)(v36 + 24) = v10->hPagingQueue;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v36);
    if ( v51 )
      DXGADAPTER::ReleaseReference(v51);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v48, v37, v38, v39);
    goto LABEL_39;
  }
  v17 = 0LL;
  if ( v49 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)v49 + 2) + 16LL);
    v16 = *(struct DXGADAPTER **)(v12 + 16);
    v17 = *((_QWORD *)v49 + 4);
  }
  if ( !*((_QWORD *)v16 + 286) )
  {
    v40 = WdLogNewEntry5_WdWarning(v12, v49, v13, v14);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    *(_QWORD *)(v40 + 32) = 11099LL;
    WdLogEvent5_WdWarning(v40);
LABEL_46:
    if ( v51 )
      DXGADAPTER::ReleaseReference(v51);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v48, v41, v42, v43);
    v34 = (qword_1C006E790 & 2) == 0;
    goto LABEL_32;
  }
  v49 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v16 + 286);
  if ( *((_BYTE *)v16 + 186) )
  {
    if ( v15 )
      v45 = *((_DWORD *)v15 + 7);
    else
      v45 = *((_DWORD *)v16 + 972);
    HostProcess = DXGPROCESS::GetHostProcess(Current);
    v22 = DXGADAPTER::VmBusSendReserveGpuVirtualAddress(v16, HostProcess, v45, v10);
LABEL_17:
    if ( v22 >= 0 && v47 )
    {
      v25 = v53;
      v27 = (_QWORD *)(v53 + 56);
      if ( v53 + 56 >= MmUserProbeAddress )
        v27 = (_QWORD *)MmUserProbeAddress;
      *v27 = v10->VirtualAddress;
      v24 = (_QWORD *)(v25 + 64);
      if ( v25 + 64 >= MmUserProbeAddress )
        v24 = (_QWORD *)MmUserProbeAddress;
      *v24 = v10->PagingFenceValue;
    }
    goto LABEL_24;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v16, 0LL);
  v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
  if ( v22 >= 0 )
  {
    Reserved0 = v10->Reserved0;
    if ( Reserved0 > 1 )
    {
      v44 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
LABEL_45:
      *(_QWORD *)(v44 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v44);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
      goto LABEL_46;
    }
    if ( Reserved0 == 1 && !v17 )
    {
      v44 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v44 + 32) = 11123LL;
      goto LABEL_45;
    }
    v22 = _guard_dispatch_icall_fptr();
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
    goto LABEL_17;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
LABEL_24:
  if ( v51 )
    DXGADAPTER::ReleaseReference(v51);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v48, (__int64)v24, v25, v26);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 2098);
  return (unsigned int)v22;
}
