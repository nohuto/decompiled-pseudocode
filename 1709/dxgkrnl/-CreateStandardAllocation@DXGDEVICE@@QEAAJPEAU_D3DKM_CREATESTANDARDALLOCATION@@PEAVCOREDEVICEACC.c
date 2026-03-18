/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00BAF80 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00EA91C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0FE4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018E930 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B6D94 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01CE448 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003730 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00037B4 (-VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C008374C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@@Z @ 0x1C0097830 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C00F38D8 (--1-$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ.c)
 *     GetPixelSizeInBytes @ 0x1C0182EC4 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r15
  __int64 v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  UINT v8; // r12d
  __int64 v9; // rcx
  int v10; // eax
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v12; // rdi
  __int64 v13; // r8
  int StandardAllocationDriverData; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v20; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  ADAPTER_RENDER *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  UINT v36; // edi
  D3DDDI_ALLOCATIONINFO *v37; // rbx
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // edx
  struct _EX_RUNDOWN_REF *v42; // rdx
  __int64 v43; // rcx
  int v44; // edx
  D3DKMT_HANDLE hResource; // edi
  __int64 v46; // rax
  __int64 v47; // rcx
  PVOID *p_pPrivateDriverData; // r13
  __int64 v49; // rbx
  UINT v51; // ecx
  int v52; // edx
  _QWORD *v53; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rdi
  int PixelSizeInBytes; // eax
  int v61; // edx
  _QWORD *v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v74; // rax
  __int64 v75; // rcx
  unsigned int v76; // r12d
  unsigned int v77; // edx
  __int64 v78; // r9
  unsigned int v79; // r10d
  int v80; // r8d
  struct DXGRESOURCE *v81; // rbx
  __int64 v82; // rax
  char v83; // [rsp+70h] [rbp-90h]
  char v84; // [rsp+71h] [rbp-8Fh]
  UINT v85; // [rsp+74h] [rbp-8Ch]
  UINT v86; // [rsp+74h] [rbp-8Ch]
  UINT *v87; // [rsp+78h] [rbp-88h]
  D3DDDI_ALLOCATIONINFO *v88; // [rsp+78h] [rbp-88h]
  unsigned int v89; // [rsp+80h] [rbp-80h]
  struct COREDEVICEACCESS *v91; // [rsp+88h] [rbp-78h]
  D3DKMT_CREATESTANDARDALLOCATION *P; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v93; // [rsp+98h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v95; // [rsp+A8h] [rbp-58h] BYREF
  struct _D3DKMT_CREATEALLOCATION v96; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v97; // [rsp+130h] [rbp+30h]
  __int64 v98; // [rsp+138h] [rbp+38h]
  _BYTE v99[32]; // [rsp+140h] [rbp+40h] BYREF
  D3DDDI_ALLOCATIONINFO *v100; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v101[384]; // [rsp+168h] [rbp+68h] BYREF
  UINT v102; // [rsp+2E8h] [rbp+1E8h]

  v3 = 0LL;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v95, 0, sizeof(v95));
  memset(&v96, 0, sizeof(v96));
  v6 = *((_QWORD *)this + 2);
  v7 = 0LL;
  P = 0LL;
  v83 = 0;
  v8 = 1;
  v94 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  v10 = *((_DWORD *)a2 + 4);
  v89 = 0;
  if ( v10 == 1 && (*(_BYTE *)(v9 + 2235) || *(_BYTE *)(v9 + 2234))
    || *(_BYTE *)(v9 + 2234)
    && v10 == 4
    && (v52 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL), ((v52 - 1) & 0xFFFFFFFC) == 0)
    && v52 != 2 )
  {
    if ( *(int *)(v9 + 1968) >= 0x2000 )
      v8 = *(_DWORD *)(v9 + 248);
  }
  v100 = 0LL;
  PoolWithTag = 0LL;
  v102 = 0;
  if ( v8 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x60 )
      goto LABEL_9;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v8, 0x4B677844u);
    v100 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v101;
    v100 = (D3DDDI_ALLOCATIONINFO *)v101;
  }
  v102 = v8;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v8);
    PoolWithTag = v100;
  }
LABEL_9:
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v84 = *(_BYTE *)(*((_QWORD *)v12 + 2) + 185LL);
  memset(&v95, 0, sizeof(v95));
  v95.StandardAllocationType = *((_DWORD *)a2 + 4);
  v95.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v95, v13);
  v17 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v15);
LABEL_76:
    v53[4] = v17;
    v53[3] = this;
    WdLogEvent5_WdError(v53);
    goto LABEL_56;
  }
  AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
  if ( !v95.AllocationPrivateDriverDataSize && !v95.ResourcePrivateDriverDataSize )
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
LABEL_75:
    v17 = -1073741811LL;
    goto LABEL_76;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v95.ResourcePrivateDriverDataSize )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
      v53[5] = 1LL;
      goto LABEL_75;
    }
    if ( *((_DWORD *)a2 + 92) != v95.AllocationPrivateDriverDataSize )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
      v53[5] = 2LL;
      goto LABEL_75;
    }
  }
  if ( !v95.ResourcePrivateDriverDataSize )
  {
LABEL_13:
    v20 = 0;
    v85 = 0;
    if ( v8 )
    {
      p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
      v87 = &PoolWithTag->PrivateDriverDataSize;
      while ( 1 )
      {
        if ( AllocationPrivateDriverDataSize )
        {
          v22 = operator new(AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
          v3 = v22;
          if ( !v22 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
            LODWORD(v29) = -1073741801;
            v65[3] = this;
            v65[4] = v95.AllocationPrivateDriverDataSize;
            v65[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v65);
            goto LABEL_48;
          }
          memset(v22, 0, v95.AllocationPrivateDriverDataSize);
          ++v89;
          v20 = v85;
        }
        *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
        *p_PrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
        v95.pResourcePrivateDriverData = P;
        v95.pAllocationPrivateDriverData = v3;
        if ( v8 <= 1 )
          v20 = *((_DWORD *)a2 + 93);
        v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v95.PhysicalAdapterIndex = v20;
        v27 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v26, &v95, v16);
        v29 = v27;
        if ( v27 < 0 )
          break;
        v3 = 0LL;
        if ( (*(_DWORD *)a2 & 0x60) != 0 )
        {
          v59 = *((_QWORD *)a2 + 3);
          v93 = (struct _EX_RUNDOWN_REF *)v59;
          v28 = *(unsigned int *)(v59 + 8);
          if ( (_DWORD)v28 )
          {
            PixelSizeInBytes = GetPixelSizeInBytes();
            v28 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 300LL);
            if ( (v28 & 8) == 0 )
            {
              if ( PixelSizeInBytes )
              {
                v61 = *(_DWORD *)(v59 + 20);
                if ( v61 )
                {
                  v28 = (PixelSizeInBytes * *(_DWORD *)v59 + 127) & 0xFFFFFF80;
                  if ( v61 != (_DWORD)v28 )
                  {
                    LODWORD(v29) = -1073741811;
                    v62 = (_QWORD *)WdLogNewEntry5_WdError(v28);
                    v63 = v93;
                    v62[3] = this;
                    v62[4] = HIDWORD(v63[2].Ptr);
                    v62[5] = LODWORD(v63->Count);
                    v62[6] = -1073741811LL;
                    WdLogEvent5_WdError(v62);
                    goto LABEL_48;
                  }
                }
              }
            }
          }
          p_PrivateDriverDataSize = v87;
        }
        if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
        {
          v64 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v64 + 24) = 6864LL;
          WdLogEvent5_WdAssertion(v64);
        }
        if ( *((_DWORD *)a2 + 4) == 1 )
        {
          v51 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
          p_PrivateDriverDataSize[2] |= 1u;
          p_PrivateDriverDataSize[1] = v51;
        }
        p_PrivateDriverDataSize += 24;
        v20 = v85 + 1;
        v87 = p_PrivateDriverDataSize;
        v85 = v20;
        if ( v20 >= v8 )
        {
          ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
          goto LABEL_28;
        }
        AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
      }
      v66 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28);
      v66[5] = 0LL;
      v66[3] = this;
      v66[4] = v29;
      WdLogEvent5_WdAssertion(v66);
    }
    else
    {
LABEL_28:
      v96.hDevice = *((_DWORD *)a2 + 1);
      v96.pStandardAllocation = P;
      v96.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
      v96.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
      v96.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
      v30 = *(_DWORD *)a2;
      v31 = *(_DWORD *)a2 & 0x60;
      *(_QWORD *)&v96.hResource = 0LL;
      v96.NumAllocations = v8;
      v96.pAllocationInfo = PoolWithTag;
      v96.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v96.Flags & 0xFFFFA094 | (v30 >> 4) & 0x440 | (*((_BYTE *)a2 + 400) == 0) | (2 * (v30 & 1 | (2 * (v30 & 2 | (2 * (v30 & 0x804 | (4 * (v30 & 0x18 | (2 * v31))))))))));
      v32 = DXGDEVICE::CreateAllocation(
              this,
              &v96,
              0LL,
              0,
              0LL,
              a2,
              (struct COREDEVICEACCESS *)a3,
              0,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL);
      v29 = v32;
      if ( v32 >= 0 )
      {
        v36 = 0;
        v83 = 1;
        v86 = 0;
        if ( v8 )
        {
          v37 = PoolWithTag;
          v88 = PoolWithTag;
          v91 = (struct _D3DKM_CREATESTANDARDALLOCATION *)((char *)a2 + 52);
          while ( 1 )
          {
            hAllocation = v37->hAllocation;
            v97 = *((_QWORD *)this + 5);
            v98 = v97 + 200;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v97 + 200));
            v39 = (hAllocation >> 6) & 0xFFFFFF;
            if ( (unsigned int)v39 < *(_DWORD *)(v97 + 240)
              && (v40 = *(_QWORD *)(v97 + 224),
                  v41 = *(_DWORD *)(v40 + 16 * v39 + 8),
                  ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60))
              && (v41 & 0x2000) == 0
              && (v41 & 0x1F) != 0
              && (*(_BYTE *)(v40 + 16LL * (unsigned int)v39 + 8) & 0x1F) == 5 )
            {
              v42 = *(struct _EX_RUNDOWN_REF **)(v40 + 16LL * (unsigned int)v39);
            }
            else
            {
              v42 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, v42);
            ExReleasePushLockSharedEx(v98, 0LL);
            KeLeaveCriticalRegion();
            DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v94, (struct DXGALLOCATION **)&v93);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93);
            v7 = v94;
            if ( !v94 )
              break;
            *(_DWORD *)v91 = v88->hAllocation;
            if ( !v84
              && !VIDMM_EXPORT::VidMmIsAllocationCPUVisible(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                    *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v7[6].Count + 8)) )
            {
              v44 = *((_DWORD *)a2 + 4);
              if ( (v44 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && v44 != 5 )
              {
                v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( (*(_DWORD *)(v67 + 1700) & 0x200) == 0 || v44 != 1 )
                {
                  LODWORD(v29) = -1073741811;
                  v68 = (_QWORD *)WdLogNewEntry5_WdError(v67);
                  v68[3] = this;
                  v68[4] = *((int *)a2 + 4);
                  v68[5] = -1073741811LL;
                  WdLogEvent5_WdError(v68);
                  goto LABEL_97;
                }
              }
            }
            v91 = (struct COREDEVICEACCESS *)((char *)v91 + 4);
            ++v36;
            v88 = (D3DDDI_ALLOCATIONINFO *)((char *)v88 + 96);
            v86 = v36;
            if ( v36 >= v8 )
              goto LABEL_43;
            v37 = v88;
          }
          LODWORD(v29) = -1073741811;
          v69 = (_QWORD *)WdLogNewEntry5_WdAssertion(v43);
          v69[3] = this;
          v69[4] = *(&PoolWithTag->hAllocation + 24 * v86);
          v69[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v69);
LABEL_97:
          hResource = v96.hResource;
          goto LABEL_101;
        }
LABEL_43:
        hResource = v96.hResource;
        *((_DWORD *)a2 + 3) = v96.hGlobalShare;
        v46 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 2) = hResource;
        v47 = (unsigned int)(*(_DWORD *)(v46 + 12) - 6);
        if ( (v47 & 0xFFFFFFFD) != 0 )
          *((_QWORD *)a2 + 41) = 0LL;
        else
          *((_QWORD *)a2 + 41) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                   *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
                                   *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
                                   (struct _VIDMM_MULTI_ALLOC *)v7[3].Count);
        if ( (*(_DWORD *)a2 & 0x40) != 0 )
        {
          memmove(*((void **)a2 + 45), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 92));
          memmove(*((void **)a2 + 43), v95.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
        }
LABEL_47:
        if ( (int)v29 >= 0 || !v83 )
        {
LABEL_48:
          if ( v89 )
          {
            p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
            v49 = v89;
            do
            {
              if ( *p_pPrivateDriverData )
                ExFreePoolWithTag(*p_pPrivateDriverData, 0);
              p_pPrivateDriverData += 12;
              --v49;
            }
            while ( v49 );
          }
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_55;
        }
LABEL_101:
        if ( !hResource )
        {
          v71 = WdLogNewEntry5_WdAssertion(v47);
          *(_QWORD *)(v71 + 24) = 6990LL;
          WdLogEvent5_WdAssertion(v71);
        }
        Current = DXGPROCESS::GetCurrent();
        if ( !Current )
        {
          v74 = WdLogNewEntry5_WdAssertion(v72);
          *(_QWORD *)(v74 + 24) = 6998LL;
          WdLogEvent5_WdAssertion(v74);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v99, Current);
        v76 = *((_DWORD *)Current + 60);
        v77 = (hResource >> 6) & 0xFFFFFF;
        if ( v77 < v76
          && (v78 = *((_QWORD *)Current + 28),
              v79 = *(_DWORD *)(v78 + 16LL * v77 + 8),
              v80 = (v79 >> 5) & 3,
              hResource >> 30 == v80)
          && (v79 & 0x2000) == 0
          && (v79 & 0x1F) != 0
          && (v75 = 2LL * ((hResource >> 6) & 0xFFFFFF),
              (*(_BYTE *)(v78 + 16LL * ((hResource >> 6) & 0xFFFFFF) + 8) & 0x1F) == 4) )
        {
          v81 = *(struct DXGRESOURCE **)(v78 + 16LL * ((hResource >> 6) & 0xFFFFFF));
          if ( v81 )
          {
            if ( v77 < v76 && hResource >> 30 == v80 && (v79 & 0x2000) == 0 )
              *(_DWORD *)(v78 + 16LL * ((hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            goto LABEL_117;
          }
        }
        else
        {
          v81 = 0LL;
        }
        v82 = WdLogNewEntry5_WdAssertion(v75);
        *(_QWORD *)(v82 + 24) = 7004LL;
        WdLogEvent5_WdAssertion(v82);
LABEL_117:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
        if ( v81 )
          DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v81, 0LL, DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_48;
      }
      v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      v70[3] = this;
      v70[4] = v29;
      v70[5] = 1LL;
      WdLogEvent5_WdWarning(v70);
    }
    hResource = v96.hResource;
    goto LABEL_47;
  }
  v54 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new(v95.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  P = v54;
  if ( v54 )
  {
    memset(v54, 0, v95.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
    goto LABEL_13;
  }
  v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
  LODWORD(v29) = -1073741801;
  v58[3] = this;
  v58[4] = v95.ResourcePrivateDriverDataSize;
  v58[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v58);
LABEL_55:
  LODWORD(v17) = v29;
LABEL_56:
  PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>(&v100);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
  return (unsigned int)v17;
}
