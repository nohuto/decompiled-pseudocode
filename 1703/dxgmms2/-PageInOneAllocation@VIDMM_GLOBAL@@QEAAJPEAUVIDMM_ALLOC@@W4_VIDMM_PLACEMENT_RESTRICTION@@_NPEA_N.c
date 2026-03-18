/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0047C38 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0051210 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053F04 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058948 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A190 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C0093C34 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00010E0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     Template_pqx @ 0x1C001FCC8 (Template_pqx.c)
 *     ?VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ @ 0x1C004AAFC (-VerifyResidentLimit@VIDMM_SEGMENT@@IEAA_NXZ.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C004B3B0 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E4CC (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005B5E8 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C005B7D4 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005B874 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C006DE7C (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0091D5C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0092670 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0095588 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C009B3DC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
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
  _BYTE *v7; // rdi
  __int64 **v10; // rbx
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  struct _MDL *v23; // rcx
  struct _MDL *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 v29; // rdi
  DXGPROCESS **v30; // r12
  unsigned int *v31; // rbp
  _QWORD *v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // r8
  __int64 v35; // r8
  __int64 *v37; // rdx
  _QWORD *v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  int v41; // ecx
  __int64 *v42; // rax
  __int64 v43; // r8
  __int64 *v44; // rdx
  struct _KTHREAD **v45; // r10
  struct _KTHREAD **v46; // rbp
  __int64 v47; // r8
  char v48; // r13
  __int64 **v49; // r12
  unsigned int v50; // edi
  __int64 **v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  CVirtualAddressAllocator *v54; // rbp
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // r15
  struct _VIDMM_GLOBAL_ALLOC *v60; // rdi
  __int64 v61; // r9
  _QWORD *v62; // rdx
  __int64 v63; // r8
  __int64 SystemMemoryCommitLimit; // rax
  __int64 v65; // rdx
  unsigned int v66; // r15d
  unsigned __int64 p_Size; // rdx
  struct _MDL *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // r8
  unsigned __int64 v71; // rcx
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  unsigned __int64 v74; // rdx
  struct _MDL *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned __int64 v78; // rcx
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rcx
  VIDMM_GLOBAL *v84; // rcx
  VIDMM_GLOBAL *v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  _QWORD *v89; // rax
  int v90; // ecx
  __int64 *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // r9d
  __int64 v97; // rax
  __int64 v98; // rax
  int v99; // [rsp+20h] [rbp-E8h]
  void *v100; // [rsp+20h] [rbp-E8h]
  unsigned __int8 v101; // [rsp+40h] [rbp-C8h]
  unsigned __int8 v102; // [rsp+41h] [rbp-C7h] BYREF
  char v103; // [rsp+42h] [rbp-C6h]
  unsigned int v104; // [rsp+44h] [rbp-C4h]
  unsigned __int64 v105; // [rsp+48h] [rbp-C0h]
  _BYTE *v106; // [rsp+50h] [rbp-B8h]
  struct _MDL *Next; // [rsp+58h] [rbp-B0h]
  CVirtualAddressAllocator *v108; // [rsp+60h] [rbp-A8h]
  __int64 v109; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v110; // [rsp+70h] [rbp-98h]
  __int64 v111; // [rsp+78h] [rbp-90h]
  struct VIDMM_ALLOC **v112; // [rsp+80h] [rbp-88h]
  __int64 **v113; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v6 = 0;
  v7 = a5;
  v112 = a6;
  v10 = a2;
  v113 = a2;
  *a6 = 0LL;
  v106 = a5;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( (*((_DWORD *)v10 + 7) & 3) == 1 )
  {
    v37 = v10[7];
    v38 = v10 + 7;
    v39 = v10[8];
    if ( (__int64 **)v37[1] != v10 + 7 || (_QWORD *)*v39 != v38 )
      __fastfail(3u);
    *v39 = (__int64)v37;
    v37[1] = (__int64)v39;
    *((_DWORD *)v10 + 7) &= 0xFFFFFFFC;
    v10[8] = 0LL;
    *v38 = 0LL;
  }
  v12 = *v10;
  v102 = 0;
  v13 = *v12;
  v111 = *v12;
  LODWORD(v15) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)v10, &v102);
  if ( (int)v15 >= 0 )
    goto LABEL_23;
  v16 = v13 + 512;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v16, 0LL);
    if ( !*(_QWORD *)(v13 + 224) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0, *(_DWORD *)(v13 + 76) & 0x3F);
      if ( *v112 )
        VIDMM_GLOBAL::EvictTemporaryAllocations(
          (VIDMM_GLOBAL *)a1,
          a3 != 0,
          *(_DWORD *)(**(_QWORD **)*v112 + 76LL) & 0x3F);
      LODWORD(v15) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, v10, (unsigned int)a3, a4);
      if ( (int)v15 < 0 )
      {
        if ( !g_IsInternalReleaseOrDbg )
          goto LABEL_116;
        goto LABEL_114;
      }
    }
    v19 = **v10;
    v109 = v19;
    v20 = *(_QWORD *)(v19 + 224);
    if ( (*(_DWORD *)(v20 + 80) & 0x1001) != 0
      && !VIDMM_SEGMENT::VerifyResidentLimit(*(VIDMM_GLOBAL ***)(v19 + 224))
      && *(_QWORD *)(v20 + 200) != v20 + 200 )
    {
      v59 = *(_QWORD **)(v20 + 200);
      do
      {
        v60 = (struct _VIDMM_GLOBAL_ALLOC *)(v59 - 52);
        v61 = *(v59 - 50);
        v62 = v59 - 52;
        v63 = *(v59 - 33);
        v59 = (_QWORD *)*v59;
        (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, v62, v63, v61);
        VIDMM_GLOBAL::NotifyAllocationReclaimed(*(VIDMM_GLOBAL **)(v20 + 8), v60, 0);
      }
      while ( !VIDMM_SEGMENT::VerifyResidentLimit((VIDMM_GLOBAL **)v20) && v59 != (_QWORD *)(v20 + 200) );
      v10 = v113;
      v13 = v111;
      v19 = v109;
    }
    if ( VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture > VIDMM_GLOBAL::GetSystemMemoryCommitLimit((VIDMM_GLOBAL *)a1) )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v21);
        SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit((VIDMM_GLOBAL *)a1);
        *(_QWORD *)(v65 + 24) = SystemMemoryCommitLimit;
        v21 = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
        *(_QWORD *)(v65 + 32) = VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture;
      }
      if ( *(_DWORD *)(a1 + 3704) )
      {
        v66 = 0;
        do
          VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * v66++));
        while ( v66 < *(_DWORD *)(a1 + 3704) );
        v13 = v111;
      }
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v21);
    v23 = *(struct _MDL **)(a1 + 3736);
    if ( v23 != (struct _MDL *)(a1 + 3736) )
    {
      do
      {
        p_Size = (unsigned __int64)&v23[-7].Size;
        Next = v23->Next;
        LOBYTE(v22) = 1;
        v68 = v23[-4].Next;
        v105 = p_Size;
        LOBYTE(v99) = 0;
        ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v68->Next[1].Next)(
          v68,
          p_Size,
          v22,
          0LL,
          v99,
          0LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_p(v69, &EventEvictAllocation, v70, v105);
        v71 = v105;
        v72 = (_QWORD *)(v105 + 328);
        v22 = *(_QWORD *)(v105 + 328);
        v73 = *(_QWORD **)(v105 + 336);
        if ( *(_QWORD *)(v22 + 8) != v105 + 328 || (_QWORD *)*v73 != v72 )
          __fastfail(3u);
        *v73 = v22;
        *(_QWORD *)(v22 + 8) = v73;
        *v72 = 0LL;
        *(_QWORD *)(v71 + 336) = 0LL;
        v23 = Next;
      }
      while ( Next != (struct _MDL *)(a1 + 3736) );
    }
    v24 = *(struct _MDL **)(a1 + 3752);
    if ( v24 != (struct _MDL *)(a1 + 3752) )
    {
      do
      {
        v74 = (unsigned __int64)&v24[-7].Size;
        Next = v24->Next;
        LOBYTE(v22) = 1;
        v75 = v24[-4].Next;
        v105 = v74;
        LOBYTE(v99) = 0;
        ((void (__fastcall *)(struct _MDL *, unsigned __int64, __int64, _QWORD, int, _QWORD))v75->Next[1].Next)(
          v75,
          v74,
          v22,
          0LL,
          v99,
          0LL);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_p(v76, &EventEvictAllocation, v77, v105);
        v78 = v105;
        v79 = (_QWORD *)(v105 + 328);
        v22 = *(_QWORD *)(v105 + 328);
        v80 = *(_QWORD **)(v105 + 336);
        if ( *(_QWORD *)(v22 + 8) != v105 + 328 || (_QWORD *)*v80 != v79 )
          __fastfail(3u);
        *v80 = v22;
        *(_QWORD *)(v22 + 8) = v80;
        *v79 = 0LL;
        *(_QWORD *)(v78 + 336) = 0LL;
        v24 = Next;
      }
      while ( Next != (struct _MDL *)(a1 + 3752) );
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 2192LL) + 48LL * *(unsigned int *)(v20 + 404) + 16) & 4) != 0 )
      VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v20);
    v25 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v19 + 224) + 40LL))(
            *(_QWORD *)(v19 + 224),
            v19,
            0LL);
    v15 = v25;
    if ( v25 >= 0 )
      break;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_116;
    v81 = WdLogNewEntry5_WdTrace(v26);
    *(_QWORD *)(v81 + 24) = v19;
    *(_QWORD *)(v81 + 32) = v15;
LABEL_114:
    WdLogNewEntry5_WdTrace(v18);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v82) + 24) = v10;
LABEL_116:
    v83 = *(_QWORD *)(v13 + 224);
    if ( v83 )
    {
      if ( *(_DWORD *)(v13 + 504) != -1 )
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(
          *(VIDMM_CPU_HOST_APERTURE **)(v83 + 504),
          (struct _VIDMM_GLOBAL_ALLOC *)v13);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v13 + 224) + 24LL))(
        *(_QWORD *)(v13 + 224),
        v13,
        *(_QWORD *)(v13 + 208),
        *(_QWORD *)(v13 + 16));
      *(_QWORD *)(v13 + 224) = 0LL;
      *(_QWORD *)(v13 + 208) = 0LL;
    }
    v16 = v13 + 512;
    ExReleasePushLockExclusiveEx(v13 + 512, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v84, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v85, (struct _LIST_ENTRY *)(a1 + 3752));
    v88 = WdLogNewEntry5_WdWarning(v87, v86);
    *(_QWORD *)(v88 + 32) = a3;
    *(_QWORD *)(v88 + 24) = v10;
    WdLogEvent5_WdWarning(v88);
    if ( a3 || (*(_DWORD *)(v13 + 76) & 0x40) == 0 || a4 )
      goto LABEL_22;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v13 + 16) + (*(_QWORD *)(v13 + 16) >> 2));
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v19 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  v102 = 1;
  LODWORD(v15) = 0;
  ExReleasePushLockExclusiveEx(v13 + 512, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  v7 = v106;
LABEL_23:
  if ( (*(_DWORD *)(v13 + 76) & 0x100000) != 0 )
  {
    LODWORD(v15) = -1071775466;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_150;
    v89 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v89[5] = 16138LL;
LABEL_149:
    v89[4] = v13;
    v89[3] = v10;
    goto LABEL_150;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2244LL) || *(_BYTE *)(*(_QWORD *)(a1 + 16) + 665LL) )
  {
    LODWORD(v15) = -1073741130;
    *v7 = 0;
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_150;
    v89 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
    v89[5] = 16146LL;
    goto LABEL_149;
  }
  if ( (int)v15 < 0 )
  {
    *v106 = 1;
    *v112 = (struct VIDMM_ALLOC *)v10;
    return (unsigned int)v15;
  }
  if ( !*((_BYTE *)v10 + 26) )
  {
    if ( v10[18] )
    {
      if ( (*(_BYTE *)(a1 + 40872) & 4) != 0 )
      {
        if ( (*(_DWORD *)(v13 + 80) & 0x80u) == 0
          || (v90 = **(_DWORD **)(v13 + 520), (v90 & 8) != 0)
          || (v90 & 0x20000000) != 0 )
        {
          KeStackAttachProcess(*(PRKPROCESS *)(*v10)[1], &ApcState);
          v91 = v10[18];
          v15 = (int)VidMmiEnsureVirtualAddressRangeValid(v91, *(_QWORD *)(v13 + 8));
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v15 < 0 )
          {
            v94 = WdLogNewEntry5_WdAssertion(v93, v92);
            *(_QWORD *)(v94 + 24) = v91;
            *(_QWORD *)(v94 + 32) = v15;
            WdLogEvent5_WdAssertion(v94);
            *v106 = 0;
            goto LABEL_150;
          }
        }
      }
    }
    *((_BYTE *)v10 + 26) = 1;
  }
  v27 = *(unsigned __int8 *)(a1 + 40872);
  if ( (v27 & 1) == 0 )
    goto LABEL_32;
  LOBYTE(v27) = (unsigned __int8)v27 >> 3;
  if ( ((unsigned __int8)v27 & ((*(_DWORD *)(v13 + 76) & 0x100) != 0)) != 0 )
    goto LABEL_32;
  v40 = *(_QWORD *)(v13 + 136);
  v41 = *(_DWORD *)(v40 + 80) & 0x1001;
  if ( v41 )
  {
    v104 = 0;
    v109 = 0LL;
  }
  else
  {
    if ( (*(_DWORD *)(v40 + 80) & 0x1000) != 0 )
      v104 = 0;
    else
      v104 = *(_DWORD *)(v40 + 16) + 1;
    v109 = *(_QWORD *)(v13 + 144);
  }
  Next = 0LL;
  if ( v41 )
  {
    Next = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v13, 0LL);
    if ( !Next )
    {
      v95 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v95 + 24) = v13;
      WdLogEvent5_WdAssertion(v95);
      LODWORD(v15) = -1073741801;
      goto LABEL_150;
    }
  }
  v42 = *v10;
  v105 = -1LL;
  v110 = 0LL;
  v43 = v42[1];
  v27 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 200LL);
  v44 = *(__int64 **)(*(_QWORD *)(v43 + 16) + 8 * v27);
  if ( v44 && (v27 = *v44, *(_DWORD *)(*v44 + 40864)) )
  {
    if ( (*(_DWORD *)(v43 + 48) & 2) != 0 )
      v45 = *(struct _KTHREAD ***)(v27 + 8LL * (*(_DWORD *)(v13 + 76) & 0x3F) + 40352);
    else
      v45 = (struct _KTHREAD **)v44[58];
  }
  else
  {
    v45 = 0LL;
  }
  v46 = v45 + 7;
  LOBYTE(v27) = 0;
  v108 = (CVirtualAddressAllocator *)v45;
  v101 = 0;
  if ( v45[8] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v46, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v96 = *((_DWORD *)v46 + 4);
        if ( v96 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v27, &EventBlockThread, v47, v96);
      }
      ExAcquirePushLockExclusiveEx(v46, 0LL);
    }
    LOBYTE(v27) = 1;
    v45 = (struct _KTHREAD **)v108;
    v46[1] = KeGetCurrentThread();
    v101 = 1;
  }
  v48 = 0;
  v49 = (__int64 **)v10[16];
  v50 = 0;
  v103 = 0;
  if ( v49 == v10 + 16 )
  {
LABEL_66:
    if ( (_BYTE)v27 )
    {
      v46[1] = 0LL;
      ExReleasePushLockExclusiveEx(v46, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v48 && v50 )
    {
      v54 = v108;
      v55 = v110;
      v56 = v105;
      do
      {
        if ( (v50 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v54, v6, v56, v55);
        ++v6;
        v50 >>= 1;
      }
      while ( v50 );
      v10 = v113;
      v13 = v111;
    }
LABEL_32:
    if ( (*((_DWORD *)v10 + 7) & 3) != 2 )
    {
      v28 = v10[1];
      v29 = **v10;
      v30 = (DXGPROCESS **)(*v10)[1];
      v31 = *(unsigned int **)(v29 + 136);
      if ( g_IsInternalReleaseOrDbg )
      {
        v98 = WdLogNewEntry5_WdTrace(v27);
        *(_QWORD *)(v98 + 24) = v10;
        *(_QWORD *)(v98 + 32) = v28;
      }
      v32 = v10 + 7;
      v33 = v28[5] + 56LL * v31[5];
      ++*(_DWORD *)v33;
      *(_QWORD *)(v33 + 8) += *(_QWORD *)(v29 + 16);
      *(_QWORD *)(v33 + 48) = v28;
      v34 = *(__int64 **)(v33 + 40);
      if ( *v34 != v33 + 32 )
        __fastfail(3u);
      *v32 = v33 + 32;
      v10[8] = v34;
      *v34 = (__int64)v32;
      *(_QWORD *)(v33 + 40) = v32;
      VIDMM_PROCESS::AddCommitment(
        v30,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v33,
        *(_DWORD *)(*(_QWORD *)(*v28 + 24) + 200LL),
        (struct VIDMM_SEGMENT *)v31,
        *(_DWORD *)v33 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v29);
      *((_DWORD *)v10 + 7) = *((_DWORD *)v10 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v29 + 160);
      *((_DWORD *)v10 + 7) |= 0x10u;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v100) = *(_DWORD *)(*(_QWORD *)(v13 + 136) + 16LL) + 1;
        Template_pqx((unsigned int)v100, &EventPageInAllocation, v35, v10, v100, *(_QWORD *)(v13 + 144));
      }
    }
    *(_BYTE *)(v13 + 98) = 1;
    *v106 = 0;
    return (unsigned int)v15;
  }
  while ( 2 )
  {
    v51 = v49 - 3;
    if ( ((_DWORD)v49[5] & 0x400) != 0 )
    {
      v48 = v103;
LABEL_64:
      v49 = (__int64 **)*v49;
      if ( v49 == v10 + 16 )
      {
        v27 = v101;
        goto LABEL_66;
      }
      v45 = (struct _KTHREAD **)v108;
      continue;
    }
    break;
  }
  LODWORD(v15) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   (CVirtualAddressAllocator *)v45,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v49 - 3),
                   *(_DWORD *)(v13 + 76) & 0x3F,
                   v104,
                   (unsigned __int64)v51[9] + v109,
                   Next,
                   0,
                   v112);
  if ( (int)v15 >= 0 )
  {
    v50 |= 1 << ((*((_DWORD *)v51 + 16) >> 4) & 0x3F);
    if ( v105 >= (unsigned __int64)v51[12] )
      v105 = (unsigned __int64)v51[12];
    if ( v110 <= (unsigned __int64)v51[13] )
      v110 = (unsigned __int64)v51[13];
    v48 = 1;
    v103 = 1;
    goto LABEL_64;
  }
  v97 = WdLogNewEntry5_WdWarning(v53, v52);
  *(_QWORD *)(v97 + 24) = v10;
  *(_QWORD *)(v97 + 32) = 16246LL;
  WdLogEvent5_WdWarning(v97);
  if ( v101 )
  {
    v46[1] = 0LL;
    ExReleasePushLockExclusiveEx(v46, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v15 == -1073741267 )
    *v106 = 1;
LABEL_150:
  if ( v102 )
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v13 + 136),
      (struct _VIDMM_GLOBAL_ALLOC *)v13,
      0LL,
      0LL);
  return (unsigned int)v15;
}
