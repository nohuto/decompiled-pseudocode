/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750
 * Callers:
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00597F4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C428 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00603BC (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00605B8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0061B30 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00A14E8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001E44 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     McTemplateK0pqx @ 0x1C00246D8 (McTemplateK0pqx.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0062F48 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0063150 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0063200 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0072F88 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C00731E0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0074550 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C009F0A0 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A3CA4 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00AA6E8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6)
{
  unsigned int v6; // esi
  _BYTE *v7; // r13
  __int64 **v10; // rbx
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r13
  struct VIDMM_PARTITION_ADAPTER_INFO *v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rbp
  __int64 v23; // rcx
  struct _MDL *v24; // rax
  struct _MDL *v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // r8
  __int64 *v35; // rdx
  struct _KTHREAD **v36; // r10
  struct _KTHREAD **v37; // rdi
  char v38; // r13
  __int64 v39; // r8
  __int64 **v40; // r14
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // edi
  CVirtualAddressAllocator *v45; // r14
  VIDMM_SEGMENT *v46; // r15
  unsigned __int64 v47; // rbx
  __int64 *v48; // rsi
  __int64 v49; // rdi
  VIDMM_PROCESS *v50; // r12
  unsigned int *v51; // r14
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  __int64 *v54; // r8
  __int64 v55; // r8
  int v57; // r9d
  __int64 *v58; // rcx
  _QWORD *v59; // rax
  __int64 *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int i; // ebp
  struct _MDL *Next; // rcx
  unsigned __int64 p_Size; // rdx
  struct _MDL *v66; // rax
  __int64 v67; // rcx
  struct _MDL *v68; // rax
  struct _MDL *v69; // rdx
  struct _MDL **v70; // rcx
  struct _MDL *v71; // rcx
  unsigned __int64 v72; // rdx
  struct _MDL *v73; // rax
  __int64 v74; // rcx
  struct _MDL *v75; // rax
  struct _MDL *v76; // rdx
  struct _MDL **v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  VIDMM_CPU_HOST_APERTURE **v80; // rcx
  VIDMM_GLOBAL *v81; // rcx
  VIDMM_GLOBAL *v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 *v87; // r14
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  int v93; // [rsp+20h] [rbp-E8h]
  void *v94; // [rsp+20h] [rbp-E8h]
  char v95; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v96[7]; // [rsp+41h] [rbp-C7h] BYREF
  unsigned __int64 v97; // [rsp+48h] [rbp-C0h]
  unsigned int v98; // [rsp+50h] [rbp-B8h]
  unsigned int v99; // [rsp+54h] [rbp-B4h]
  _BYTE *v100; // [rsp+58h] [rbp-B0h]
  struct _MDL *v101; // [rsp+60h] [rbp-A8h]
  struct _MDL *FullMDL; // [rsp+68h] [rbp-A0h]
  CVirtualAddressAllocator *v103; // [rsp+70h] [rbp-98h]
  VIDMM_SEGMENT *v104; // [rsp+78h] [rbp-90h]
  struct VIDMM_ALLOC **v105; // [rsp+80h] [rbp-88h]
  __int64 **v106; // [rsp+88h] [rbp-80h]
  __int64 v107; // [rsp+90h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v6 = 0;
  v7 = a5;
  v105 = a6;
  v10 = a2;
  v106 = a2;
  *a6 = 0LL;
  v100 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v10 + 7) & 3) == 1 )
  {
    v58 = v10[7];
    v59 = v10 + 7;
    if ( (__int64 **)v58[1] != v10 + 7 || (v60 = v10[8], (_QWORD *)*v60 != v59) )
      __fastfail(3u);
    *v60 = (__int64)v58;
    v58[1] = (__int64)v60;
    *((_DWORD *)v10 + 7) &= 0xFFFFFFFC;
    v10[8] = 0LL;
    *v59 = 0LL;
  }
  v12 = *v10;
  v96[0] = 0;
  v13 = *v12;
  v107 = *v12;
  LODWORD(v15) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v10, v96);
  if ( (int)v15 >= 0 )
    goto LABEL_22;
  v16 = v13 + 480;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    if ( !*(_QWORD *)(v13 + 224) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0, *(_DWORD *)(v13 + 76) & 0x3F);
      if ( *v105 )
        VIDMM_GLOBAL::EvictTemporaryAllocations(
          (VIDMM_GLOBAL *)a1,
          a3 != 0,
          *(_DWORD *)(**(_QWORD **)*v105 + 76LL) & 0x3F);
      LODWORD(v15) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v10, (unsigned int)a3, a4);
      if ( (int)v15 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_111;
        WdLogNewEntry5_WdTrace(v18);
        goto LABEL_108;
      }
    }
    v19 = **v10;
    v20 = *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v19 + 488);
    v104 = *(VIDMM_SEGMENT **)(v19 + 224);
    VIDMM_SEGMENT::TrimResidentBytes(v104, v20);
    v22 = *(_QWORD **)(v19 + 488);
    v23 = *v22;
    if ( *(_QWORD *)(*v22 + 56LL) > v22[2] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v62 = WdLogNewEntry5_WdTrace(v23);
        *(_QWORD *)(v62 + 24) = v22[2];
        v23 = *v22;
        *(_QWORD *)(v62 + 32) = *(_QWORD *)(*v22 + 56LL);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v19 + 488));
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v23);
    v24 = *(struct _MDL **)(a1 + 3736);
    if ( v24 != (struct _MDL *)(a1 + 3736) )
    {
      do
      {
        Next = v24[-4].Next;
        p_Size = (unsigned __int64)&v24[-7].Size;
        FullMDL = v24;
        LOBYTE(v21) = 1;
        v101 = v24->Next;
        v66 = Next->Next;
        v97 = p_Size;
        LOBYTE(v93) = 0;
        ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v66[1].Next)(
          Next,
          p_Size,
          v21,
          0LL,
          v93,
          0LL);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v67, &EventEvictAllocation, v21, v97);
        v68 = FullMDL;
        v69 = FullMDL->Next;
        if ( *(struct _MDL **)&FullMDL->Next->Size != FullMDL
          || (v70 = *(struct _MDL ***)&FullMDL->Size, *v70 != FullMDL) )
        {
          __fastfail(3u);
        }
        *v70 = v69;
        *(_QWORD *)&v69->Size = v70;
        v68->Next = 0LL;
        *(_QWORD *)(v97 + 336) = 0LL;
        v24 = v101;
      }
      while ( v101 != (struct _MDL *)(a1 + 3736) );
    }
    v25 = *(struct _MDL **)(a1 + 3752);
    if ( v25 != (struct _MDL *)(a1 + 3752) )
    {
      do
      {
        v71 = v25[-4].Next;
        v72 = (unsigned __int64)&v25[-7].Size;
        FullMDL = v25;
        LOBYTE(v21) = 1;
        v101 = v25->Next;
        v73 = v71->Next;
        v97 = v72;
        LOBYTE(v93) = 0;
        ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v73[1].Next)(
          v71,
          v72,
          v21,
          0LL,
          v93,
          0LL);
        if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p(v74, &EventEvictAllocation, v21, v97);
        v75 = FullMDL;
        v76 = FullMDL->Next;
        if ( *(struct _MDL **)&FullMDL->Next->Size != FullMDL
          || (v77 = *(struct _MDL ***)&FullMDL->Size, *v77 != FullMDL) )
        {
          __fastfail(3u);
        }
        *v77 = v76;
        *(_QWORD *)&v76->Size = v77;
        v75->Next = 0LL;
        *(_QWORD *)(v97 + 336) = 0LL;
        v25 = v101;
      }
      while ( v101 != (struct _MDL *)(a1 + 3752) );
    }
    if ( (*(_DWORD *)(352LL * *((unsigned int *)v104 + 95) + *(_QWORD *)(*(_QWORD *)(a1 + 24) + 2360LL) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves(v104);
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 224) + 40LL))(*(_QWORD *)(v19 + 224), v19);
    v15 = v26;
    if ( v26 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
    {
      v16 = v13 + 480;
      goto LABEL_111;
    }
    v78 = WdLogNewEntry5_WdTrace(v27);
    *(_QWORD *)(v78 + 24) = v19;
    *(_QWORD *)(v78 + 32) = v15;
    WdLogNewEntry5_WdTrace(v79);
    v16 = v13 + 480;
LABEL_108:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v61) + 24) = v10;
LABEL_111:
    v80 = *(VIDMM_CPU_HOST_APERTURE ***)(v13 + 224);
    if ( v80 )
    {
      if ( *(_DWORD *)(v13 + 472) != -1 )
      {
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(v80[61], (struct _VIDMM_GLOBAL_ALLOC *)v13);
        v80 = *(VIDMM_CPU_HOST_APERTURE ***)(v13 + 224);
      }
      (*((void (__fastcall **)(VIDMM_CPU_HOST_APERTURE **, __int64, _QWORD, _QWORD))*v80 + 3))(
        v80,
        v13,
        *(_QWORD *)(v13 + 208),
        *(_QWORD *)(v13 + 16));
      *(_QWORD *)(v13 + 224) = 0LL;
      *(_QWORD *)(v13 + 208) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v81, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v82, (struct _LIST_ENTRY *)(a1 + 3752));
    v85 = WdLogNewEntry5_WdWarning(v84, v83);
    *(_QWORD *)(v85 + 32) = a3;
    *(_QWORD *)(v85 + 24) = v10;
    WdLogEvent5_WdWarning(v85);
    if ( a3 || (*(_DWORD *)(v13 + 76) & 0x40) == 0 || a4 )
      goto LABEL_21;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v13 + 16) + (*(_QWORD *)(v13 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v19 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v96[0] = 1;
  LODWORD(v15) = 0;
  ExReleasePushLockExclusiveEx(v13 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_21:
  v7 = v100;
LABEL_22:
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    LODWORD(v15) = -1071775466;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_142;
    v86 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v86[5] = 16821LL;
LABEL_141:
    v86[4] = v13;
    v86[3] = v10;
    goto LABEL_142;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2414LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 777LL) )
  {
    LODWORD(v15) = -1073741130;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_142;
    v86 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v86[5] = 16829LL;
    goto LABEL_141;
  }
  if ( (int)v15 < 0 )
  {
    *v100 = 1;
    *v105 = (struct VIDMM_ALLOC *)v10;
    return (unsigned int)v15;
  }
  if ( !*((_BYTE *)v10 + 26) )
  {
    if ( v10[18]
      && (*(_BYTE *)(a1 + 41448) & 8) != 0
      && ((*(_DWORD *)(v13 + 80) & 0x80u) == 0 || (**(_DWORD **)(v13 + 504) & 0x20000008) != 0) )
    {
      KeStackAttachProcess(*(PRKPROCESS *)(*v10)[1], &ApcState);
      v87 = v10[18];
      v15 = (int)VidMmiEnsureVirtualAddressRangeValid(v87, *(_QWORD *)(v13 + 8));
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v15 < 0 )
      {
        v89 = WdLogNewEntry5_WdAssertion(v14, v88);
        *(_QWORD *)(v89 + 24) = v87;
        *(_QWORD *)(v89 + 32) = v15;
        WdLogEvent5_WdAssertion(v89);
        *v7 = 0;
        goto LABEL_142;
      }
    }
    *((_BYTE *)v10 + 26) = 1;
  }
  v28 = *(_BYTE *)(a1 + 41448);
  if ( (v28 & 2) == 0 || (v28 & 0x10) != 0 && (*(_DWORD *)(v13 + 76) & 0x100) != 0 )
    goto LABEL_60;
  v29 = *(_QWORD *)(v13 + 136);
  v30 = *(_DWORD *)(v29 + 80);
  if ( (v30 & 0x1001) != 0 )
  {
    v98 = 0;
    v101 = 0LL;
  }
  else if ( (v30 & 0x1000) != 0 )
  {
    v101 = *(struct _MDL **)(v13 + 144);
    v98 = 0;
  }
  else
  {
    v98 = *(_DWORD *)(v29 + 16) + 1;
    v101 = *(struct _MDL **)(v13 + 144);
  }
  FullMDL = 0LL;
  if ( (v30 & 0x1001) != 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL);
    if ( !FullMDL )
    {
      v90 = WdLogNewEntry5_WdAssertion(v32, v31);
      *(_QWORD *)(v90 + 24) = v13;
      WdLogEvent5_WdAssertion(v90);
      LODWORD(v15) = -1073741801;
      goto LABEL_142;
    }
  }
  v33 = *v10;
  v97 = -1LL;
  v104 = 0LL;
  v34 = v33[1];
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 200LL);
  v35 = *(__int64 **)(*(_QWORD *)(v34 + 16) + 8 * v14);
  if ( v35 && (v14 = *v35, *(_DWORD *)(*v35 + 41440)) )
  {
    if ( (*(_DWORD *)(v34 + 88) & 2) != 0 )
      v36 = *(struct _KTHREAD ***)(v14 + 8LL * (*(_DWORD *)(v13 + 76) & 0x3F) + 40928);
    else
      v36 = (struct _KTHREAD **)v35[62];
  }
  else
  {
    v36 = 0LL;
  }
  v37 = v36 + 7;
  v38 = 0;
  v103 = (CVirtualAddressAllocator *)v36;
  if ( v36[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *((_DWORD *)v37 + 4);
        if ( v57 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v14, (__int64)&EventBlockThread, v39, v57);
      }
      ExAcquirePushLockExclusiveEx(v37, 0LL);
    }
    v38 = 1;
    v36 = (struct _KTHREAD **)v103;
    v37[1] = KeGetCurrentThread();
  }
  v99 = 0;
  v40 = (__int64 **)v10[16];
  v41 = 0;
  v95 = 0;
  if ( v40 == v10 + 16 )
  {
LABEL_51:
    if ( v38 )
    {
      v37[1] = 0LL;
      ExReleasePushLockExclusiveEx(v37, 0LL);
      KeLeaveCriticalRegion();
      v41 = v95;
    }
    if ( v41 )
    {
      v44 = v99;
      if ( v99 )
      {
        v45 = v103;
        v46 = v104;
        v47 = v97;
        do
        {
          if ( (v44 & 1) != 0 )
            CVirtualAddressAllocator::FlushGpuVaTlb(v45, v6, v47, (unsigned __int64)v46);
          ++v6;
          v44 >>= 1;
        }
        while ( v44 );
      }
    }
    v10 = v106;
    v13 = v107;
LABEL_60:
    if ( (*((_DWORD *)v10 + 7) & 3) != 2 )
    {
      v48 = v10[1];
      v49 = **v10;
      v50 = (VIDMM_PROCESS *)(*v10)[1];
      v51 = *(unsigned int **)(v49 + 136);
      if ( g_IsInternalReleaseOrDbg )
      {
        v92 = WdLogNewEntry5_WdTrace(v14);
        *(_QWORD *)(v92 + 24) = v10;
        *(_QWORD *)(v92 + 32) = v48;
      }
      v52 = v10 + 7;
      v53 = v48[5] + 56LL * v51[5];
      ++*(_DWORD *)v53;
      *(_QWORD *)(v53 + 8) += *(_QWORD *)(v49 + 16);
      *(_QWORD *)(v53 + 48) = v48;
      v54 = *(__int64 **)(v53 + 40);
      if ( *v54 != v53 + 32 )
        __fastfail(3u);
      *v52 = v53 + 32;
      v10[8] = v54;
      *v54 = (__int64)v52;
      *(_QWORD *)(v53 + 40) = v52;
      VIDMM_PROCESS::AddCommitment(
        v50,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v53,
        *(_DWORD *)(*(_QWORD *)(*v48 + 24) + 200LL),
        (struct VIDMM_SEGMENT *)v51,
        *(_DWORD *)v53 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v49);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v10 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v49 + 160);
      *((_DWORD *)v10 + 7) |= 0x10u;
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v94) = *(_DWORD *)(*(_QWORD *)(v13 + 136) + 16LL) + 1;
        McTemplateK0pqx((unsigned int)v94, &EventPageInAllocation, v55, v10, v94, *(_QWORD *)(v13 + 144));
      }
    }
    *(_BYTE *)(v13 + 98) = 1;
    *v100 = 0;
    return (unsigned int)v15;
  }
  while ( 2 )
  {
    if ( ((_DWORD)v40[5] & 0x400) != 0 )
    {
      v41 = v95;
LABEL_50:
      v40 = (__int64 **)*v40;
      if ( v40 == v10 + 16 )
        goto LABEL_51;
      v36 = (struct _KTHREAD **)v103;
      continue;
    }
    break;
  }
  LODWORD(v15) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v36,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v40 - 3),
                   *(_DWORD *)(v13 + 76) & 0x3F,
                   v98,
                   (unsigned __int64)v101 + (_QWORD)v40[6],
                   FullMDL,
                   0,
                   v105);
  if ( (int)v15 >= 0 )
  {
    v14 = (*((_DWORD *)v40 + 10) >> 4) & 0x3F;
    v99 |= 1 << ((*((_DWORD *)v40 + 10) >> 4) & 0x3F);
    if ( v97 >= (unsigned __int64)v40[9] )
      v97 = (unsigned __int64)v40[9];
    if ( v104 <= (VIDMM_SEGMENT *)v40[10] )
      v104 = (VIDMM_SEGMENT *)v40[10];
    v41 = 1;
    v95 = 1;
    goto LABEL_50;
  }
  v91 = WdLogNewEntry5_WdWarning(v43, v42);
  *(_QWORD *)(v91 + 24) = v10;
  *(_QWORD *)(v91 + 32) = 16929LL;
  WdLogEvent5_WdWarning(v91);
  if ( v38 )
  {
    v37[1] = 0LL;
    ExReleasePushLockExclusiveEx(v37, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v15 == -1073741267 )
    *v100 = 1;
LABEL_142:
  if ( v96[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v13 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL, 0LL);
  return (unsigned int)v15;
}
