/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018E930
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0003834 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0188DD4 (--0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C018AA68 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C018D0FC (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B9BEC (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 PartitionId; // rcx
  struct DXGPROCESS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  PERESOURCE *v12; // r15
  DXGK_VIRTUAL_GPU *v13; // rax
  DXGK_VIRTUAL_GPU *v14; // rsi
  char *v15; // r13
  __int64 v16; // r12
  __int64 v17; // rcx
  struct DXGDEVICE *VirtualGpuDevice; // r13
  __int64 v19; // rax
  char *v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int VirtualGpu; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 NumMemorySegments; // rax
  __int64 v37; // rax
  SIZE_T v38; // rax
  PVOID v39; // rax
  void *v40; // rcx
  __int64 v41; // rax
  ULONG v42; // eax
  int StandardAllocation; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  struct DXGPROCESS *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rbx
  int v50; // r8d
  __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rax
  char *v64; // r14
  _QWORD *v65; // rsi
  __int64 v66; // rax
  _BYTE v67[8]; // [rsp+30h] [rbp-D0h] BYREF
  PERESOURCE *v68; // [rsp+38h] [rbp-C8h]
  char v69; // [rsp+40h] [rbp-C0h]
  struct DXGPROCESS *Current; // [rsp+48h] [rbp-B8h] BYREF
  char *v71; // [rsp+50h] [rbp-B0h]
  _BYTE v72[16]; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v73; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v74[8]; // [rsp+70h] [rbp-90h] BYREF
  PERESOURCE *v75; // [rsp+78h] [rbp-88h]
  char v76; // [rsp+80h] [rbp-80h]
  UINT64 v77; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v78[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v79[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v80[56]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v81[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[32]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v83[40]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v84[54]; // [rsp+140h] [rbp+40h] BYREF
  UINT64 Size; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v86; // [rsp+2F8h] [rbp+1F8h]
  __int64 v87; // [rsp+300h] [rbp+200h]
  _DXGKARG_SETVIRTUALGPURESOURCES v88[26]; // [rsp+310h] [rbp+210h] BYREF

  if ( a2->PartitionId >= *((_DWORD *)this + 3) )
  {
    v4 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v4 + 24) = a2->PartitionId;
    *(_QWORD *)(v4 + 32) = *((unsigned int *)this + 3);
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  PartitionId = a2->PartitionId;
  if ( *(_QWORD *)(*((_QWORD *)this + 3) + 8 * PartitionId) )
  {
    v4 = WdLogNewEntry5_WdError(PartitionId);
    *(_QWORD *)(v4 + 24) = a2->PartitionId;
    goto LABEL_3;
  }
  Current = DXGPROCESS::GetCurrent(PartitionId, (__int64)a2);
  v7 = Current;
  if ( !Current )
  {
    LODWORD(v7) = DXGPROCESS::CreateDxgProcess(&Current, 0LL, 0LL);
    if ( (int)v7 < 0 )
    {
      v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = 188LL;
      WdLogEvent5_WdWarning(v11);
      return (unsigned int)v7;
    }
    v7 = Current;
  }
  *((_BYTE *)v7 + 307) |= 2u;
  v12 = *(PERESOURCE **)(*((_QWORD *)this + 4) + 16LL);
  v13 = (DXGK_VIRTUAL_GPU *)operator new(0x90uLL, 0x4B677844u, 1, PagedPool);
  v14 = v13;
  if ( v13 )
  {
    DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(v13, *((struct ADAPTER_RENDER **)this + 4));
    *(_QWORD *)v14 = &DXGK_VIRTUAL_GPU_GPUP::`vftable';
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 )
    return 3221225495LL;
  *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * a2->PartitionId) = v14;
  *((_QWORD *)v14 + 10) = v7;
  ++*((_DWORD *)this + 4);
  DXGADAPTER::ReleaseCoreResource(v12);
  v15 = (char *)v7 + 160;
  v71 = (char *)v7 + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v7 + 160, 0LL);
  *((_QWORD *)v7 + 21) = KeGetCurrentThread();
  v16 = *((_QWORD *)this + 4) + 24LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v16, 0LL);
  *(_QWORD *)(v16 + 8) = KeGetCurrentThread();
  v75 = v12;
  v76 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v81, (struct DXGADAPTER *const)v12, 0LL);
  LODWORD(v7) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v81);
  if ( (int)v7 < 0 )
    goto LABEL_19;
  VirtualGpuDevice = DXGPROCESS::GetVirtualGpuDevice(Current, *((struct ADAPTER_RENDER **)this + 4));
  if ( !VirtualGpuDevice )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = 246LL;
    WdLogEvent5_WdError(v19);
    v15 = v71;
    LODWORD(v7) = -1073741823;
LABEL_19:
    COREACCESS::~COREACCESS((COREACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v82);
    if ( v76 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v15 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
LABEL_28:
    DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v12);
    return (unsigned int)v7;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v83);
  COREACCESS::~COREACCESS((COREACCESS *)v82);
  if ( v76 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v74);
  *(_QWORD *)(v16 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v16, 0LL);
  KeLeaveCriticalRegion();
  v20 = v71;
  v21 = 0;
  *((_QWORD *)v71 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v20, 0LL);
  KeLeaveCriticalRegion();
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72,
    VirtualGpuDevice);
  v68 = v12;
  v69 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)VirtualGpuDevice, 2, v22, 0);
  v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v78);
  v7 = (struct DXGPROCESS *)v23;
  if ( v23 < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = VirtualGpuDevice;
    *(_QWORD *)(v27 + 32) = v7;
    WdLogEvent5_WdWarning(v27);
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( v69 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
    goto LABEL_28;
  }
  VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu(*((ADAPTER_RENDER **)this + 4), a2, v26);
  v7 = (struct DXGPROCESS *)VirtualGpu;
  if ( VirtualGpu < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v7;
    WdLogEvent5_WdWarning(v32);
LABEL_56:
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
    if ( v69 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
    DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v12);
    (*(void (__fastcall **)(DXGVIRTUALGPUMANAGER_GPUP *, _QWORD))(*(_QWORD *)this + 24LL))(this, a2->PartitionId);
    return (unsigned int)v7;
  }
  *((_BYTE *)v14 + 136) = 1;
  *((_DWORD *)v14 + 6) = a2->PartitionId;
  *(CLSID *)((char *)v14 + 36) = a2->UserModeVirtualDeviceProvider;
  RtlCopyLuid((PLUID)((char *)v14 + 28), &a2->VirtualGpuLuid);
  *((_QWORD *)v14 + 15) = VirtualGpuDevice;
  NumMemorySegments = a2->NumMemorySegments;
  if ( (unsigned int)NumMemorySegments > 0x20 )
  {
    v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    *(_QWORD *)(v37 + 24) = a2->NumMemorySegments;
    *(_QWORD *)(v37 + 32) = 280LL;
    WdLogEvent5_WdWarning(v37);
    LODWORD(v7) = -1073741811;
    goto LABEL_56;
  }
  if ( (_DWORD)NumMemorySegments )
  {
    v38 = 8 * NumMemorySegments;
    if ( !is_mul_ok(a2->NumMemorySegments, 8uLL) )
      v38 = -1LL;
    v39 = operator new[](v38, 0x4B677844u, PagedPool);
    *((_QWORD *)v14 + 16) = v39;
    v40 = v39;
    if ( !v39 )
    {
      v41 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v41 + 24) = 289LL;
      WdLogEvent5_WdLowResource(v41);
      LODWORD(v7) = -1073741801;
      goto LABEL_56;
    }
    v42 = a2->NumMemorySegments;
    *((_DWORD *)v14 + 28) = v42;
    memset(v40, 0, 8LL * v42);
  }
  if ( a2->NumMemorySegments )
  {
    while ( 1 )
    {
      v86 = 0LL;
      v87 = 0LL;
      memset(v84, 0, 0x134uLL);
      memset(&v84[39], 0, 120);
      LODWORD(v84[0]) |= 0x200u;
      HIDWORD(v84[0]) = *((_DWORD *)VirtualGpuDevice + 83);
      v84[3] = &Size;
      LODWORD(v84[2]) = 5;
      Size = a2->SegmentInfo[v21].Size;
      LODWORD(v86) = a2->SegmentInfo[v21].Alignment;
      HIDWORD(v86) = a2->SegmentInfo[v21].DriverSegmentId;
      LODWORD(v87) = a2->SegmentInfo[v21].PrivateDriverData;
      StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                             VirtualGpuDevice,
                             (struct _D3DKM_CREATESTANDARDALLOCATION *)v84,
                             0LL);
      v7 = (struct DXGPROCESS *)StandardAllocation;
      if ( StandardAllocation < 0 )
        break;
      v47 = Current;
      v71 = (char *)Current + 200;
      DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
      v48 = (HIDWORD(v84[6]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v48 < *((_DWORD *)v47 + 60)
        && (v49 = *((_QWORD *)v47 + 28),
            v50 = *(_DWORD *)(v49 + 16 * v48 + 8),
            ((HIDWORD(v84[6]) >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60))
        && (v50 & 0x2000) == 0
        && (v50 & 0x1F) != 0
        && (*(_BYTE *)(v49 + 16LL * (unsigned int)v48 + 8) & 0x1F) == 5 )
      {
        v51 = *(_QWORD *)(v49 + 16LL * (unsigned int)v48);
      }
      else
      {
        v51 = 0LL;
      }
      ExReleasePushLockSharedEx(v71, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(*((_QWORD *)v14 + 16) + 8LL * v21) = v51;
      v52 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)VirtualGpuDevice + 2) + 528LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 4) + 536LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)v14 + 16) + 8LL * v21) + 24LL),
              0LL,
              0LL);
      v7 = (struct DXGPROCESS *)v52;
      if ( v52 < 0 )
      {
        v63 = WdLogNewEntry5_WdError(v53);
        *(_QWORD *)(v63 + 24) = v7;
        WdLogEvent5_WdError(v63);
        goto LABEL_56;
      }
      if ( ++v21 >= a2->NumMemorySegments )
        goto LABEL_50;
    }
    v62 = WdLogNewEntry5_WdWarning(v45, v44, v46);
    goto LABEL_55;
  }
LABEL_50:
  memset(v88, 0, 0x408uLL);
  v55 = 0LL;
  v88[0].PartitionId = a2->PartitionId;
  v88[0].NumMemoryAllocations = a2->NumMemorySegments;
  if ( v88[0].NumMemoryAllocations )
  {
    v54 = *((_QWORD *)v14 + 16);
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, ULONG *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VirtualGpuDevice
                                                                                          + 2)
                                                                                        + 528LL)
                                                                            + 8LL)
                                                                + 216LL))(
        *(_QWORD *)(*((_QWORD *)this + 4) + 536LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 8 * v55) + 48LL) + 8LL),
        &v73,
        &v77);
      v54 = *((_QWORD *)v14 + 16);
      v56 = (unsigned int)v55;
      v88[0].MemoryInfo[v56].DriverAllocationHandle = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v54 + 8 * v55) + 48LL) + 16LL);
      v88[0].MemoryInfo[v56].AllocationAddress.MemorySegmentId = v73;
      v88[0].MemoryInfo[v56].AllocationAddress.MemorySegmentOffset = v77;
      v57 = 3 * (v55 + 3);
      v55 = (unsigned int)(v55 + 1);
      v88[0].MemoryInfo[v56].AllocationSize = *((_QWORD *)&a2->PartitionId + 2 * v57);
    }
    while ( (unsigned int)v55 < a2->NumMemorySegments );
  }
  v58 = ADAPTER_RENDER::DdiSetVirtualGpuResources(*((ADAPTER_RENDER **)this + 4), v88, v54);
  v7 = (struct DXGPROCESS *)v58;
  if ( v58 < 0 )
  {
    v62 = WdLogNewEntry5_WdWarning(v60, v59, v61);
    *(_QWORD *)(v62 + 32) = 359LL;
LABEL_55:
    *(_QWORD *)(v62 + 24) = v7;
    WdLogEvent5_WdWarning(v62);
    goto LABEL_56;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v80);
  COREACCESS::~COREACCESS((COREACCESS *)v79);
  if ( v69 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v72);
  DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v12);
  v64 = (char *)this + 40;
  v65 = (_QWORD *)((char *)v14 + 88);
  v66 = *(_QWORD *)v64;
  if ( *(char **)(*(_QWORD *)v64 + 8LL) != v64 )
    __fastfail(3u);
  *v65 = v66;
  v65[1] = v64;
  *(_QWORD *)(v66 + 8) = v65;
  result = 0LL;
  *(_QWORD *)v64 = v65;
  return result;
}
