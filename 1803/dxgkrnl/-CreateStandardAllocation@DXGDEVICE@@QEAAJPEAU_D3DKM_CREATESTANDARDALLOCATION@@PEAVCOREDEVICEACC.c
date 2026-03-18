/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00C0868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00D3910 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00D4A50 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0179770 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0006B74 (-VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C244 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00A5E90 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??1?$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ @ 0x1C00D7120 (--1-$PagedPoolZeroedArray@U_D3DDDI_ALLOCATIONINFO2@@$03@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F4C90 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     GetPixelSizeInBytes @ 0x1C016B0DC (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r15
  __int64 v6; // rcx
  UINT v7; // r12d
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rdi
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v11; // rdi
  __int64 v12; // r8
  int StandardAllocationDriverData; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v19; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ADAPTER_RENDER *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r15
  unsigned int v29; // ecx
  int v30; // edx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  UINT v35; // edi
  D3DDDI_ALLOCATIONINFO *v36; // rbx
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v38; // rax
  __int64 v39; // r8
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rcx
  D3DKMT_HANDLE hResource; // edi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 AllocationSection; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v48; // rbx
  int v50; // ecx
  _QWORD *v51; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _QWORD *v56; // rax
  __int64 v57; // rdi
  int PixelSizeInBytes; // eax
  int v59; // edx
  _QWORD *v60; // rax
  struct _EX_RUNDOWN_REF *v61; // rdx
  __int64 v62; // rax
  UINT v63; // ecx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v73; // rax
  unsigned __int64 v74; // rcx
  unsigned int v75; // edx
  __int64 v76; // r11
  unsigned int v77; // r9d
  int v78; // r8d
  int v79; // r10d
  struct DXGRESOURCE *v80; // rbx
  __int64 v81; // rax
  char v82; // [rsp+80h] [rbp-80h]
  UINT v83; // [rsp+84h] [rbp-7Ch]
  UINT v84; // [rsp+84h] [rbp-7Ch]
  unsigned int v85; // [rsp+84h] [rbp-7Ch]
  char v86; // [rsp+88h] [rbp-78h]
  UINT *v87; // [rsp+90h] [rbp-70h]
  D3DDDI_ALLOCATIONINFO *v88; // [rsp+90h] [rbp-70h]
  unsigned int v89; // [rsp+98h] [rbp-68h]
  struct COREDEVICEACCESS *v91; // [rsp+A0h] [rbp-60h]
  D3DKMT_CREATESTANDARDALLOCATION *v92; // [rsp+A8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v93; // [rsp+B0h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+B8h] [rbp-48h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v95; // [rsp+C0h] [rbp-40h] BYREF
  struct _D3DKMT_CREATEALLOCATION v96; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v97; // [rsp+140h] [rbp+40h]
  __int64 v98; // [rsp+148h] [rbp+48h]
  _BYTE v99[32]; // [rsp+150h] [rbp+50h] BYREF
  D3DDDI_ALLOCATIONINFO *v100; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v101[384]; // [rsp+178h] [rbp+78h] BYREF
  UINT v102; // [rsp+2F8h] [rbp+1F8h]

  v3 = 0LL;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v95, 0, sizeof(v95));
  memset(&v96, 0, sizeof(v96));
  v6 = *((_QWORD *)this + 2);
  v7 = 1;
  v8 = 0LL;
  v92 = 0LL;
  v82 = 0;
  v94 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  v89 = 0;
  if ( *((_DWORD *)a2 + 4) != 1 )
  {
LABEL_4:
    if ( !DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v6 + 16)) )
      goto LABEL_5;
    if ( *((_DWORD *)a2 + 4) != 4 )
      goto LABEL_5;
    v50 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v50 - 1) & 0xFFFFFFFC) != 0 || v50 == 2 )
      goto LABEL_5;
    goto LABEL_58;
  }
  if ( !*(_BYTE *)(v9 + 2379) && !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v9) )
  {
    v6 = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
LABEL_58:
  if ( *(int *)(v9 + 2104) >= 0x2000 )
    v7 = *(_DWORD *)(v9 + 248);
LABEL_5:
  v100 = 0LL;
  PoolWithTag = 0LL;
  v102 = 0;
  if ( v7 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x60 )
      goto LABEL_9;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v7, 0x4B677844u);
    v100 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v101;
    v100 = (D3DDDI_ALLOCATIONINFO *)v101;
  }
  v102 = v7;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v7);
    PoolWithTag = v100;
  }
LABEL_9:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v86 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 185LL);
  memset(&v95, 0, sizeof(v95));
  v95.StandardAllocationType = *((_DWORD *)a2 + 4);
  v95.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v95, v12);
  v16 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v14);
LABEL_70:
    v51[4] = v16;
    v51[3] = this;
    WdLogEvent5_WdError(v51);
    goto LABEL_51;
  }
  AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
  if ( !v95.AllocationPrivateDriverDataSize && !v95.ResourcePrivateDriverDataSize )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
LABEL_69:
    v16 = -1073741811LL;
    goto LABEL_70;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v95.ResourcePrivateDriverDataSize )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
      v51[5] = 1LL;
      goto LABEL_69;
    }
    if ( *((_DWORD *)a2 + 92) != v95.AllocationPrivateDriverDataSize )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v95.ResourcePrivateDriverDataSize);
      v51[5] = 2LL;
      goto LABEL_69;
    }
  }
  if ( !v95.ResourcePrivateDriverDataSize )
  {
LABEL_13:
    v19 = 0;
    v83 = 0;
    if ( v7 )
    {
      p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
      v87 = &PoolWithTag->PrivateDriverDataSize;
      while ( 1 )
      {
        if ( AllocationPrivateDriverDataSize )
        {
          v21 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
          v3 = v21;
          if ( !v21 )
          {
            v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
            LODWORD(v28) = -1073741801;
            v64[3] = this;
            v64[4] = v95.AllocationPrivateDriverDataSize;
            v64[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v64);
            goto LABEL_47;
          }
          memset(v21, 0, v95.AllocationPrivateDriverDataSize);
          ++v89;
          v19 = v83;
        }
        *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
        *p_PrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
        v95.pResourcePrivateDriverData = v92;
        v95.pAllocationPrivateDriverData = v3;
        if ( v7 <= 1 )
          v19 = *((_DWORD *)a2 + 93);
        v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v95.PhysicalAdapterIndex = v19;
        v26 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v25, &v95, v15);
        v28 = v26;
        if ( v26 < 0 )
          break;
        v3 = 0LL;
        if ( (*(_DWORD *)a2 & 0x60) != 0 )
        {
          v57 = *((_QWORD *)a2 + 3);
          v93 = (struct _EX_RUNDOWN_REF *)v57;
          v27 = *(unsigned int *)(v57 + 8);
          if ( (_DWORD)v27 )
          {
            PixelSizeInBytes = GetPixelSizeInBytes();
            v27 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 300LL);
            if ( (v27 & 8) == 0 )
            {
              if ( PixelSizeInBytes )
              {
                v59 = *(_DWORD *)(v57 + 20);
                if ( v59 )
                {
                  v27 = (PixelSizeInBytes * *(_DWORD *)v57 + 127) & 0xFFFFFF80;
                  if ( v59 != (_DWORD)v27 )
                  {
                    LODWORD(v28) = -1073741811;
                    v60 = (_QWORD *)WdLogNewEntry5_WdError(v27);
                    v61 = v93;
                    v60[3] = this;
                    v60[4] = HIDWORD(v61[2].Ptr);
                    v60[5] = LODWORD(v61->Count);
                    v60[6] = -1073741811LL;
                    WdLogEvent5_WdError(v60);
                    goto LABEL_47;
                  }
                }
              }
            }
          }
          p_PrivateDriverDataSize = v87;
        }
        if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v27);
          *(_QWORD *)(v62 + 24) = 7003LL;
          WdLogEvent5_WdAssertion(v62);
        }
        if ( *((_DWORD *)a2 + 4) == 1 )
        {
          v63 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
          p_PrivateDriverDataSize[2] |= 1u;
          p_PrivateDriverDataSize[1] = v63;
        }
        p_PrivateDriverDataSize += 24;
        v19 = v83 + 1;
        v87 = p_PrivateDriverDataSize;
        v83 = v19;
        if ( v19 >= v7 )
        {
          ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
          goto LABEL_28;
        }
        AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
      }
      v65 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27);
      v65[5] = 0LL;
      v65[3] = this;
      v65[4] = v28;
      WdLogEvent5_WdAssertion(v65);
    }
    else
    {
LABEL_28:
      v96.hDevice = *((_DWORD *)a2 + 1);
      v96.pStandardAllocation = v92;
      v96.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
      v96.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
      v96.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
      v29 = *(_DWORD *)a2;
      v30 = *(_DWORD *)a2 & 0x60;
      *(_QWORD *)&v96.hResource = 0LL;
      v96.NumAllocations = v7;
      v96.pAllocationInfo = PoolWithTag;
      v96.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v96.Flags & 0xFFFFA094 | (v29 >> 4) & 0x440 | (*((_BYTE *)a2 + 400) == 0) | (2 * (v29 & 1 | (2 * (v29 & 2 | (2 * (v29 & 4 | v29 & 0x800 | (4 * (v29 & 0x18 | (2 * v30))))))))));
      v31 = DXGDEVICE::CreateAllocation(
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
              0LL,
              0LL,
              0);
      v28 = v31;
      if ( v31 >= 0 )
      {
        v35 = 0;
        v82 = 1;
        v84 = 0;
        if ( v7 )
        {
          v36 = PoolWithTag;
          v88 = PoolWithTag;
          v91 = (struct _D3DKM_CREATESTANDARDALLOCATION *)((char *)a2 + 52);
          while ( 1 )
          {
            hAllocation = v36->hAllocation;
            v97 = *((_QWORD *)this + 5);
            v98 = v97 + 208;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v97 + 208));
            v38 = (hAllocation >> 6) & 0xFFFFFF;
            if ( (unsigned int)v38 < *(_DWORD *)(v97 + 248)
              && (v39 = *(_QWORD *)(v97 + 232),
                  v40 = *(_DWORD *)(v39 + 16 * v38 + 8),
                  ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v39 + 16 * v38 + 8) & 0x60))
              && (v40 & 0x2000) == 0
              && (v40 & 0x1F) == 5 )
            {
              v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * (unsigned int)v38);
            }
            else
            {
              v41 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93, v41);
            ExReleasePushLockSharedEx(v98, 0LL);
            KeLeaveCriticalRegion();
            DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v94, (struct DXGALLOCATION **)&v93);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v93);
            v8 = v94;
            if ( !v94 )
              break;
            *(_DWORD *)v91 = v88->hAllocation;
            if ( !v86
              && !VIDMM_EXPORT::VidMmIsAllocationCPUVisible(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                    *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v8[6].Count + 8)) )
            {
              v32 = *((unsigned int *)a2 + 4);
              if ( ((_DWORD)v32 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && (_DWORD)v32 != 5 )
              {
                v66 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( (*(_DWORD *)(v66 + 1836) & 0x200) == 0 || (_DWORD)v32 != 1 )
                {
                  LODWORD(v28) = -1073741811;
                  v67 = (_QWORD *)WdLogNewEntry5_WdError(v66);
                  v67[3] = this;
                  v67[4] = *((int *)a2 + 4);
                  v67[5] = -1073741811LL;
                  WdLogEvent5_WdError(v67);
                  goto LABEL_91;
                }
              }
            }
            v91 = (struct COREDEVICEACCESS *)((char *)v91 + 4);
            ++v35;
            v88 = (D3DDDI_ALLOCATIONINFO *)((char *)v88 + 96);
            v84 = v35;
            if ( v35 >= v7 )
              goto LABEL_42;
            v36 = v88;
          }
          LODWORD(v28) = -1073741811;
          v68 = (_QWORD *)WdLogNewEntry5_WdAssertion(v42);
          v68[3] = this;
          v68[4] = *(&PoolWithTag->hAllocation + 24 * v84);
          v68[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v68);
LABEL_91:
          hResource = v96.hResource;
          goto LABEL_96;
        }
LABEL_42:
        hResource = v96.hResource;
        *((_DWORD *)a2 + 3) = v96.hGlobalShare;
        v44 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 2) = hResource;
        v45 = (unsigned int)(*(_DWORD *)(v44 + 12) - 6);
        if ( (v45 & 0xFFFFFFFD) != 0 )
          AllocationSection = 0LL;
        else
          AllocationSection = VIDMM_EXPORT::VidMmGetAllocationSection(
                                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                                (struct _VIDMM_MULTI_ALLOC *)v8[3].Count);
        *((_QWORD *)a2 + 41) = AllocationSection;
        if ( (*(_DWORD *)a2 & 0x40) != 0 )
        {
          memmove(*((void **)a2 + 45), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 92));
          memmove(*((void **)a2 + 43), v95.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
        }
LABEL_46:
        if ( (int)v28 >= 0 || !v82 )
        {
LABEL_47:
          if ( v89 )
          {
            p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
            v48 = v89;
            do
            {
              operator delete[](*p_pPrivateDriverData);
              p_pPrivateDriverData += 12;
              --v48;
            }
            while ( v48 );
          }
          goto LABEL_50;
        }
LABEL_96:
        if ( !hResource )
        {
          v70 = WdLogNewEntry5_WdAssertion(v45);
          *(_QWORD *)(v70 + 24) = 7129LL;
          WdLogEvent5_WdAssertion(v70);
        }
        Current = DXGPROCESS::GetCurrent(v45, v32);
        if ( !Current )
        {
          v73 = WdLogNewEntry5_WdAssertion(v71);
          *(_QWORD *)(v73 + 24) = 7137LL;
          WdLogEvent5_WdAssertion(v73);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v99,
          (struct _KTHREAD **)Current);
        v75 = (hResource >> 6) & 0xFFFFFF;
        v85 = *((_DWORD *)Current + 62);
        if ( v75 < v85
          && (v76 = *((_QWORD *)Current + 29),
              v77 = *(_DWORD *)(v76 + 16LL * v75 + 8),
              v78 = (v77 >> 5) & 3,
              hResource >> 30 == v78)
          && (v77 & 0x2000) == 0
          && (v77 & 0x1F) != 0
          && (v74 = 2 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF),
              v79 = *(_DWORD *)(v76 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8),
              (v79 & 0x1F) == 4) )
        {
          v80 = *(struct DXGRESOURCE **)(v76 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF));
          if ( v80 )
          {
            if ( v75 < v85 && hResource >> 30 == v78 && (v77 & 0x2000) == 0 )
              *(_DWORD *)(v76 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) = v79 | 0x2000;
            goto LABEL_112;
          }
        }
        else
        {
          v80 = 0LL;
        }
        v81 = WdLogNewEntry5_WdAssertion(v74);
        *(_QWORD *)(v81 + 24) = 7143LL;
        WdLogEvent5_WdAssertion(v81);
LABEL_112:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v99);
        if ( v80 )
          DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v80, 0LL, DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_47;
      }
      v69 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
      v69[3] = this;
      v69[4] = v28;
      v69[5] = 1LL;
      WdLogEvent5_WdWarning(v69);
    }
    hResource = v96.hResource;
    goto LABEL_46;
  }
  v52 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new[](v95.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v92 = v52;
  if ( v52 )
  {
    memset(v52, 0, v95.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v95.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v95.AllocationPrivateDriverDataSize;
    goto LABEL_13;
  }
  v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53, v55);
  LODWORD(v28) = -1073741801;
  v56[3] = this;
  v56[4] = v95.ResourcePrivateDriverDataSize;
  v56[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v56);
LABEL_50:
  operator delete[](v92);
  LODWORD(v16) = v28;
LABEL_51:
  PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>::~PagedPoolZeroedArray<_D3DDDI_ALLOCATIONINFO2,4>((PVOID *)&v100);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v94);
  return (unsigned int)v16;
}
