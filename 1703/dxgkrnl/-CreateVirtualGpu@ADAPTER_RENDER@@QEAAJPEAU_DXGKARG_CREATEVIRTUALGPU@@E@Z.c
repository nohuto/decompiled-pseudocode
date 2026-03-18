/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C00339F0 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z @ 0x1C0027268 (-DdiCreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@@Z.c)
 *     ?DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z @ 0x1C0029330 (-DdiSetVirtualGpuResources@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETVIRTUALGPURESOURCES@@@Z.c)
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@E@Z @ 0x1C002A29C (-GetGpuPartitionInfo@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETGPUPARTITIONINFO@@E@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(
        struct VIDMM_GLOBAL **this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG PartitionId; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGPROCESS *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  DXGADAPTER *v21; // r12
  struct VIDMM_GLOBAL ***v22; // rbx
  __int64 v23; // r13
  NTSTATUS LocallyUniqueId; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  char *v28; // r15
  char *v29; // r14
  struct DXGDEVICE **v30; // rbx
  int Device; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int VirtualGpu; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  DXGDEVICE **v54; // rbx
  __int64 NumMemorySegments; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  void *v58; // rax
  void *v59; // rcx
  __int64 v60; // rax
  ULONG v61; // eax
  ULONG v62; // eax
  __int64 v63; // r8
  ULONG v64; // r12d
  __int64 v65; // rbx
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  DXGDEVICE *v73; // r9
  int StandardAllocation; // eax
  struct DXGPROCESS *v75; // rbx
  unsigned int v76; // ecx
  __int64 v77; // rbx
  int v78; // r8d
  __int64 v79; // rbx
  __int64 v80; // r8
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  struct _DXGKARG_DESTROYVIRTUALGPU v85[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v86[8]; // [rsp+48h] [rbp-B8h] BYREF
  DXGADAPTER *v87; // [rsp+50h] [rbp-B0h]
  char v88; // [rsp+58h] [rbp-A8h]
  _BYTE v89[16]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v90; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_DESTROYVIRTUALGPU v91; // [rsp+74h] [rbp-8Ch] BYREF
  struct DXGPROCESS *Current; // [rsp+78h] [rbp-88h] BYREF
  char *v93; // [rsp+80h] [rbp-80h]
  UINT64 v94; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v95; // [rsp+90h] [rbp-70h]
  _DXGKARG_GETGPUPARTITIONINFO v96; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v97[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v98[32]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v99[56]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v100[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v101[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v102[40]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v103[52]; // [rsp+160h] [rbp+60h] BYREF
  UINT64 Size; // [rsp+300h] [rbp+200h] BYREF
  __int64 v105; // [rsp+308h] [rbp+208h]
  __int64 v106; // [rsp+310h] [rbp+210h]
  _DXGKARG_SETVIRTUALGPURESOURCES v107[26]; // [rsp+320h] [rbp+220h] BYREF
  char v108; // [rsp+730h] [rbp+630h] BYREF

  result = ADAPTER_RENDER::EnsureVirtualGpuProcess((ADAPTER_RENDER *)this);
  if ( (int)result >= 0 )
  {
    PartitionId = a2->PartitionId;
    if ( a2->PartitionId >= *((_DWORD *)this + 282) )
    {
      *(&v96.NumGpuPartitionOptions + 1) = 0;
      *(_QWORD *)&v96.CurrentGpuPartitionCount = 0LL;
      v96.NumGpuPartitionOptions = 16;
      v96.pGpuPartitionOptions = (USHORT *)&v108;
      ADAPTER_RENDER::GetGpuPartitionInfo((ADAPTER_RENDER *)this, &v96, a3);
      PartitionId = a2->PartitionId;
      if ( a2->PartitionId >= *((_DWORD *)this + 282) )
      {
        v12 = WdLogNewEntry5_WdWarning(v11, v7, v8, v9);
        *(_QWORD *)(v12 + 24) = a2->PartitionId;
        *(_QWORD *)(v12 + 32) = *((unsigned int *)this + 282);
        WdLogEvent5_WdWarning(v12);
        return 3221225485LL;
      }
    }
    if ( *((_QWORD *)this[142] + PartitionId) )
    {
      v13 = WdLogNewEntry5_WdWarning(PartitionId, v7, v8, v9);
      *(_QWORD *)(v13 + 24) = a2->PartitionId;
      WdLogEvent5_WdWarning(v13);
      v85[0] = (struct _DXGKARG_DESTROYVIRTUALGPU)a2->PartitionId;
      ADAPTER_RENDER::DestroyVirtualGpu((ADAPTER_RENDER *)this, v85);
    }
    Current = DXGPROCESS::GetCurrent();
    v14 = Current;
    if ( !Current )
    {
      LODWORD(v17) = DXGPROCESS::CreateDxgProcess(&Current, 0, 0LL);
      if ( (int)v17 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v16, v15, v18, v19);
        *(_QWORD *)(v20 + 24) = 1433LL;
        WdLogEvent5_WdWarning(v20);
        return (unsigned int)v17;
      }
      v14 = Current;
    }
    v21 = this[2];
    v95 = v21;
    v22 = (struct VIDMM_GLOBAL ***)operator new(0xA8uLL, 0x4B677844u, PagedPool);
    if ( v22 )
    {
      v22[7] = 0LL;
      v22[6] = 0LL;
      *((_DWORD *)v22 + 16) = -1;
      v22[16] = 0LL;
      *((_BYTE *)v22 + 136) = 0;
      memset(v22, 0, 0xA8uLL);
      *v22 = this;
      v22[1] = (struct VIDMM_GLOBAL **)this[2];
      v22[19] = (struct VIDMM_GLOBAL **)(v22 + 18);
      v22[18] = (struct VIDMM_GLOBAL **)(v22 + 18);
    }
    else
    {
      v22 = 0LL;
    }
    *((_QWORD *)this[142] + a2->PartitionId) = v22;
    v23 = *((_QWORD *)this[142] + a2->PartitionId);
    if ( !v23 )
      return 3221225495LL;
    *(_BYTE *)(v23 + 121) = a3;
    ++*((_DWORD *)this + 283);
    if ( a3 )
    {
      *(_DWORD *)(v23 + 16) = a2->PartitionId;
      *(_OWORD *)(v23 + 28) = DXGK_VRD_UMED_CLASID;
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v23 + 20));
      v17 = LocallyUniqueId;
      if ( LocallyUniqueId < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v27 + 24) = v17;
        WdLogEvent5_WdError(v27);
LABEL_54:
        v91.PartitionId = a2->PartitionId;
        ADAPTER_RENDER::DestroyVirtualGpu((ADAPTER_RENDER *)this, &v91);
        return (unsigned int)v17;
      }
      a2->VirtualGpuLuid = *(LUID *)(v23 + 20);
      return 0LL;
    }
    DXGADAPTER::ReleaseCoreResource(v21);
    v28 = (char *)v14 + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v28, 0LL);
    v29 = (char *)(this + 3);
    *((_QWORD *)v28 + 1) = KeGetCurrentThread();
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 3, 0LL);
    this[4] = KeGetCurrentThread();
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v100, v21, 0LL);
    LODWORD(v17) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v100);
    if ( (int)v17 < 0 )
      goto LABEL_24;
    v30 = this + 143;
    *(_QWORD *)&v85[0].PartitionId = this + 143;
    if ( !this[143] )
    {
      Device = ADAPTER_RENDER::CreateDevice(this, this + 143, 0LL, 1LL, 0LL, 0, 0, 0LL);
      v17 = Device;
      if ( Device < 0 )
      {
        v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
        *(_QWORD *)(v36 + 24) = a2->PartitionId;
        *(_QWORD *)(v36 + 32) = v17;
        WdLogEvent5_WdWarning(v36);
LABEL_24:
        COREACCESS::~COREACCESS((COREACCESS *)v102);
        COREACCESS::~COREACCESS((COREACCESS *)v101);
LABEL_25:
        this[4] = 0LL;
        ExReleasePushLockExclusiveEx(this + 3, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)v28 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::AcquireCoreResourceShared(v21);
        return (unsigned int)v17;
      }
      v30 = this + 143;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v102);
    COREACCESS::~COREACCESS((COREACCESS *)v101);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89,
      *v30);
    v87 = v21;
    v88 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v97, (__int64)*v30, 2LL, v37, 0);
    v38 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v97);
    v17 = v38;
    if ( v38 < 0 )
    {
      v43 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
      *(_QWORD *)(v43 + 24) = **(_QWORD **)&v85[0].PartitionId;
      *(_QWORD *)(v43 + 32) = v17;
      WdLogEvent5_WdWarning(v43);
      COREACCESS::~COREACCESS((COREACCESS *)v99);
      COREACCESS::~COREACCESS((COREACCESS *)v98);
      if ( v88 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
      goto LABEL_25;
    }
    VirtualGpu = ADAPTER_RENDER::DdiCreateVirtualGpu((ADAPTER_RENDER *)this, a2);
    v17 = VirtualGpu;
    if ( VirtualGpu >= 0 )
    {
      *(_BYTE *)(v23 + 120) = 1;
      *(_DWORD *)(v23 + 16) = a2->PartitionId;
      *(CLSID *)(v23 + 28) = a2->UserModeVirtualDeviceProvider;
      RtlCopyLuid((PLUID)(v23 + 20), &a2->VirtualGpuLuid);
      v54 = this + 143;
      *(_QWORD *)(v23 + 80) = this[143];
      NumMemorySegments = a2->NumMemorySegments;
      if ( (unsigned int)NumMemorySegments > 0x20 )
      {
        v56 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
        *(_QWORD *)(v56 + 24) = a2->NumMemorySegments;
        *(_QWORD *)(v56 + 32) = 1541LL;
        WdLogEvent5_WdWarning(v56);
        LODWORD(v17) = -1073741811;
        goto LABEL_35;
      }
      if ( (_DWORD)NumMemorySegments )
      {
        v57 = 8 * NumMemorySegments;
        if ( !is_mul_ok(a2->NumMemorySegments, 8uLL) )
          v57 = -1LL;
        v58 = operator new[](v57, 0x4B677844u, PagedPool);
        *(_QWORD *)(v23 + 112) = v58;
        v59 = v58;
        if ( !v58 )
        {
          v60 = WdLogNewEntry5_WdLowResource(0LL);
          *(_QWORD *)(v60 + 24) = 1550LL;
          WdLogEvent5_WdLowResource(v60);
          LODWORD(v17) = -1073741801;
          goto LABEL_35;
        }
        v61 = a2->NumMemorySegments;
        *(_DWORD *)(v23 + 72) = v61;
        memset(v59, 0, 8LL * v61);
      }
      v85[0].PartitionId = 0;
      if ( !a2->NumMemorySegments )
      {
LABEL_45:
        memset(v107, 0, 0x408uLL);
        v62 = a2->PartitionId;
        v85[0].PartitionId = 0;
        v107[0].PartitionId = v62;
        v107[0].NumMemoryAllocations = a2->NumMemorySegments;
        if ( v107[0].NumMemoryAllocations )
        {
          v63 = *(_QWORD *)(v23 + 112);
          v64 = v85[0].PartitionId;
          do
          {
            v65 = v64;
            (*(void (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, ULONG *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[143] + 2) + 432LL)
                                                                                                 + 8LL)
                                                                                     + 216LL))(
              this[55],
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 8LL * v64) + 48LL) + 8LL),
              &v90,
              &v94);
            v63 = *(_QWORD *)(v23 + 112);
            v66 = v64++;
            v66 *= 32LL;
            *(HANDLE *)((char *)&v107[0].MemoryInfo[0].DriverAllocationHandle + v66) = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(v63 + 8 * v65) + 48LL)
                                                                                                 + 16LL);
            *(ULONG *)((char *)&v107[0].MemoryInfo[0].AllocationAddress.MemorySegmentId + v66) = v90;
            *(UINT64 *)((char *)&v107[0].MemoryInfo[0].AllocationAddress.MemorySegmentOffset + v66) = v94;
            *(UINT64 *)((char *)&v107[0].MemoryInfo[0].AllocationSize + v66) = a2->SegmentInfo[v65].Size;
          }
          while ( v64 < a2->NumMemorySegments );
          v21 = v95;
          v29 = (char *)(this + 3);
        }
        v67 = ADAPTER_RENDER::DdiSetVirtualGpuResources((ADAPTER_RENDER *)this, v107);
        v17 = v67;
        if ( v67 >= 0 )
        {
          COREACCESS::~COREACCESS((COREACCESS *)v99);
          COREACCESS::~COREACCESS((COREACCESS *)v98);
          if ( v88 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
          *((_QWORD *)v29 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v29, 0LL);
          KeLeaveCriticalRegion();
          *((_QWORD *)v28 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v28, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER::AcquireCoreResourceShared(v21);
          return 0LL;
        }
        v72 = WdLogNewEntry5_WdWarning(v69, v68, v70, v71);
        *(_QWORD *)(v72 + 24) = v17;
        *(_QWORD *)(v72 + 32) = 1620LL;
        WdLogEvent5_WdWarning(v72);
        COREACCESS::~COREACCESS((COREACCESS *)v99);
        COREACCESS::~COREACCESS((COREACCESS *)v98);
LABEL_51:
        if ( v88 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v86);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v89);
        *((_QWORD *)v29 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v29, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)v28 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER::AcquireCoreResourceShared(v21);
        goto LABEL_54;
      }
      while ( 1 )
      {
        Size = 0LL;
        v105 = 0LL;
        v106 = 0LL;
        memset(v103, 0, 0x198uLL);
        v73 = *v54;
        LODWORD(v103[0]) |= 0x200u;
        LODWORD(v103[2]) = 5;
        HIDWORD(v103[0]) = *((_DWORD *)v73 + 83);
        v103[3] = &Size;
        Size = a2->SegmentInfo[v85[0].PartitionId].Size;
        LODWORD(v105) = a2->SegmentInfo[v85[0].PartitionId].Alignment;
        HIDWORD(v105) = a2->SegmentInfo[v85[0].PartitionId].DriverSegmentId;
        LODWORD(v106) = a2->SegmentInfo[v85[0].PartitionId].PrivateDriverData;
        StandardAllocation = DXGDEVICE::CreateStandardAllocation(
                               v73,
                               (struct _D3DKM_CREATESTANDARDALLOCATION *)v103,
                               0LL);
        v17 = StandardAllocation;
        if ( StandardAllocation < 0 )
          break;
        v75 = Current;
        v93 = (char *)Current + 168;
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
        v76 = (HIDWORD(v103[6]) >> 6) & 0xFFFFFF;
        if ( v76 < *((_DWORD *)v75 + 52)
          && (v77 = *((_QWORD *)v75 + 24),
              v78 = *(_DWORD *)(v77 + 16LL * v76 + 8),
              ((HIDWORD(v103[6]) >> 26) & 0x30) == (*(_BYTE *)(v77 + 16LL * v76 + 8) & 0x30))
          && (v78 & 0x1000) == 0
          && (v78 & 0xF) != 0
          && (*(_BYTE *)(v77 + 16LL * v76 + 8) & 0xF) == 5 )
        {
          v79 = *(_QWORD *)(v77 + 16LL * v76);
        }
        else
        {
          v79 = 0LL;
        }
        ExReleasePushLockSharedEx(v93, 0LL);
        KeLeaveCriticalRegion();
        v80 = v85[0].PartitionId;
        *(_QWORD *)(*(_QWORD *)(v23 + 112) + 8LL * v85[0].PartitionId) = v79;
        v81 = VIDMM_EXPORT::VidMmPinAllocation(
                *(VIDMM_EXPORT **)(*((_QWORD *)this[143] + 2) + 432LL),
                this[55],
                *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*(_QWORD *)(v23 + 112) + 8 * v80) + 24LL),
                0LL,
                0LL);
        v17 = v81;
        if ( v81 < 0 )
        {
          v84 = WdLogNewEntry5_WdError(v83, v82);
          *(_QWORD *)(v84 + 24) = v17;
          WdLogEvent5_WdError(v84);
          goto LABEL_35;
        }
        if ( ++v85[0].PartitionId >= a2->NumMemorySegments )
          goto LABEL_45;
        v54 = this + 143;
      }
    }
    v49 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
    *(_QWORD *)(v49 + 24) = v17;
    WdLogEvent5_WdWarning(v49);
LABEL_35:
    COREACCESS::~COREACCESS((COREACCESS *)v99);
    COREACCESS::~COREACCESS((COREACCESS *)v98);
    goto LABEL_51;
  }
  return result;
}
