/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50
 * Callers:
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055B38 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0057F84 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BAA4 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BCB8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005D448 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C009B640 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001100 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     McTemplateK0pqx @ 0x1C0021D8C (McTemplateK0pqx.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004F800 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052E98 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0058D38 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005E970 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C005EB70 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005EC20 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00728B4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C0079A28 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0099464 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0099DC4 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C009D724 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00A36C8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AAF74 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6)
{
  unsigned int v6; // edi
  _BYTE *v7; // r14
  __int64 **v10; // rbx
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rbp
  struct _MDL *v22; // rcx
  _QWORD *v23; // rbp
  __int64 v24; // rcx
  struct _MDL *j; // rax
  struct _MDL *k; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rsi
  __int64 v31; // rdi
  DXGPROCESS **v32; // r12
  unsigned int *v33; // r14
  _QWORD *v34; // rcx
  __int64 v35; // rdx
  __int64 *v36; // r8
  __int64 v37; // r8
  __int64 v39; // rdx
  int v40; // ecx
  __int64 *v41; // rax
  __int64 v42; // r8
  __int64 *v43; // rdx
  struct _KTHREAD **v44; // r10
  struct _KTHREAD **v45; // r14
  __int64 v46; // r8
  char v47; // r13
  __int64 **v48; // r12
  unsigned int v49; // esi
  __int64 **v50; // r13
  __int64 v51; // rcx
  CVirtualAddressAllocator *v52; // r14
  VIDMM_SEGMENT *v53; // r15
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // r9d
  __int64 *v58; // rcx
  _QWORD *v59; // rax
  __int64 *v60; // rdx
  __int64 v61; // rcx
  _QWORD *v62; // rcx
  _QWORD *v63; // rax
  struct _MDL *v64; // r15
  struct _MDL *v65; // rdx
  VIDMM_GLOBAL *v66; // rcx
  __int64 v67; // rax
  unsigned int i; // ebp
  struct _MDL *Next; // rcx
  unsigned __int64 p_Size; // rdx
  struct _MDL *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned __int64 v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  struct _MDL *v77; // rcx
  unsigned __int64 v78; // rdx
  struct _MDL *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned __int64 v82; // rcx
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rcx
  VIDMM_GLOBAL *v88; // rcx
  VIDMM_GLOBAL *v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  _QWORD *v92; // rax
  int v93; // ecx
  __int64 *v94; // r14
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // [rsp+20h] [rbp-E8h]
  void *v102; // [rsp+20h] [rbp-E8h]
  unsigned __int8 v103; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v104; // [rsp+41h] [rbp-C7h] BYREF
  char v105; // [rsp+42h] [rbp-C6h]
  struct _MDL *FullMDL; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v107; // [rsp+50h] [rbp-B8h]
  _BYTE *v108; // [rsp+58h] [rbp-B0h]
  unsigned int v109; // [rsp+60h] [rbp-A8h]
  CVirtualAddressAllocator *v110; // [rsp+68h] [rbp-A0h]
  VIDMM_SEGMENT *v111; // [rsp+70h] [rbp-98h]
  _QWORD *v112; // [rsp+78h] [rbp-90h]
  struct VIDMM_ALLOC **v113; // [rsp+80h] [rbp-88h]
  __int64 v114; // [rsp+88h] [rbp-80h]
  __int64 **v115; // [rsp+90h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v6 = 0;
  v7 = a5;
  v113 = a6;
  v10 = a2;
  v115 = a2;
  *a6 = 0LL;
  v108 = a5;
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
  v104 = 0;
  v13 = *v12;
  v114 = *v12;
  LODWORD(v15) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v10, &v104);
  if ( (int)v15 >= 0 )
    goto LABEL_23;
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
      if ( *v113 )
        VIDMM_GLOBAL::EvictTemporaryAllocations(
          (VIDMM_GLOBAL *)a1,
          a3 != 0,
          *(_DWORD *)(**(_QWORD **)*v113 + 76LL) & 0x3F);
      LODWORD(v15) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v10, (unsigned int)a3, a4);
      if ( (int)v15 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_124;
        WdLogNewEntry5_WdTrace(v19);
        goto LABEL_121;
      }
    }
    v20 = **v10;
    v21 = *(_QWORD *)(v20 + 224);
    v22 = *(struct _MDL **)(v20 + 488);
    v111 = (VIDMM_SEGMENT *)v21;
    FullMDL = v22;
    if ( (*(_DWORD *)(v21 + 80) & 0x1001) != 0
      && !VIDMM_GLOBAL::VerifyGlobalResidentLimit((VIDMM_GLOBAL *)v22, (struct VIDMM_PARTITION_ADAPTER_INFO *)v22) )
    {
      v62 = (_QWORD *)(v21 + 176);
      v63 = *(_QWORD **)(v21 + 176);
      if ( v63 != (_QWORD *)(v21 + 176) )
      {
        v64 = FullMDL;
        do
        {
          v65 = (struct _MDL *)(v63 - 48);
          v63 = (_QWORD *)*v63;
          v112 = v63;
          FullMDL = v65;
          if ( *(struct _MDL **)&v65[10].Size == v64 )
          {
            (*(void (__fastcall **)(__int64, struct _MDL *, _QWORD, struct _EPROCESS *))(*(_QWORD *)v21 + 24LL))(
              v21,
              v65,
              *(_QWORD *)&v65[3].Size,
              v65->Process);
            VIDMM_GLOBAL::NotifyAllocationReclaimed(
              *(VIDMM_GLOBAL **)(v21 + 8),
              (struct _VIDMM_GLOBAL_ALLOC *)FullMDL,
              0);
            if ( VIDMM_GLOBAL::VerifyGlobalResidentLimit(v66, (struct VIDMM_PARTITION_ADAPTER_INFO *)v64) )
              break;
            v63 = v112;
            v62 = (_QWORD *)(v21 + 176);
          }
        }
        while ( v63 != v62 );
        v13 = v114;
      }
    }
    v23 = *(_QWORD **)(v20 + 488);
    v24 = *v23;
    if ( *(_QWORD *)(*v23 + 56LL) > v23[2] )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v67 = WdLogNewEntry5_WdTrace(v24);
        *(_QWORD *)(v67 + 24) = v23[2];
        v24 = *v23;
        *(_QWORD *)(v67 + 32) = *(_QWORD *)(*v23 + 56LL);
      }
      for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
        VIDMM_SEGMENT::TrimResidentBytes(
          *(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i),
          *(struct VIDMM_PARTITION_ADAPTER_INFO **)(v20 + 488));
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v24);
    for ( j = *(struct _MDL **)(a1 + 3736); j != (struct _MDL *)(a1 + 3736); *(_QWORD *)(v74 + 336) = 0LL )
    {
      Next = j[-4].Next;
      p_Size = (unsigned __int64)&j[-7].Size;
      FullMDL = j->Next;
      LOBYTE(v18) = 1;
      v71 = Next->Next;
      v107 = p_Size;
      LOBYTE(v101) = 0;
      ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v71[1].Next)(
        Next,
        p_Size,
        v18,
        0LL,
        v101,
        0LL);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v72, &EventEvictAllocation, v73, v107);
      v74 = v107;
      v75 = (_QWORD *)(v107 + 328);
      v18 = *(_QWORD *)(v107 + 328);
      if ( *(_QWORD *)(v18 + 8) != v107 + 328 || (v76 = *(_QWORD **)(v107 + 336), (_QWORD *)*v76 != v75) )
        __fastfail(3u);
      *v76 = v18;
      *(_QWORD *)(v18 + 8) = v76;
      *v75 = 0LL;
      j = FullMDL;
    }
    for ( k = *(struct _MDL **)(a1 + 3752); k != (struct _MDL *)(a1 + 3752); *(_QWORD *)(v82 + 336) = 0LL )
    {
      v77 = k[-4].Next;
      v78 = (unsigned __int64)&k[-7].Size;
      FullMDL = k->Next;
      LOBYTE(v18) = 1;
      v79 = v77->Next;
      v107 = v78;
      LOBYTE(v101) = 0;
      ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v79[1].Next)(
        v77,
        v78,
        v18,
        0LL,
        v101,
        0LL);
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p(v80, &EventEvictAllocation, v81, v107);
      v82 = v107;
      v83 = (_QWORD *)(v107 + 328);
      v18 = *(_QWORD *)(v107 + 328);
      if ( *(_QWORD *)(v18 + 8) != v107 + 328 || (v84 = *(_QWORD **)(v107 + 336), (_QWORD *)*v84 != v83) )
        __fastfail(3u);
      *v84 = v18;
      *(_QWORD *)(v18 + 8) = v84;
      *v83 = 0LL;
      k = FullMDL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 2216LL) + 48LL * *((unsigned int *)v111 + 95) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves(v111);
    v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v20 + 224) + 40LL))(*(_QWORD *)(v20 + 224), v20);
    v15 = v27;
    if ( v27 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
    {
      v16 = v13 + 480;
      goto LABEL_124;
    }
    v85 = WdLogNewEntry5_WdTrace(v28);
    *(_QWORD *)(v85 + 24) = v20;
    *(_QWORD *)(v85 + 32) = v15;
    WdLogNewEntry5_WdTrace(v86);
    v16 = v13 + 480;
LABEL_121:
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v61) + 24) = v10;
LABEL_124:
    v87 = *(_QWORD *)(v13 + 224);
    if ( v87 )
    {
      if ( *(_DWORD *)(v13 + 472) != -1 )
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(
          *(VIDMM_CPU_HOST_APERTURE **)(v87 + 488),
          (struct _VIDMM_GLOBAL_ALLOC *)v13);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v13 + 224) + 24LL))(
        *(_QWORD *)(v13 + 224),
        v13,
        *(_QWORD *)(v13 + 208),
        *(_QWORD *)(v13 + 16));
      *(_QWORD *)(v13 + 224) = 0LL;
      *(_QWORD *)(v13 + 208) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v88, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v89, (struct _LIST_ENTRY *)(a1 + 3752));
    v91 = WdLogNewEntry5_WdWarning(v90);
    *(_QWORD *)(v91 + 32) = a3;
    *(_QWORD *)(v91 + 24) = v10;
    WdLogEvent5_WdWarning(v91);
    if ( a3 || (*(_DWORD *)(v13 + 76) & 0x40) == 0 || a4 )
      goto LABEL_22;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v13 + 16) + (*(_QWORD *)(v13 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v20 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v104 = 1;
  LODWORD(v15) = 0;
  ExReleasePushLockExclusiveEx(v13 + 480, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  v7 = v108;
LABEL_23:
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    LODWORD(v15) = -1071775466;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_153;
    v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v92[5] = 16659LL;
LABEL_152:
    v92[4] = v13;
    v92[3] = v10;
    goto LABEL_153;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2269LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 761LL) )
  {
    LODWORD(v15) = -1073741130;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_153;
    v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v92[5] = 16667LL;
    goto LABEL_152;
  }
  if ( (int)v15 < 0 )
  {
    *v108 = 1;
    *v113 = (struct VIDMM_ALLOC *)v10;
    return (unsigned int)v15;
  }
  if ( !*((_BYTE *)v10 + 26) )
  {
    if ( v10[18] )
    {
      if ( (*(_BYTE *)(a1 + 40872) & 4) != 0 )
      {
        if ( (*(_DWORD *)(v13 + 80) & 0x80u) == 0
          || (v93 = **(_DWORD **)(v13 + 504), (v93 & 8) != 0)
          || (v93 & 0x20000000) != 0 )
        {
          KeStackAttachProcess(*(PRKPROCESS *)(*v10)[1], &ApcState);
          v94 = v10[18];
          v15 = (int)VidMmiEnsureVirtualAddressRangeValid(v94, *(_QWORD *)(v13 + 8));
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v15 < 0 )
          {
            v97 = WdLogNewEntry5_WdAssertion(v96, v95);
            *(_QWORD *)(v97 + 24) = v94;
            *(_QWORD *)(v97 + 32) = v15;
            WdLogEvent5_WdAssertion(v97);
            *v108 = 0;
            goto LABEL_153;
          }
        }
      }
    }
    *((_BYTE *)v10 + 26) = 1;
  }
  v29 = *(unsigned __int8 *)(a1 + 40872);
  if ( (v29 & 1) == 0 )
    goto LABEL_32;
  LOBYTE(v29) = (unsigned __int8)v29 >> 3;
  if ( ((unsigned __int8)v29 & ((*(_DWORD *)(v13 + 76) & 0x100) != 0)) != 0 )
    goto LABEL_32;
  v39 = *(_QWORD *)(v13 + 136);
  v40 = *(_DWORD *)(v39 + 80);
  if ( (v40 & 0x1001) != 0 )
  {
    v109 = 0;
    v112 = 0LL;
  }
  else
  {
    if ( (v40 & 0x1000) != 0 )
      v109 = 0;
    else
      v109 = *(_DWORD *)(v39 + 16) + 1;
    v112 = *(_QWORD **)(v13 + 144);
  }
  FullMDL = 0LL;
  if ( (v40 & 0x1001) != 0 )
  {
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL);
    if ( !FullMDL )
    {
      v98 = WdLogNewEntry5_WdAssertion(v56, v55);
      *(_QWORD *)(v98 + 24) = v13;
      WdLogEvent5_WdAssertion(v98);
      LODWORD(v15) = -1073741801;
      goto LABEL_153;
    }
  }
  v41 = *v10;
  v107 = -1LL;
  v111 = 0LL;
  v42 = v41[1];
  v29 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 200LL);
  v43 = *(__int64 **)(*(_QWORD *)(v42 + 16) + 8 * v29);
  if ( v43 && (v29 = *v43, *(_DWORD *)(*v43 + 40864)) )
  {
    if ( (*(_DWORD *)(v42 + 48) & 2) != 0 )
      v44 = *(struct _KTHREAD ***)(v29 + 8LL * (*(_DWORD *)(v13 + 76) & 0x3F) + 40352);
    else
      v44 = (struct _KTHREAD **)v43[62];
  }
  else
  {
    v44 = 0LL;
  }
  v45 = v44 + 7;
  LOBYTE(v29) = 0;
  v110 = (CVirtualAddressAllocator *)v44;
  v103 = 0;
  if ( v44[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v45, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *((_DWORD *)v45 + 4);
        if ( v57 != -1 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v29, (__int64)&EventBlockThread, v46, v57);
      }
      ExAcquirePushLockExclusiveEx(v45, 0LL);
    }
    LOBYTE(v29) = 1;
    v44 = (struct _KTHREAD **)v110;
    v45[1] = KeGetCurrentThread();
    v103 = 1;
  }
  v47 = 0;
  v48 = (__int64 **)v10[16];
  v49 = 0;
  v105 = 0;
  if ( v48 == v10 + 16 )
  {
LABEL_66:
    if ( (_BYTE)v29 )
    {
      v45[1] = 0LL;
      ExReleasePushLockExclusiveEx(v45, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v47 && v49 )
    {
      v52 = v110;
      v53 = v111;
      v54 = v107;
      do
      {
        if ( (v49 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v52, v6, v54, (unsigned __int64)v53);
        ++v6;
        v49 >>= 1;
      }
      while ( v49 );
      v10 = v115;
      v13 = v114;
    }
LABEL_32:
    if ( (*((_DWORD *)v10 + 7) & 3) != 2 )
    {
      v30 = v10[1];
      v31 = **v10;
      v32 = (DXGPROCESS **)(*v10)[1];
      v33 = *(unsigned int **)(v31 + 136);
      if ( g_IsInternalReleaseOrDbg )
      {
        v100 = WdLogNewEntry5_WdTrace(v29);
        *(_QWORD *)(v100 + 24) = v10;
        *(_QWORD *)(v100 + 32) = v30;
      }
      v34 = v10 + 7;
      v35 = v30[5] + 56LL * v33[5];
      ++*(_DWORD *)v35;
      *(_QWORD *)(v35 + 8) += *(_QWORD *)(v31 + 16);
      *(_QWORD *)(v35 + 48) = v30;
      v36 = *(__int64 **)(v35 + 40);
      if ( *v36 != v35 + 32 )
        __fastfail(3u);
      *v34 = v35 + 32;
      v10[8] = v36;
      *v36 = (__int64)v34;
      *(_QWORD *)(v35 + 40) = v34;
      VIDMM_PROCESS::AddCommitment(
        v32,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v35,
        *(_DWORD *)(*(_QWORD *)(*v30 + 24) + 200LL),
        (struct VIDMM_SEGMENT *)v33,
        *(_DWORD *)v35 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v31);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v10 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v31 + 160);
      *((_DWORD *)v10 + 7) |= 0x10u;
      if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v102) = *(_DWORD *)(*(_QWORD *)(v13 + 136) + 16LL) + 1;
        McTemplateK0pqx((unsigned int)v102, &EventPageInAllocation, v37, v10, v102, *(_QWORD *)(v13 + 144));
      }
    }
    *(_BYTE *)(v13 + 98) = 1;
    *v108 = 0;
    return (unsigned int)v15;
  }
  while ( 2 )
  {
    v50 = v48 - 3;
    if ( ((_DWORD)v48[5] & 0x400) != 0 )
    {
      v47 = v105;
LABEL_64:
      v48 = (__int64 **)*v48;
      if ( v48 == v10 + 16 )
      {
        v29 = v103;
        goto LABEL_66;
      }
      v44 = (struct _KTHREAD **)v110;
      continue;
    }
    break;
  }
  LODWORD(v15) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v44,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v48 - 3),
                   *(_DWORD *)(v13 + 76) & 0x3F,
                   v109,
                   (unsigned __int64)v112 + (_QWORD)v50[9],
                   FullMDL,
                   0,
                   v113);
  if ( (int)v15 >= 0 )
  {
    v49 |= 1 << ((*((_DWORD *)v50 + 16) >> 4) & 0x3F);
    if ( v107 >= (unsigned __int64)v50[12] )
      v107 = (unsigned __int64)v50[12];
    if ( v111 <= (VIDMM_SEGMENT *)v50[13] )
      v111 = (VIDMM_SEGMENT *)v50[13];
    v47 = 1;
    v105 = 1;
    goto LABEL_64;
  }
  v99 = WdLogNewEntry5_WdWarning(v51);
  *(_QWORD *)(v99 + 24) = v10;
  *(_QWORD *)(v99 + 32) = 16767LL;
  WdLogEvent5_WdWarning(v99);
  if ( v103 )
  {
    v45[1] = 0LL;
    ExReleasePushLockExclusiveEx(v45, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v15 == -1073741267 )
    *v108 = 1;
LABEL_153:
  if ( v104 )
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v13 + 136),
      (struct _VIDMM_POOL_BLOCK **)v13,
      0LL,
      0LL);
  return (unsigned int)v15;
}
