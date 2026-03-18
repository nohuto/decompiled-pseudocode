/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0179770
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C0172F4C (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0173958 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0175480 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C0177D48 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B70DC (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  struct DXGADAPTER *v8; // rbx
  __int64 v9; // rcx
  struct DXGDEVICE *VirtualGpuDevice; // r12
  __int64 v11; // rax
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  ULONG PartitionId; // edx
  __int64 v19; // rbx
  DXGK_VIRTUAL_GPU *v20; // rax
  __int64 v21; // r8
  DXGK_VIRTUAL_GPU *v22; // rdi
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  int VirtualGpu; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 NumMemorySegments; // rbx
  __int64 v35; // rax
  SIZE_T v36; // rax
  PVOID v37; // rax
  void *v38; // rcx
  __int64 v39; // rax
  ULONG v40; // eax
  __int64 v41; // r13
  int StandardAllocation; // eax
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // ecx
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r15
  __int64 v51; // rdx
  void *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned int v60; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v61; // [rsp+34h] [rbp-CCh] BYREF
  char v62[8]; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGADAPTER *v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+48h] [rbp-B8h]
  struct DXGADAPTER *v65; // [rsp+50h] [rbp-B0h]
  UINT64 v66; // [rsp+58h] [rbp-A8h] BYREF
  char v67[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v68; // [rsp+68h] [rbp-98h]
  char v69; // [rsp+70h] [rbp-90h]
  _BYTE v70[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v71[24]; // [rsp+88h] [rbp-78h] BYREF
  char v72[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v73[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v74[40]; // [rsp+C8h] [rbp-38h] BYREF
  char v75[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v76[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v77[56]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v78[54]; // [rsp+150h] [rbp+50h] BYREF
  UINT64 Size; // [rsp+300h] [rbp+200h] BYREF
  __int64 v80; // [rsp+308h] [rbp+208h]
  __int64 v81; // [rsp+310h] [rbp+210h]
  _DXGKARG_SETVIRTUALGPURESOURCES v82[26]; // [rsp+320h] [rbp+220h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 212LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *((_BYTE *)Current + 323) |= 2u;
  v65 = *(struct DXGADAPTER **)(*((_QWORD *)this + 4) + 16LL);
  v8 = v65;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 168, 0LL);
  *((_QWORD *)Current + 22) = KeGetCurrentThread();
  v7 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
  v63 = v8;
  v64 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v72, v8, 0LL);
  LODWORD(v8) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v72);
  if ( (int)v8 < 0 )
    goto LABEL_6;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  if ( !VirtualGpuDevice )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 244LL;
    WdLogEvent5_WdError(v11);
    LODWORD(v8) = -1073741801;
LABEL_6:
    COREACCESS::~COREACCESS((COREACCESS *)v74);
    COREACCESS::~COREACCESS((COREACCESS *)v73);
    if ( v64 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)Current + 22) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
    KeLeaveCriticalRegion();
    return (unsigned int)v8;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v74);
  COREACCESS::~COREACCESS((COREACCESS *)v73);
  if ( v64 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  *(_QWORD *)(v7 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)Current + 22) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70,
    VirtualGpuDevice);
  v68 = v65;
  v69 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)VirtualGpuDevice, 2, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75);
  v8 = (struct DXGADAPTER *)v13;
  if ( v13 >= 0 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v71, (struct _KTHREAD **)this + 5);
    PartitionId = a2->PartitionId;
    v60 = 0xFFFF;
    LODWORD(v8) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v60);
    if ( (int)v8 < 0 )
    {
LABEL_49:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v71);
      goto LABEL_50;
    }
    v19 = v60;
    a2->PartitionId = v60;
    v20 = (DXGK_VIRTUAL_GPU *)operator new(0x98uLL, 0x4B677844u, 1, PagedPool);
    v22 = v20;
    if ( v20 )
    {
      DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v20, *((struct ADAPTER_RENDER **)this + 4), 0);
      *(_QWORD *)v22 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
    }
    else
    {
      v22 = 0LL;
    }
    if ( !v22 )
    {
      LODWORD(v8) = -1073741801;
      goto LABEL_49;
    }
    *((_QWORD *)v22 + 10) = Current;
    v23 = (_QWORD *)((char *)this + 64);
    *((_DWORD *)v22 + 6) = v19;
    *((_QWORD *)v22 + 16) = VirtualGpuDevice;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v19) = v22;
    v24 = (_QWORD *)((char *)v22 + 96);
    ++*((_DWORD *)this + 4);
    v25 = *((_QWORD *)this + 8);
    if ( *(DXGVIRTUALGPUMANAGER_GPUP **)(v25 + 8) != (DXGVIRTUALGPUMANAGER_GPUP *)((char *)this + 64) )
      __fastfail(3u);
    *v24 = v25;
    *((_QWORD *)v22 + 13) = v23;
    *(_QWORD *)(v25 + 8) = v24;
    *v23 = v24;
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v21);
    v8 = (struct DXGADAPTER *)VirtualGpu;
    if ( VirtualGpu < 0 )
      goto LABEL_22;
    *((_BYTE *)v22 + 144) = 1;
    *(CLSID *)((char *)v22 + 36) = a2->UserModeVirtualDeviceProvider;
    RtlCopyLuid((PLUID)((char *)v22 + 28), &a2->VirtualGpuLuid);
    NumMemorySegments = a2->NumMemorySegments;
    if ( (unsigned int)NumMemorySegments > 0x20 )
    {
      v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v35 + 24) = a2->NumMemorySegments;
      *(_QWORD *)(v35 + 32) = 299LL;
      WdLogEvent5_WdWarning(v35);
      LODWORD(v8) = -1073741811;
LABEL_46:
      (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, DXGK_VIRTUAL_GPU *))(*(_QWORD *)this + 24LL))(this, v22);
      goto LABEL_49;
    }
    if ( (_DWORD)NumMemorySegments )
    {
      v36 = 8 * NumMemorySegments;
      if ( !is_mul_ok(NumMemorySegments, 8uLL) )
        v36 = -1LL;
      v37 = operator new[](v36, 0x4B677844u, PagedPool);
      *((_QWORD *)v22 + 17) = v37;
      v38 = v37;
      if ( !v37 )
      {
        v39 = WdLogNewEntry5_WdLowResource(0LL);
        *(_QWORD *)(v39 + 24) = 308LL;
        WdLogEvent5_WdLowResource(v39);
        LODWORD(v8) = -1073741801;
        goto LABEL_46;
      }
      v40 = a2->NumMemorySegments;
      *((_DWORD *)v22 + 30) = v40;
      memset(v38, 0, 8LL * v40);
      LODWORD(NumMemorySegments) = a2->NumMemorySegments;
    }
    v41 = 0LL;
    if ( !(_DWORD)NumMemorySegments )
    {
LABEL_41:
      memset(v82, 0, 0x408uLL);
      v50 = 0LL;
      v82[0].PartitionId = a2->PartitionId;
      v82[0].NumMemoryAllocations = NumMemorySegments;
      if ( (_DWORD)NumMemorySegments )
      {
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice
                                                                                              + 2)
                                                                                            + 544LL)
                                                                                + 8LL)
                                                                    + 216LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 552LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 17) + 8 * v50) + 48LL) + 8LL),
            &v61,
            &v66);
          v51 = (unsigned int)v50;
          v52 = *(void **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v22 + 17) + 8 * v50) + 48LL) + 16LL);
          v82[0].MemoryInfo[v51].AllocationAddress.MemorySegmentId = v61;
          v82[0].MemoryInfo[v51].AllocationAddress.MemorySegmentOffset = v66;
          v82[0].MemoryInfo[v51].DriverAllocationHandle = v52;
          v53 = 6 * (v50 + 3);
          v50 = (unsigned int)(v50 + 1);
          v82[0].MemoryInfo[v51].AllocationSize = *((_QWORD *)&a2->PartitionId + v53);
        }
        while ( (unsigned int)v50 < a2->NumMemorySegments );
      }
      v54 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v82, v49);
      v8 = (struct DXGADAPTER *)v54;
      if ( v54 >= 0 )
      {
        LODWORD(v8) = 0;
        goto LABEL_49;
      }
      v30 = WdLogNewEntry5_WdWarning(v56, v55, v57);
      *(_QWORD *)(v30 + 32) = 378LL;
      goto LABEL_45;
    }
    while ( 1 )
    {
      v80 = 0LL;
      v81 = 0LL;
      memset(v78, 0, 0x134uLL);
      memset(&v78[39], 0, 120);
      LODWORD(v78[0]) |= 0x200u;
      LODWORD(v78[2]) = 5;
      HIDWORD(v78[0]) = *((_DWORD *)VirtualGpuDevice + 83);
      v78[3] = &Size;
      Size = a2->SegmentInfo[v41].Size;
      LODWORD(v80) = a2->SegmentInfo[v41].Alignment;
      HIDWORD(v80) = a2->SegmentInfo[v41].DriverSegmentId;
      LODWORD(v81) = a2->SegmentInfo[v41].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v78,
                             0LL);
      v8 = (struct DXGADAPTER *)StandardAllocation;
      if ( StandardAllocation < 0 )
        break;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
      v43 = (HIDWORD(v78[6]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v43 < *((_DWORD *)Current + 62)
        && (v44 = *((_QWORD *)Current + 29),
            v45 = *(_DWORD *)(v44 + 16 * v43 + 8),
            ((HIDWORD(v78[6]) >> 25) & 0x60) == (*(_BYTE *)(v44 + 16 * v43 + 8) & 0x60))
        && (v45 & 0x2000) == 0
        && (v45 & 0x1F) == 5 )
      {
        v46 = *(_QWORD *)(v44 + 16LL * (unsigned int)v43);
      }
      else
      {
        v46 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(*((_QWORD *)v22 + 17) + 8 * v41) = v46;
      v47 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 4) + 552LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)v22 + 17) + 8 * v41) + 24LL),
              0LL,
              0LL);
      v8 = (struct DXGADAPTER *)v47;
      if ( v47 < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v48);
        *(_QWORD *)(v58 + 24) = v8;
        WdLogEvent5_WdError(v58);
        goto LABEL_46;
      }
      LODWORD(NumMemorySegments) = a2->NumMemorySegments;
      v41 = (unsigned int)(v41 + 1);
      if ( (unsigned int)v41 >= (unsigned int)NumMemorySegments )
        goto LABEL_41;
    }
LABEL_22:
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
LABEL_45:
    *(_QWORD *)(v30 + 24) = v8;
    WdLogEvent5_WdWarning(v30);
    goto LABEL_46;
  }
  v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
  *(_QWORD *)(v17 + 24) = VirtualGpuDevice;
  *(_QWORD *)(v17 + 32) = v8;
  WdLogEvent5_WdWarning(v17);
LABEL_50:
  COREACCESS::~COREACCESS((COREACCESS *)v77);
  COREACCESS::~COREACCESS((COREACCESS *)v76);
  if ( v69 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v70);
  return (unsigned int)v8;
}
