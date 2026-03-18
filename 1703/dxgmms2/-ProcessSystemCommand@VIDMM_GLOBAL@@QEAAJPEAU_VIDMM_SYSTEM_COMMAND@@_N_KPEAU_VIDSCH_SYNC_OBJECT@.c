/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0091A78 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00016C4 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001F4D4 (Template_p.c)
 *     ?XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z @ 0x1C004777C (-XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D3B0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C004D5A4 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D6DC (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0052CB0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0052F84 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055A78 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0057288 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0058168 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058948 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005928C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005B5E8 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006ED24 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006EEDC (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006EF28 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006F018 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006F5EC (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C006F99C (VidSchSignalPagingFences.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0073490 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0094F98 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00955F4 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009718C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A0B04 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00A0F9C (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1BF4 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A1E7C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3834 (-ResumeFlipQueuesIfSuspendedForMove@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A39B0 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C00A3DBC (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A4464 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00A4B08 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C00A9660 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00A9864 (-FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00A9AD8 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C00ACE6C (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        struct _RTL_BALANCED_NODE *a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  int v7; // eax
  int v8; // r12d
  __int64 v9; // r13
  unsigned int v10; // esi
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 k; // rsi
  __int64 v17; // r15
  __int64 v18; // r10
  int v19; // r9d
  bool v20; // cl
  _DWORD *v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int m; // esi
  __int64 n; // rbx
  VIDMM_MEMORY_SEGMENT *v26; // rcx
  __int64 i; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  unsigned int j; // eax
  __int64 v31; // rcx
  char v32; // dl
  int v33; // ebx
  __int64 v34; // rsi
  VIDMM_SEGMENT *v35; // rcx
  int v36; // eax
  struct _RTL_BALANCED_NODE *v37; // rsi
  struct _VIDSCH_SYNC_OBJECT *v38; // rcx
  __int64 v39; // rbx
  VIDMM_GLOBAL *v40; // rcx
  __int64 v41; // r10
  __int64 v42; // r8
  struct _KTHREAD ***v43; // rcx
  VIDMM_GLOBAL *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  CVirtualAddressAllocator *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 **v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  VIDMM_SEGMENT *v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 ii; // rbx
  __int64 v60; // rcx
  __int64 v61; // rcx
  _QWORD *v62; // rax
  _DWORD *v63; // rax
  int v64; // r9d
  struct _KEVENT *v65; // r12
  __int64 v66; // r15
  unsigned int v67; // esi
  __int64 v68; // r14
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 v71; // r8
  __int64 v72; // rcx
  unsigned int v73; // ecx
  struct _VIDSCH_SYNC_OBJECT *v75; // [rsp+28h] [rbp-D8h]
  struct _RTL_BALANCED_NODE *v76; // [rsp+60h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v77; // [rsp+68h] [rbp-98h]
  char v78; // [rsp+70h] [rbp-90h]
  char v79; // [rsp+71h] [rbp-8Fh]
  char v80; // [rsp+72h] [rbp-8Eh] BYREF
  bool v81; // [rsp+73h] [rbp-8Dh] BYREF
  char v82[4]; // [rsp+74h] [rbp-8Ch] BYREF
  struct _RTL_BALANCED_NODE *v83; // [rsp+78h] [rbp-88h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v84; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v85[2]; // [rsp+88h] [rbp-78h] BYREF
  struct _RTL_BALANCED_NODE *v86; // [rsp+98h] [rbp-68h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v87; // [rsp+A0h] [rbp-60h] BYREF
  struct VIDMM_ALLOC *v88; // [rsp+A8h] [rbp-58h] BYREF
  struct VIDMM_ALLOC *v89; // [rsp+B0h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-48h] BYREF
  struct _KAPC_STATE v91; // [rsp+E8h] [rbp-18h] BYREF
  struct _KAPC_STATE v92; // [rsp+118h] [rbp+18h] BYREF

  v77 = a5;
  v84 = a5;
  v7 = *(_DWORD *)a2;
  v8 = 0;
  ++*((_QWORD *)this + 575);
  LODWORD(v9) = 0;
  v10 = 0;
  v76 = a4;
  v78 = a3;
  v83 = a4;
  *((_DWORD *)this + 2) = v7;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 805) = 0LL;
  for ( *((_QWORD *)this + 806) = 0LL; v10 < *((_DWORD *)this + 1604); *((_DWORD *)this + v11 + 958) = 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)this + v10 + 143));
    v11 = v10;
    if ( *((_DWORD *)this + v10 + 414) != *((_DWORD *)this + v10 + 478)
      || *((_DWORD *)this + v10 + 542) != *((_DWORD *)this + v10 + 606) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v12[3] = 270LL;
      v12[4] = 33LL;
      v12[5] = this;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    ++v10;
    *((_DWORD *)this + v11 + 1022) = *((_DWORD *)this + v11 + 414);
    *((_DWORD *)this + v11 + 1086) = *((_DWORD *)this + v11 + 542);
  }
  v13 = *(int *)a2;
  v14 = 0x1C0000000uLL;
  switch ( (int)v13 )
  {
    case 101:
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
      {
        v28 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * i);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 136LL))(v28);
      }
      v29 = 0LL;
      for ( j = 0; j < *((_DWORD *)this + 1604); ++j )
      {
        v31 = *((_QWORD *)this + 5021) + 472LL * j;
        v32 = *(_BYTE *)(v31 + 436);
        if ( (v32 & 0x10) != 0 )
        {
          v29 |= 1LL << j;
          *(_BYTE *)(v31 + 436) = v32 & 0xEF;
        }
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, v29);
      goto LABEL_119;
    case 102:
      v15 = *((_DWORD *)a2 + 10);
      for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 926); k = (unsigned int)(k + 1) )
      {
        v17 = 8 * k;
        v18 = *(_QWORD *)(8 * k + *((_QWORD *)this + 464));
        v19 = *(_DWORD *)(v18 + 80);
        a3 = v19 & 0x1001;
        v20 = (v19 & 0x1001) != 0
           || *((_DWORD *)this + 10033) == -1
           || (v15 & 0x40) != 0 && *(_QWORD *)(v18 + 256) > (unsigned __int64)qword_1C003C3E8;
        LOBYTE(v14) = (v19 & 0x1001) != 0
                   || *((_DWORD *)this + 10033) == -1
                   || *(_QWORD *)(v18 + 256) > (unsigned __int64)qword_1C003C3E8;
        if ( ((v19 & 0x80) == 0 || (v15 & 2) == 0 || !v20)
          && ((v19 & 0x100) == 0 || (v15 & 4) == 0)
          && ((v19 & 0x1001) != 0 || (v15 & 0x10) == 0) )
        {
          if ( (v19 & 0x80) != 0 && (v15 & 0x20) != 0 && (_BYTE)v14 )
          {
            if ( (v19 & 0x1001) == 0 )
              VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v18, v15);
          }
          else
          {
            VIDMM_SEGMENT::PurgeContent(v18, v15, *((_QWORD *)a2 + 6));
            if ( (v15 & 8) == 0 )
            {
              v21 = *(_DWORD **)(v17 + *((_QWORD *)this + 464));
              v22 = *((_QWORD *)this + 5021) + 472LL * (unsigned int)v21[101];
              if ( (v21[20] & 0x1000) != 0 )
                v23 = 0;
              else
                v23 = v21[4] + 1;
              if ( v23 == *(_DWORD *)(v22 + 56) || v23 == *(_DWORD *)(v22 + 40) )
                *(_BYTE *)(v22 + 436) |= 0x80u;
              if ( v23 == *(_DWORD *)(v22 + 64) || v23 == *(_DWORD *)(v22 + 48) )
                *(_BYTE *)(v22 + 437) |= 1u;
            }
            v14 = *(unsigned int *)(*(_QWORD *)(v17 + *((_QWORD *)this + 464)) + 392LL);
            if ( (_DWORD)v14 != -1 )
              (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 5008))(*((_QWORD *)this + 5009), v14, 0LL);
          }
        }
      }
      for ( m = 0; m < *((_DWORD *)this + 1604); ++m )
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1u, m);
      if ( (v15 & 8) == 0 )
      {
        VIDMM_GLOBAL::PurgePageTables(this, v15);
        v8 = 1;
        VIDMM_GLOBAL::DoDeferredUnlock(this);
      }
      if ( (v15 & 0x20) != 0 )
      {
        for ( n = 0LL; (unsigned int)n < *((_DWORD *)this + 926); n = (unsigned int)(n + 1) )
        {
          v26 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)this + 464) + 8 * n);
          if ( (*((_DWORD *)v26 + 20) & 0x1001) == 0 )
            VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v26);
        }
      }
      goto LABEL_119;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_119;
    case 104:
      LODWORD(v9) = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, *((__int64 ***)a2 + 2), 4, 0, v82, &v89);
      goto LABEL_119;
    case 105:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 0LL);
      goto LABEL_119;
    case 106:
      VIDMM_GLOBAL::ReportVidMmStateWorker(this);
      goto LABEL_119;
    case 107:
      LODWORD(v9) = VIDMM_GLOBAL::RunApertureCoherencyTest(this);
      goto LABEL_119;
    case 108:
      LODWORD(v9) = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(this);
      goto LABEL_119;
    case 110:
      v33 = 0;
      if ( *((int *)this + 926) > 0 )
      {
        v34 = 0LL;
        do
        {
          v35 = *(VIDMM_SEGMENT **)(v34 + *((_QWORD *)this + 464));
          v36 = *((_DWORD *)v35 + 20);
          if ( (v36 & 0x1001) == 0 && (v36 & 4) != 0 )
          {
            LODWORD(v9) = VIDMM_SEGMENT::SuspendCpuAccess(v35);
            if ( (int)v9 < 0 )
              break;
          }
          ++v33;
          v34 += 8LL;
        }
        while ( v33 < *((_DWORD *)this + 926) );
      }
      goto LABEL_119;
    case 112:
      v39 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v39 + 136) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v39 + 136) + 48LL))(
          *(_QWORD *)(v39 + 136),
          v39,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v39 + 264) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v39 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v40, (struct _VIDMM_GLOBAL_ALLOC *)v39);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v39 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_119;
    case 114:
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &ApcState);
      LODWORD(v9) = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v44, a2);
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_119;
    case 115:
      v47 = *((_QWORD *)a2 + 6);
      v48 = *(CVirtualAddressAllocator **)(v47 + 464);
      if ( v48 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v92);
          CVirtualAddressAllocator::DestroyVaAllocator(v48, v49, v50);
          KeUnstackDetachProcess(&v92);
        }
        else
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v47 + 464), 0x1C0000000LL, a3);
        }
        *(_QWORD *)(*((_QWORD *)a2 + 6) + 464LL) = 0LL;
      }
      goto LABEL_119;
    case 116:
      LODWORD(v9) = VIDMM_GLOBAL::PageInDeviceInternal(this, *((struct VIDMM_DEVICE **)a2 + 3), 0, &v81, &v88);
      goto LABEL_119;
    case 117:
      KeStackAttachProcess(**((PRKPROCESS **)this + 5040), &v91);
      LODWORD(v9) = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                      this,
                      *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                      1u);
      KeUnstackDetachProcess(&v91);
      goto LABEL_119;
    case 118:
      LODWORD(v9) = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
      if ( (int)v9 < 0 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v45, v14);
        *(_QWORD *)(v46 + 24) = 9032LL;
        WdLogEvent5_WdAssertion(v46);
      }
      goto LABEL_119;
    case 120:
      LODWORD(v9) = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                      this,
                      *((struct _KTHREAD ***)a2 + 5),
                      *((struct _RTL_BALANCED_NODE **)a2 + 6),
                      a4,
                      *((_BYTE *)a2 + 64));
      goto LABEL_119;
    case 121:
      v41 = *((_QWORD *)a2 + 2);
      v42 = *(_QWORD *)(*(_QWORD *)v41 + 8LL);
      v43 = *(struct _KTHREAD ****)(*(_QWORD *)(v42 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
      if ( v43 && *((_DWORD *)*v43 + 10216) )
      {
        if ( (*(_DWORD *)(v42 + 48) & 2) != 0 )
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(
            (struct _KTHREAD **)(*v43)[(*(_DWORD *)(**(_QWORD **)v41 + 76LL) & 0x3F) + 5044],
            *((struct VIDMM_ALLOC **)a2 + 2));
        else
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v43[58], *((struct VIDMM_ALLOC **)a2 + 2));
      }
      else
      {
        CVirtualAddressAllocator::FreeAllocMappedVaRangeList(0LL, *((struct VIDMM_ALLOC **)a2 + 2));
      }
      goto LABEL_119;
    case 122:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
        *((_QWORD *)a2 + 5),
        0LL,
        *((_QWORD *)a2 + 6),
        *((_QWORD *)a2 + 7));
      goto LABEL_119;
    case 123:
      v51 = (__int64 **)*((_QWORD *)a2 + 5);
      if ( *((_BYTE *)a2 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v51, *((_BYTE *)a2 + 49));
        VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v51);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable((VIDMM_DEVICE *)v51, 0LL);
      }
      goto LABEL_119;
    case 124:
      VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        this,
        *((struct VIDMM_PROCESS **)a2 + 5),
        *((struct DXGDECOMMITITERATOR **)a2 + 6),
        *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
        *((_QWORD *)a2 + 8),
        *((unsigned __int64 **)a2 + 9));
      goto LABEL_119;
    case 126:
      v52 = *((_QWORD *)this + 464);
      v53 = *((unsigned int *)a2 + 11);
      v79 = 0;
      v85[1] = 0LL;
      v54 = *(VIDMM_SEGMENT **)(v52 + 8 * v53);
      v85[0] = *((_QWORD *)v54 + 6);
      VIDMM_SEGMENT::TrimMarkedForEvictionAllocations(v54, v85);
      v56 = VIDMM_GLOBAL::MoveResources(this, v55, *((unsigned int *)a2 + 10), *((unsigned int *)a2 + 11));
      v9 = v56;
      if ( v56 < 0 )
      {
        v58 = WdLogNewEntry5_WdWarning(v57, v14);
        *(_QWORD *)(v58 + 24) = v9;
        WdLogEvent5_WdWarning(v58);
      }
      goto LABEL_119;
    case 127:
      for ( ii = 0LL; (unsigned int)ii < *((_DWORD *)this + 926); ii = (unsigned int)(ii + 1) )
        VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * ii));
      goto LABEL_119;
    case 128:
      v60 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v60);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v60 + 176),
          *(void **)(v60 + 480),
          *(_QWORD *)(v60 + 448) - *(_QWORD *)(v60 + 488),
          *(_QWORD *)(v60 + 448));
      goto LABEL_119;
    case 129:
      v14 = *((_QWORD *)a2 + 5);
      v61 = *(_QWORD *)(v14 + 136);
      if ( v61 && *(_QWORD *)(v14 + 480) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v61 + 504), (struct _VIDMM_GLOBAL_ALLOC *)v14);
      goto LABEL_119;
    case 130:
      VIDMM_GLOBAL::XboxReevaluateAdapterBudgetsWorker(this, *((_BYTE *)a2 + 40), *((_QWORD *)a2 + 6));
      goto LABEL_119;
    case 205:
      VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 1LL);
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 164LL));
      v37 = v83;
      v38 = v84;
      v76 = v83;
      v77 = v84;
      goto LABEL_120;
    case 216:
      VIDMM_LINEAR_POOL::FreeMemoryBlocks(
        *(_QWORD *)(*((_QWORD *)a2 + 5) + 176LL),
        *((unsigned __int8 *)a2 + 48),
        a3,
        (char *)a2 + 56);
      goto LABEL_119;
    default:
      v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 0x1C0000000uLL, a3);
      v62[3] = 270LL;
      v62[4] = 23LL;
      v62[5] = -1073741811LL;
      v62[6] = v13;
      v62[7] = 0LL;
      WdLogEvent5_WdCriticalError(v62);
LABEL_119:
      v38 = v77;
      v37 = v76;
LABEL_120:
      v63 = (_DWORD *)*((_QWORD *)a2 + 4);
      if ( v63 )
        *v63 = v9;
      if ( v8 )
      {
        VIDMM_GLOBAL::EndPreparation(this, v14, 0LL, 0, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
        VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
        if ( v78 )
        {
          LOBYTE(v75) = 0;
          VidSchSignalPagingFences(
            *(_QWORD *)(*((_QWORD *)this + 2) + 416LL),
            (unsigned int)&v84,
            (unsigned int)&v83,
            v64,
            -1,
            (__int64)v75);
        }
        else
        {
          KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
        }
      }
      else
      {
        v65 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
        v66 = 0LL;
        *((_QWORD *)this + 466) = (char *)this + 3720;
        *((_QWORD *)this + 465) = (char *)this + 3720;
        v87 = v38;
        v86 = v37;
        if ( *((_DWORD *)this + 1604) )
        {
          do
          {
            v67 = 0;
            v68 = 472LL * (unsigned int)v66;
            if ( *(_DWORD *)(*((_QWORD *)this + 5021) + v68 + 24) )
            {
              do
              {
                v69 = *(_QWORD *)(*((_QWORD *)this + 464)
                                + 8LL * (v67 + *(_DWORD *)(*((_QWORD *)this + 5021) + v68 + 20)));
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 144LL))(v69);
                ++v67;
              }
              while ( v67 < *(_DWORD *)(*((_QWORD *)this + 5021) + v68 + 24) );
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_p((__int64)v38, &EventPagingEndPreparation, a3, *((_QWORD *)this + v66 + 143));
            if ( *((_DWORD *)this + v66 + 414) != *((_DWORD *)this + v66 + 478)
              || *((_DWORD *)this + v66 + 542) != *((_DWORD *)this + v66 + 606) )
            {
              VIDMM_GLOBAL::FlushPagingBufferInternal(this, v66, 0, 0LL, 0LL, 0, 0);
            }
            v38 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)this + v66 + 143);
            if ( v38 )
              *((_DWORD *)v38 + 43) = *((_DWORD *)v38 + 42);
            v66 = (unsigned int)(v66 + 1);
          }
          while ( (unsigned int)v66 < *((_DWORD *)this + 1604) );
          v37 = v76;
        }
        if ( *((_BYTE *)this + 41712) )
        {
          v70 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * *((unsigned int *)this + 10429));
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, *(_DWORD *)(v70 + 404));
          v71 = *(_QWORD *)(v70 + 48);
          v72 = *(_QWORD *)(v70 + 176);
          v80 = 0;
          VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
            v72,
            0,
            v71,
            0,
            (__int64)VIDMM_SEGMENT::ResumeDevicesOnAllocationCB,
            v70,
            0LL,
            (__int64)&v76,
            (__int64)&v80);
          VIDMM_SEGMENT::ResumeFlipQueuesIfSuspendedForMove((VIDMM_SEGMENT *)v70);
          *((_BYTE *)this + 41712) = 0;
          *((_DWORD *)this + 10429) = -1;
        }
        if ( v78 )
        {
          VidSchSignalSyncObjectsFromGpu(
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 416LL) + 56LL),
            *(__int64 **)(*(_QWORD *)(*((_QWORD *)this + 2) + 416LL) + 232LL),
            1u,
            (void **)&v87,
            0,
            &v86);
          v73 = *((_DWORD *)this + 1604);
          if ( v73 > 1 )
            VidSchWaitForPagingFence(
              *(_QWORD *)(*((_QWORD *)this + 2) + 416LL),
              v77,
              v37,
              (unsigned int)((1 << v73) - 1));
        }
        else if ( v65 )
        {
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          KeSetEvent(v65, 0, 0);
        }
        *((_QWORD *)this + 805) = 0LL;
        *((_QWORD *)this + 806) = 0LL;
        *((_DWORD *)this + 2) = 0;
      }
      return (unsigned int)v9;
  }
}
