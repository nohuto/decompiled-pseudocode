/*
 * XREFs of ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0185A84
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C016D3D0 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A6A4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0185834 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        int a4,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a5)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // esi
  struct _EX_RUNDOWN_REF *v11; // rdi
  unsigned int HostProcess; // eax
  D3DKMT_HANDLE hFenceObject; // r12d
  __int64 v14; // rax
  D3DKMT_HANDLE v15; // r12d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  int v25; // r13d
  int Count; // r12d
  unsigned int v27; // r15d
  unsigned __int64 v28; // rsi
  int v29; // eax
  unsigned int v30; // r8d
  struct DXGALLOCATION **AllocationUnsafe; // rax
  struct _MDL *v32; // r9
  struct _EX_RUNDOWN_REF *v33; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v34[8]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v35; // [rsp+30h] [rbp-88h]
  char v36; // [rsp+38h] [rbp-80h]
  unsigned int v37; // [rsp+40h] [rbp-78h]
  unsigned int v38; // [rsp+44h] [rbp-74h]
  int v39; // [rsp+48h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v40[2]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v41[88]; // [rsp+60h] [rbp-58h] BYREF

  v35 = *((_QWORD *)this + 6);
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 176LL) != 1 )
  {
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    return 3221226166LL;
  }
  v8 = (unsigned __int64)a5->NumOperations << 6;
  v9 = 0xFFFFFFFFLL;
  if ( v8 <= 0xFFFFFFFF )
    v9 = (unsigned int)v8;
  v39 = v9;
  v10 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v38 = v10;
  if ( (unsigned int)v9 >= 0x20000 || (v37 = v9 + 56, (unsigned int)(v9 + 56) > 0x20000) )
  {
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    return 3221225659LL;
  }
  v11 = (struct _EX_RUNDOWN_REF *)operator new[]((unsigned int)(v9 + 56), 0x4B677844u, (POOL_TYPE)512);
  v40[1] = v11;
  if ( !v11 )
  {
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    return 3221225495LL;
  }
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v11->Count = 0LL;
  LODWORD(v11[1].Count) = HostProcess;
  HIDWORD(v11[1].Ptr) = 0;
  LODWORD(v11[2].Count) = 19;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v41, (struct _KTHREAD **)a2);
  hFenceObject = a5->hFenceObject;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 208));
  v14 = (hFenceObject >> 6) & 0xFFFFFF;
  v15 = hFenceObject >> 30;
  if ( (unsigned int)v14 < *((_DWORD *)a2 + 62)
    && (v16 = *((_QWORD *)a2 + 29), v17 = *(_DWORD *)(v16 + 16 * v14 + 8), v15 == ((v17 >> 5) & 3))
    && (v17 & 0x2000) == 0
    && (v17 & 0x1F) == 0xB )
  {
    v18 = *(_QWORD *)(v16 + 16LL * (unsigned int)v14);
  }
  else
  {
    v18 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)a2 + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v18 )
  {
    v22 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v22 + 24) = a5->hFenceObject;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_24;
  }
  v23 = *(_DWORD *)(v18 + 44);
  v11[3].Count = a5->FenceValue;
  LODWORD(v11[6].Count) = a5->Flags.Value;
  HIDWORD(v11[4].Ptr) = a4;
  LODWORD(v11[4].Count) = a3;
  LODWORD(v11[5].Count) = v23;
  HIDWORD(v11[5].Ptr) = a5->NumOperations;
  Operations = a5->Operations;
  if ( (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)((char *)Operations + v9) < Operations
    || (unsigned __int64)Operations + v9 > MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(&v11[7], Operations, (unsigned int)v9);
  v25 = 0;
  Count = 0;
  v27 = 0;
  if ( !a5->NumOperations )
  {
LABEL_36:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
    v10 = VmBusSendSyncMessageStatusReturn(*(struct VMBCHANNEL__ **)this, (struct DXGKVMB_COMMAND_BASE *)v11, v37, v32);
    goto LABEL_38;
  }
  while ( 1 )
  {
    v28 = (unsigned __int64)v27 << 6;
    v29 = *(_DWORD *)((char *)&v11[7].Count + v28);
    if ( v29 && v29 != 3 )
      goto LABEL_35;
    v30 = *(_DWORD *)((char *)&v11[10].Count + v28);
    if ( v30 != v25 )
      break;
    *(_DWORD *)((char *)&v11[10].Count + v28) = Count;
LABEL_35:
    if ( ++v27 >= a5->NumOperations )
      goto LABEL_36;
  }
  v33 = 0LL;
  AllocationUnsafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                                (__int64)a2,
                                                (DXGALLOCATIONREFERENCE *)v40,
                                                v30);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v33, AllocationUnsafe);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v40);
  if ( v33 )
  {
    v25 = *(_DWORD *)((char *)&v11[10].Count + v28);
    Count = v33[12].Count;
    *(_DWORD *)((char *)&v11[10].Count + v28) = Count;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
    goto LABEL_35;
  }
  v10 = -1073741811;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
LABEL_24:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v41);
LABEL_38:
  operator delete[](v11);
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return v10;
}
