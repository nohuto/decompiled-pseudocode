/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00FD820 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00FDB80 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0100160 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01A0068 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4C30 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DE88 (-VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002596C (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00CFEFC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     GetPixelSizeInBytes @ 0x1C017F578 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r15
  __int64 v6; // rax
  struct DXGALLOCATION *v7; // rbx
  UINT v8; // r12d
  __int64 v9; // rcx
  int v10; // eax
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v12; // rdi
  int StandardAllocationDriverData; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v19; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  ADAPTER_RENDER *v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r15
  unsigned int v33; // ecx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  UINT v40; // edi
  D3DDDI_ALLOCATIONINFO *v41; // rbx
  D3DKMT_HANDLE hAllocation; // ebx
  unsigned int v43; // ecx
  __int64 v44; // r8
  int v45; // edx
  struct DXGALLOCATION *v46; // rdx
  __int64 v47; // rcx
  D3DKMT_HANDLE hResource; // edi
  __int64 v49; // rax
  __int64 v50; // rcx
  PVOID *p_pPrivateDriverData; // r13
  __int64 v52; // rbx
  UINT v54; // ecx
  int v55; // edx
  _QWORD *v56; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  unsigned int *v63; // rdi
  int PixelSizeInBytes; // eax
  _QWORD *v65; // rax
  struct DXGALLOCATION *v66; // rdx
  __int64 v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  struct DXGRESOURCE *v85; // rbx
  unsigned int v86; // ecx
  __int64 v87; // rax
  char v88; // [rsp+60h] [rbp-A0h]
  char v89; // [rsp+61h] [rbp-9Fh]
  UINT v90; // [rsp+64h] [rbp-9Ch]
  UINT v91; // [rsp+64h] [rbp-9Ch]
  UINT *v92; // [rsp+68h] [rbp-98h]
  D3DDDI_ALLOCATIONINFO *v93; // [rsp+68h] [rbp-98h]
  unsigned int v94; // [rsp+70h] [rbp-90h]
  struct COREDEVICEACCESS *v96; // [rsp+78h] [rbp-88h]
  D3DKMT_CREATESTANDARDALLOCATION *P; // [rsp+80h] [rbp-80h]
  struct DXGALLOCATION *v98; // [rsp+88h] [rbp-78h] BYREF
  struct DXGALLOCATION *v99; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v100; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMT_CREATEALLOCATION v101; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v102; // [rsp+120h] [rbp+20h]
  __int64 v103; // [rsp+128h] [rbp+28h]
  _BYTE v104[32]; // [rsp+130h] [rbp+30h] BYREF
  PVOID v105; // [rsp+150h] [rbp+50h]
  _BYTE v106[384]; // [rsp+158h] [rbp+58h] BYREF
  UINT v107; // [rsp+2D8h] [rbp+1D8h]

  v3 = 0LL;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v100, 0, sizeof(v100));
  memset(&v101, 0, sizeof(v101));
  v6 = *((_QWORD *)this + 2);
  v7 = 0LL;
  P = 0LL;
  v88 = 0;
  v8 = 1;
  v99 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  v10 = *((_DWORD *)a2 + 4);
  v94 = 0;
  if ( v10 == 1 && (*(_BYTE *)(v9 + 2211) || *(_BYTE *)(v9 + 2210))
    || *(_BYTE *)(v9 + 2210)
    && v10 == 4
    && (v55 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL), ((v55 - 1) & 0xFFFFFFFC) == 0)
    && v55 != 2 )
  {
    if ( *(int *)(v9 + 1944) >= 0x2000 )
      v8 = *(_DWORD *)(v9 + 248);
  }
  v105 = 0LL;
  PoolWithTag = 0LL;
  v107 = 0;
  if ( v8 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x60 )
      goto LABEL_9;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v8, 0x4B677844u);
    v105 = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v106;
    v105 = v106;
  }
  v107 = v8;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v8);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v105;
  }
LABEL_9:
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v89 = *(_BYTE *)(*((_QWORD *)v12 + 2) + 186LL);
  memset(&v100, 0, sizeof(v100));
  v100.StandardAllocationType = *((_DWORD *)a2 + 4);
  v100.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v12, &v100);
  v16 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
LABEL_76:
    v56[4] = v16;
    v56[3] = this;
    WdLogEvent5_WdError(v56);
    goto LABEL_56;
  }
  AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
  if ( !v100.AllocationPrivateDriverDataSize && !v100.ResourcePrivateDriverDataSize )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
LABEL_75:
    v16 = -1073741811LL;
    goto LABEL_76;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 88) != v100.ResourcePrivateDriverDataSize )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
      v56[5] = 1LL;
      goto LABEL_75;
    }
    if ( *((_DWORD *)a2 + 92) != v100.AllocationPrivateDriverDataSize )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v100.ResourcePrivateDriverDataSize, v100.AllocationPrivateDriverDataSize);
      v56[5] = 2LL;
      goto LABEL_75;
    }
  }
  if ( !v100.ResourcePrivateDriverDataSize )
  {
LABEL_13:
    v19 = 0;
    v90 = 0;
    if ( v8 )
    {
      p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
      v92 = &PoolWithTag->PrivateDriverDataSize;
      while ( 1 )
      {
        if ( AllocationPrivateDriverDataSize )
        {
          v21 = operator new(AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
          v3 = v21;
          if ( !v21 )
          {
            v68 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
            LODWORD(v32) = -1073741801;
            v68[3] = this;
            v68[4] = v100.AllocationPrivateDriverDataSize;
            v68[5] = -1073741801LL;
            WdLogEvent5_WdWarning(v68);
            goto LABEL_48;
          }
          memset(v21, 0, v100.AllocationPrivateDriverDataSize);
          ++v94;
          v19 = v90;
        }
        *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
        *p_PrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
        v100.pResourcePrivateDriverData = P;
        v100.pAllocationPrivateDriverData = v3;
        if ( v8 <= 1 )
          v19 = *((_DWORD *)a2 + 93);
        v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v100.PhysicalAdapterIndex = v19;
        v27 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v26, &v100);
        v32 = v27;
        if ( v27 < 0 )
          break;
        v3 = 0LL;
        if ( (*(_DWORD *)a2 & 0x60) != 0 )
        {
          v63 = (unsigned int *)*((_QWORD *)a2 + 3);
          v98 = (struct DXGALLOCATION *)v63;
          v29 = v63[2];
          if ( (_DWORD)v29 )
          {
            PixelSizeInBytes = GetPixelSizeInBytes();
            v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            v29 = *(unsigned int *)(v28 + 300);
            if ( (v29 & 8) == 0 )
            {
              if ( PixelSizeInBytes )
              {
                v28 = v63[5];
                if ( (_DWORD)v28 )
                {
                  v29 = (PixelSizeInBytes * *v63 + 127) & 0xFFFFFF80;
                  if ( (_DWORD)v28 != (_DWORD)v29 )
                  {
                    LODWORD(v32) = -1073741811;
                    v65 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
                    v66 = v98;
                    v65[3] = this;
                    v65[4] = *((unsigned int *)v66 + 5);
                    v65[5] = *(unsigned int *)v66;
                    v65[6] = -1073741811LL;
                    WdLogEvent5_WdError(v65);
                    goto LABEL_48;
                  }
                }
              }
            }
          }
          p_PrivateDriverDataSize = v92;
        }
        if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
        {
          v67 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
          *(_QWORD *)(v67 + 24) = 6247LL;
          WdLogEvent5_WdAssertion(v67);
        }
        if ( *((_DWORD *)a2 + 4) == 1 )
        {
          v54 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
          p_PrivateDriverDataSize[2] |= 1u;
          p_PrivateDriverDataSize[1] = v54;
        }
        p_PrivateDriverDataSize += 24;
        v19 = v90 + 1;
        v92 = p_PrivateDriverDataSize;
        v90 = v19;
        if ( v19 >= v8 )
        {
          ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
          goto LABEL_28;
        }
        AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
      }
      v69 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
      v69[5] = 0LL;
      v69[3] = this;
      v69[4] = v32;
      WdLogEvent5_WdAssertion(v69);
    }
    else
    {
LABEL_28:
      v101.hDevice = *((_DWORD *)a2 + 1);
      v101.pStandardAllocation = P;
      v101.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
      v101.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
      v101.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
      v33 = *(_DWORD *)a2;
      v34 = *(_DWORD *)a2 & 0x60;
      *(_QWORD *)&v101.hResource = 0LL;
      v101.NumAllocations = v8;
      v101.pAllocationInfo = PoolWithTag;
      v101.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v101.Flags & 0xFFFFA094 | (v33 >> 4) & 0x440 | (*((_BYTE *)a2 + 400) == 0) | (2 * (v33 & 1 | (2 * (v33 & 2 | (2 * (v33 & 0x804 | (4 * (v33 & 0x18 | (2 * v34))))))))));
      v35 = DXGDEVICE::CreateAllocation(
              this,
              &v101,
              0LL,
              0LL,
              0LL,
              a2,
              (struct COREDEVICEACCESS *)a3,
              0,
              0LL,
              0LL,
              0LL,
              0LL);
      v32 = v35;
      if ( v35 >= 0 )
      {
        v40 = 0;
        v88 = 1;
        v91 = 0;
        if ( v8 )
        {
          v41 = PoolWithTag;
          v93 = PoolWithTag;
          v96 = (struct _D3DKM_CREATESTANDARDALLOCATION *)((char *)a2 + 52);
          while ( 1 )
          {
            hAllocation = v41->hAllocation;
            v102 = *((_QWORD *)this + 5);
            v103 = v102 + 168;
            DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v102 + 168));
            v43 = (hAllocation >> 6) & 0xFFFFFF;
            if ( v43 < *(_DWORD *)(v102 + 208)
              && (v44 = *(_QWORD *)(v102 + 192),
                  v45 = *(_DWORD *)(v44 + 16LL * v43 + 8),
                  ((hAllocation >> 26) & 0x30) == (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0x30))
              && (v45 & 0x1000) == 0
              && (v45 & 0xF) != 0
              && (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0xF) == 5 )
            {
              v46 = *(struct DXGALLOCATION **)(v44 + 16LL * v43);
            }
            else
            {
              v46 = 0LL;
            }
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98, v46);
            ExReleasePushLockSharedEx(v103, 0LL);
            KeLeaveCriticalRegion();
            DXGALLOCATIONREFERENCE::MoveAssign(&v99, &v98);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v98);
            v7 = v99;
            if ( !v99 )
              break;
            *(_DWORD *)v96 = v93->hAllocation;
            if ( !v89
              && !VIDMM_EXPORT::VidMmIsAllocationCPUVisible(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                    *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v7 + 6) + 8LL)) )
            {
              v36 = *((unsigned int *)a2 + 4);
              if ( ((_DWORD)v36 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && (_DWORD)v36 != 5 )
              {
                v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                if ( (*(_DWORD *)(v70 + 1676) & 0x200) == 0 || (_DWORD)v36 != 1 )
                {
                  LODWORD(v32) = -1073741811;
                  v71 = (_QWORD *)WdLogNewEntry5_WdError(v70, v36);
                  v71[3] = this;
                  v71[4] = *((int *)a2 + 4);
                  v71[5] = -1073741811LL;
                  WdLogEvent5_WdError(v71);
                  goto LABEL_97;
                }
              }
            }
            v96 = (struct COREDEVICEACCESS *)((char *)v96 + 4);
            ++v40;
            v93 = (D3DDDI_ALLOCATIONINFO *)((char *)v93 + 96);
            v91 = v40;
            if ( v40 >= v8 )
              goto LABEL_43;
            v41 = v93;
          }
          LODWORD(v32) = -1073741811;
          v72 = (_QWORD *)WdLogNewEntry5_WdAssertion(v47, v36, v38, v39);
          v72[3] = this;
          v72[4] = *(&PoolWithTag->hAllocation + 24 * v91);
          v72[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v72);
LABEL_97:
          hResource = v101.hResource;
          goto LABEL_102;
        }
LABEL_43:
        hResource = v101.hResource;
        *((_DWORD *)a2 + 3) = v101.hGlobalShare;
        v49 = *((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 2) = hResource;
        v50 = (unsigned int)(*(_DWORD *)(v49 + 12) - 6);
        if ( (v50 & 0xFFFFFFFD) != 0 )
          *((_QWORD *)a2 + 41) = 0LL;
        else
          *((_QWORD *)a2 + 41) = VIDMM_EXPORT::VidMmGetAllocationSection(
                                   *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
                                   *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
                                   *((struct _VIDMM_MULTI_ALLOC **)v7 + 3));
        if ( (*(_DWORD *)a2 & 0x40) != 0 )
        {
          memmove(*((void **)a2 + 45), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 92));
          memmove(*((void **)a2 + 43), v100.pResourcePrivateDriverData, *((unsigned int *)a2 + 88));
        }
LABEL_47:
        if ( (int)v32 >= 0 || !v88 )
        {
LABEL_48:
          if ( v94 )
          {
            p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
            v52 = v94;
            do
            {
              if ( *p_pPrivateDriverData )
                ExFreePoolWithTag(*p_pPrivateDriverData, 0);
              p_pPrivateDriverData += 12;
              --v52;
            }
            while ( v52 );
          }
          if ( P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_55;
        }
LABEL_102:
        if ( !hResource )
        {
          v74 = WdLogNewEntry5_WdAssertion(v50, v36, v38, v39);
          *(_QWORD *)(v74 + 24) = 6373LL;
          WdLogEvent5_WdAssertion(v74);
        }
        Current = DXGPROCESS::GetCurrent(v50);
        if ( !Current )
        {
          v80 = WdLogNewEntry5_WdAssertion(v76, v75, v78, v79);
          *(_QWORD *)(v80 + 24) = 6381LL;
          WdLogEvent5_WdAssertion(v80);
        }
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v104, Current, v78, v79);
        v84 = (hResource >> 6) & 0xFFFFFF;
        if ( (unsigned int)v84 < *((_DWORD *)Current + 52)
          && (v83 = *((_QWORD *)Current + 24),
              v81 = hResource >> 30,
              v82 = *(unsigned int *)(v83 + 16LL * (unsigned int)v84 + 8),
              (_DWORD)v81 == ((*(_DWORD *)(v83 + 16LL * (unsigned int)v84 + 8) >> 4) & 3))
          && (v82 & 0x1000) == 0
          && (v82 & 0xF) != 0
          && (*(_BYTE *)(v83 + 16LL * (unsigned int)v84 + 8) & 0xF) == 4 )
        {
          v85 = *(struct DXGRESOURCE **)(v83 + 16LL * (unsigned int)v84);
          if ( v85 )
          {
            if ( (unsigned int)v84 < *((_DWORD *)Current + 52) )
            {
              v86 = *(_DWORD *)(v83 + 16LL * (unsigned int)v84 + 8);
              if ( (_DWORD)v81 == ((v86 >> 4) & 3) && (v86 & 0x1000) == 0 && (v86 & 0xF) != 0 )
                *(_DWORD *)(v83 + 16 * (((unsigned __int64)hResource >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
            goto LABEL_119;
          }
        }
        else
        {
          v85 = 0LL;
        }
        v87 = WdLogNewEntry5_WdAssertion(v84, v81, v82, v83);
        *(_QWORD *)(v87 + 24) = 6387LL;
        WdLogEvent5_WdAssertion(v87);
LABEL_119:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v104);
        if ( v85 )
          DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v85, 0LL, DXGDEVICE::DestroyFlagsDefault);
        goto LABEL_48;
      }
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      v73[3] = this;
      v73[4] = v32;
      v73[5] = 1LL;
      WdLogEvent5_WdWarning(v73);
    }
    hResource = v101.hResource;
    goto LABEL_47;
  }
  v57 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new(v100.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  P = v57;
  if ( v57 )
  {
    memset(v57, 0, v100.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v100.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v100.AllocationPrivateDriverDataSize;
    goto LABEL_13;
  }
  v62 = (_QWORD *)WdLogNewEntry5_WdWarning(v59, v58, v60, v61);
  LODWORD(v32) = -1073741801;
  v62[3] = this;
  v62[4] = v100.ResourcePrivateDriverDataSize;
  v62[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v62);
LABEL_55:
  LODWORD(v16) = v32;
LABEL_56:
  if ( v105 != v106 && v105 )
    ExFreePoolWithTag(v105, 0);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v99);
  return (unsigned int)v16;
}
