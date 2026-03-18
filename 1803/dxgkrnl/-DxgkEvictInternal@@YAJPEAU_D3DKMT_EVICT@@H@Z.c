/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00D5E3C
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00D5D00 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z.c)
 *     DxgkEvict @ 0x1C00D5E20 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F250 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001A6A4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D65E0 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00D661C (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C00F2A3C (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0182E9C (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, __int64 a3)
{
  ULONG64 v5; // rcx
  DXGPROCESS *Current; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _D3DKMT_EVICT *v11; // rax
  struct _D3DKMT_EVICT *v12; // rsi
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // r13
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // r12
  unsigned int *v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  struct DXGALLOCATION **v26; // rbx
  __int64 v27; // rax
  unsigned int *v28; // rdi
  unsigned int *v29; // rax
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rbx
  unsigned int v35; // edi
  unsigned int HostProcess; // eax
  DXG_GUEST_VIRTUALGPU_VMBUS *v37; // rcx
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // [rsp+40h] [rbp-1E8h]
  struct DXGDEVICE *v42; // [rsp+48h] [rbp-1E0h] BYREF
  int v43; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-1D0h]
  struct _D3DKMT_EVICT *v45; // [rsp+60h] [rbp-1C8h]
  struct DXGALLOCATION *v46; // [rsp+68h] [rbp-1C0h] BYREF
  int v47; // [rsp+70h] [rbp-1B8h]
  unsigned __int64 v48; // [rsp+78h] [rbp-1B0h] BYREF
  unsigned int v49; // [rsp+80h] [rbp-1A8h]
  int v50; // [rsp+84h] [rbp-1A4h]
  struct DXGDEVICE *v51; // [rsp+88h] [rbp-1A0h] BYREF
  unsigned int v52[2]; // [rsp+90h] [rbp-198h]
  struct _D3DKMT_EVICT *v53; // [rsp+98h] [rbp-190h]
  struct D3DDDI_EVICT_FLAGS *v54; // [rsp+A0h] [rbp-188h]
  __int64 v55; // [rsp+A8h] [rbp-180h]
  _BYTE v56[16]; // [rsp+B0h] [rbp-178h] BYREF
  struct _KTHREAD **v57; // [rsp+C0h] [rbp-168h]
  DXGPROCESS *v58; // [rsp+C8h] [rbp-160h]
  unsigned int *v59; // [rsp+D0h] [rbp-158h]
  _BYTE v60[24]; // [rsp+D8h] [rbp-150h] BYREF
  _OWORD v61[2]; // [rsp+F0h] [rbp-138h] BYREF
  _BYTE v62[96]; // [rsp+110h] [rbp-118h] BYREF
  _BYTE *v63; // [rsp+170h] [rbp-B8h] BYREF
  _BYTE v64[128]; // [rsp+178h] [rbp-B0h] BYREF
  int v65; // [rsp+1F8h] [rbp-30h]

  v47 = a2;
  v45 = a1;
  v44 = 0LL;
  v43 = 2116;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2116);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v43, 2116);
  Current = DXGPROCESS::GetCurrent();
  v58 = Current;
  if ( !Current )
    goto LABEL_5;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v61[0] = *(_OWORD *)&v11->hDevice;
    v61[1] = *(_OWORD *)&v11->Flags.0;
    v12 = (struct _D3DKMT_EVICT *)v61;
    v53 = (struct _D3DKMT_EVICT *)v61;
  }
  else
  {
    v12 = a1;
    v53 = a1;
  }
  v54 = (struct D3DDDI_EVICT_FLAGS *)v12;
  if ( !v12->NumAllocations )
  {
LABEL_5:
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_6:
    WdLogEvent5_WdError(v7);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v8, &EventProfilerExit, v9, v43);
    return 3221225485LL;
  }
  if ( !v12->AllocationList )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 773LL;
    goto LABEL_6;
  }
  if ( v12->Flags.Value >= 4 )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 780LL;
    goto LABEL_6;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v63);
  v63 = v64;
  v65 = 16;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v12->hDevice, (struct _KTHREAD **)Current, &v51);
  v14 = v51;
  if ( !v51 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v15 + 24) = v12->hDevice;
    WdLogEvent5_WdAssertion(v15);
LABEL_23:
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v63);
    goto LABEL_7;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56,
    v51);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v14, 0, v16, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62);
  if ( v18 >= 0 )
  {
    NumAllocations = v12->NumAllocations;
    v55 = NumAllocations;
    AllocationList = (unsigned int *)v12->AllocationList;
    v23 = &AllocationList[NumAllocations];
    v59 = v23;
    if ( v23 < AllocationList )
    {
      v24 = WdLogNewEntry5_WdAssertion(v17);
      *(_QWORD *)(v24 + 24) = v12->NumAllocations;
      WdLogEvent5_WdAssertion(v24);
LABEL_37:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
      goto LABEL_23;
    }
    v41 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL) + 185LL);
    v25 = 0LL;
    v48 = 0LL;
    v26 = (struct DXGALLOCATION **)v64;
    while ( AllocationList != v23 )
    {
      v27 = 16LL;
      if ( (unsigned int)NumAllocations < 0x10 )
        v27 = (unsigned int)NumAllocations;
      v50 = v27;
      v28 = &AllocationList[v27];
      *(_QWORD *)v52 = v28;
      v57 = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v60, v57);
      while ( AllocationList != v28 )
      {
        if ( v47 )
        {
          v29 = AllocationList;
          if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
            v29 = (unsigned int *)MmUserProbeAddress;
          v30 = *v29;
          v49 = *v29;
          v12 = v53;
          v14 = v51;
        }
        else
        {
          v30 = *AllocationList;
          v49 = *AllocationList;
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)v57, (DXGALLOCATIONREFERENCE *)&v46, v30);
        if ( !v46 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v32 + 24) = v30;
LABEL_53:
          WdLogEvent5_WdAssertion(v32);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
          _guard_dispatch_icall_fptr();
          goto LABEL_37;
        }
        if ( *((struct DXGDEVICE **)v46 + 1) != v14 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v32 + 24) = v14;
          *(_QWORD *)(v32 + 32) = *((_QWORD *)v46 + 1);
          goto LABEL_53;
        }
        DXGALLOCATIONREFERENCE::MoveAssign(v26++, &v46);
        ++AllocationList;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46);
        v28 = *(unsigned int **)v52;
      }
      v33 = ((char *)v26 - v64) >> 3;
      *(_QWORD *)v52 = v33;
      if ( v41 )
      {
        v34 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
        v35 = *((_DWORD *)v14 + 84);
        HostProcess = DXGPROCESS::GetHostProcess(v58);
        v37 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(v34 + 4080);
        v26 = (struct DXGALLOCATION **)v64;
        DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
          v37,
          HostProcess,
          v35,
          v54[4],
          v52[0],
          (const struct DXGALLOCATIONREFERENCE *)v64,
          &v48);
      }
      else
      {
        DXGDEVICE::Evict(v14, (struct DXGALLOCATIONREFERENCE *)v64, v33, v54[4], &v48);
        v26 = (struct DXGALLOCATION **)v64;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v60);
      LODWORD(NumAllocations) = v55 - v50;
      v55 = (unsigned int)(v55 - v50);
      v25 = v48;
      v23 = v59;
    }
    if ( v47 )
    {
      p_NumBytesToTrim = &v45->NumBytesToTrim;
      if ( (unsigned __int64)&v45->NumBytesToTrim >= MmUserProbeAddress )
        p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
      *p_NumBytesToTrim = v48;
    }
    else
    {
      v12->NumBytesToTrim = v25;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v43);
    return 0LL;
  }
  else
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v56);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v63);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v43);
    return (unsigned int)v18;
  }
}
