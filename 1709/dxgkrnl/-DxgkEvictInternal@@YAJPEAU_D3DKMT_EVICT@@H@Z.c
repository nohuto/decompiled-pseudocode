/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00BC8C4
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00BC500 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C00BC7E0 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193130 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00146EC (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0092D74 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00BC7FC (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00BC838 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0196654 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  ULONG64 v5; // rcx
  DXGPROCESS *Current; // r12
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // r9d
  struct _D3DKMT_EVICT *v13; // rax
  struct _D3DKMT_EVICT *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  DXGDEVICE *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // r12
  unsigned int *v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  struct DXGALLOCATION **v30; // rbx
  __int64 v31; // rax
  unsigned int *v32; // rdi
  unsigned int *v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rcx
  struct _EX_RUNDOWN_REF *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int v39; // edi
  unsigned int HostProcess; // eax
  DXG_GUEST_VIRTUALGPU_VMBUS *v41; // rcx
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // [rsp+40h] [rbp-1D8h]
  struct DXGDEVICE *v46; // [rsp+48h] [rbp-1D0h] BYREF
  int v47; // [rsp+50h] [rbp-1C8h]
  struct _D3DKMT_EVICT *v48; // [rsp+58h] [rbp-1C0h]
  struct _EX_RUNDOWN_REF *v49; // [rsp+60h] [rbp-1B8h] BYREF
  int v50; // [rsp+68h] [rbp-1B0h]
  unsigned __int64 v51; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-1A0h]
  int v53; // [rsp+7Ch] [rbp-19Ch]
  DXGDEVICE *v54; // [rsp+80h] [rbp-198h] BYREF
  unsigned int v55[2]; // [rsp+88h] [rbp-190h]
  struct _D3DKMT_EVICT *v56; // [rsp+90h] [rbp-188h]
  __int64 v57; // [rsp+98h] [rbp-180h]
  _BYTE v58[16]; // [rsp+A0h] [rbp-178h] BYREF
  struct DXGPROCESS *v59; // [rsp+B0h] [rbp-168h]
  DXGPROCESS *v60; // [rsp+B8h] [rbp-160h]
  unsigned int *v61; // [rsp+C0h] [rbp-158h]
  _BYTE v62[24]; // [rsp+C8h] [rbp-150h] BYREF
  _OWORD v63[2]; // [rsp+E0h] [rbp-138h] BYREF
  _BYTE v64[96]; // [rsp+100h] [rbp-118h] BYREF
  DXGALLOCATIONREFERENCE *v65; // [rsp+160h] [rbp-B8h] BYREF
  _BYTE v66[128]; // [rsp+168h] [rbp-B0h] BYREF
  int v67; // [rsp+1E8h] [rbp-30h]

  v3 = a2;
  v50 = a2;
  v48 = a1;
  v47 = 2116;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2116);
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v60 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C005F010;
    v10 = (qword_1C005F010 & 2) == 0;
    goto LABEL_6;
  }
  if ( v3 )
  {
    v5 = MmUserProbeAddress;
    v13 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v13 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v63[0] = *(_OWORD *)&v13->hDevice;
    v63[1] = *(_OWORD *)&v13->Flags.0;
    v14 = (struct _D3DKMT_EVICT *)v63;
    v56 = (struct _D3DKMT_EVICT *)v63;
  }
  else
  {
    v14 = a1;
    v56 = a1;
  }
  if ( !v14->NumAllocations )
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_18:
    WdLogEvent5_WdError(v15);
    v10 = (qword_1C005F010 & 2) == 0;
LABEL_6:
    if ( v10 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    v11 = 2116;
LABEL_9:
    McTemplateK0q(v9, &EventProfilerExit, v8, v11);
    return 3221225485LL;
  }
  if ( !v14->AllocationList )
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = 758LL;
    goto LABEL_18;
  }
  if ( v14->Flags.Value >= 4 )
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = 765LL;
    goto LABEL_18;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>((__int64)&v65);
  v65 = (DXGALLOCATIONREFERENCE *)v66;
  v67 = 16;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, v14->hDevice, (struct _KTHREAD **)Current, &v54);
  v17 = v54;
  if ( !v54 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v18 + 24) = v14->hDevice;
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_25;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58,
    v54);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v64, (__int64)v17, 0, v19, 0);
  v21 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v64);
  if ( v21 >= 0 )
  {
    NumAllocations = v14->NumAllocations;
    v57 = NumAllocations;
    AllocationList = (unsigned int *)v14->AllocationList;
    v26 = &AllocationList[NumAllocations];
    v61 = v26;
    if ( v26 < AllocationList )
    {
      v27 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v27 + 24) = v14->NumAllocations;
      WdLogEvent5_WdAssertion(v27);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
LABEL_25:
      if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v65);
      if ( (qword_1C005F010 & 2) == 0 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      v11 = 2116;
      goto LABEL_9;
    }
    v28 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
    v45 = *(_BYTE *)(v28 + 185);
    v29 = 0LL;
    v51 = 0LL;
    v30 = (struct DXGALLOCATION **)v66;
LABEL_42:
    if ( AllocationList != v26 )
    {
      v31 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v31 = (unsigned int)NumAllocations;
      v53 = v31;
      v32 = &AllocationList[v31];
      *(_QWORD *)v55 = v32;
      v59 = DXGPROCESS::GetCurrent(v28, NumAllocations);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, v59);
      while ( 1 )
      {
        if ( AllocationList == v32 )
        {
          v37 = ((char *)v30 - v66) >> 3;
          *(_QWORD *)v55 = v37;
          if ( v45 )
          {
            v38 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
            v39 = *((_DWORD *)v17 + 84);
            HostProcess = DXGPROCESS::GetHostProcess(v60);
            v41 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v38 + 3888);
            v30 = (struct DXGALLOCATION **)v66;
            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
              v41,
              HostProcess,
              v39,
              v14->Flags,
              v55[0],
              (const struct DXGALLOCATIONREFERENCE *)v66,
              &v51);
          }
          else
          {
            DXGDEVICE::Evict(v17, (struct DXGALLOCATIONREFERENCE *)v66, (unsigned int)v37, v14->Flags, &v51);
            v30 = (struct DXGALLOCATION **)v66;
          }
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
          NumAllocations = (unsigned int)(v57 - v53);
          v57 = NumAllocations;
          v29 = v51;
          v26 = v61;
          goto LABEL_42;
        }
        if ( v50 )
        {
          v33 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v33 = (unsigned int *)MmUserProbeAddress;
          v34 = *v33;
          v52 = *v33;
          v14 = v56;
          v17 = v54;
        }
        else
        {
          v34 = *AllocationList;
          v52 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v59, (DXGALLOCATIONREFERENCE *)&v49, v34);
        if ( !v49 )
        {
          v36 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdAssertion(v35);
          v36[3].Count = v34;
          goto LABEL_56;
        }
        if ( (DXGDEVICE *)v49[1].Count != v17 )
          break;
        DXGALLOCATIONREFERENCE::MoveAssign(v30++, (struct DXGALLOCATION **)&v49);
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
        v32 = *(unsigned int **)v55;
      }
      v36 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdAssertion(v35);
      v36[3].Count = (ULONG_PTR)v17;
      v36[4].Count = v49[1].Count;
LABEL_56:
      WdLogEvent5_WdAssertion(v36);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
      _guard_dispatch_icall_fptr();
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
      if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
      PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v65);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        v11 = v47;
        goto LABEL_9;
      }
      return 3221225485LL;
    }
    if ( v50 )
    {
      p_NumBytesToTrim = &v48->NumBytesToTrim;
      if ( (unsigned __int64)&v48->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
      *p_NumBytesToTrim = v51;
    }
    else
    {
      v14->NumBytesToTrim = v29;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v65);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v43, &EventProfilerExit, v44, v47);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v64);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v58);
    if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v65);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, 2116);
    return (unsigned int)v21;
  }
}
