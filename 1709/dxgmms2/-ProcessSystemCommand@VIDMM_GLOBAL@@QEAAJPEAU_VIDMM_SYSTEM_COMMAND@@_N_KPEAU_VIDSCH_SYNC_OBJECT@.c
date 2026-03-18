/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0099174 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00011DC (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C00215B4 (McTemplateK0p.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C00518C0 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0051AC8 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051BF4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0051D88 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00547D0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00585D4 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C005A10C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005B25C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005BAA4 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C005C50C (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005E970 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0074CA0 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0074E58 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0074EA4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0074F94 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0075584 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00759EC (VidSchSignalPagingFences.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079AEC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C009C08C (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009CE18 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C009D790 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C009F698 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A90A4 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00A953C (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AA4A8 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AA760 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00AB38C (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00ABF24 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AC9B0 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AD058 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00B2408 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00B3930 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00B5850 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_CPU_HOST_APERTURE **this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // rsi
  struct _VIDSCH_SYNC_OBJECT *v6; // r15
  __int64 v7; // rbx
  VIDMM_GLOBAL *v9; // rdi
  int v10; // r12d
  int inited; // r13d
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // rdx
  struct _KTHREAD **v18; // rcx
  int *v19; // rax
  struct _VIDSCH_SYNC_OBJECT *v20; // r12
  struct _KEVENT *v21; // r15
  unsigned int v22; // r14d
  bool v23; // zf
  unsigned int v24; // esi
  __int64 v25; // rbp
  __int64 v26; // rcx
  _QWORD **v27; // rsi
  unsigned int v28; // ecx
  int v30; // eax
  __int64 **v31; // rbx
  __int64 v32; // rax
  CVirtualAddressAllocator *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v37; // rdx
  VIDMM_GLOBAL *v38; // rcx
  int updated; // eax
  __int64 v40; // rdx
  unsigned int v41; // ebx
  __int64 v42; // rsi
  __int64 v43; // r15
  __int64 v44; // r9
  int v45; // r10d
  bool v46; // dl
  unsigned int k; // esi
  unsigned int i; // ebx
  __int64 v49; // rcx
  unsigned int v50; // eax
  unsigned __int64 j; // rdx
  __int64 v52; // rcx
  char v53; // r8
  _DWORD *v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // r9d
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  unsigned int m; // ebx
  int v62; // ebx
  __int64 v63; // rsi
  int v64; // eax
  VIDMM_GLOBAL *v65; // rcx
  __int64 v66; // rax
  unsigned int n; // ebx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  _QWORD *v72; // r14
  _QWORD *v73; // rax
  _QWORD *v74; // rbp
  _QWORD *v75; // rcx
  __int64 v76; // rbx
  _QWORD *v77; // rax
  char v78; // [rsp+50h] [rbp-A8h]
  bool v79[7]; // [rsp+51h] [rbp-A7h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v80; // [rsp+58h] [rbp-A0h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v81; // [rsp+60h] [rbp-98h] BYREF
  __int64 v82; // [rsp+68h] [rbp-90h]
  __int64 v83; // [rsp+70h] [rbp-88h] BYREF
  struct VIDMM_ALLOC *v84; // [rsp+78h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v5 = *((int *)this + 2);
  v6 = (struct _VIDSCH_SYNC_OBJECT *)a4;
  v7 = *(int *)a2;
  v82 = a4;
  v9 = (VIDMM_GLOBAL *)this;
  v78 = a3;
  v10 = 0;
  v83 = a4;
  inited = 0;
  v81 = a5;
  v80 = a5;
  if ( (_DWORD)v5 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v59[3] = 270LL;
    v59[4] = 64LL;
    v59[5] = v9;
    v59[6] = v5;
    v59[7] = v7;
    WdLogEvent5_WdCriticalError(v59);
  }
  ++*((_QWORD *)v9 + 575);
  v12 = 0;
  *((_DWORD *)v9 + 2) = v7;
  *((_DWORD *)v9 + 12) = -1;
  *((_QWORD *)v9 + 805) = 0LL;
  for ( *((_QWORD *)v9 + 806) = 0LL; v12 < *((_DWORD *)v9 + 1604); *((_DWORD *)v9 + v13 + 958) = 0 )
  {
    if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)v9 + v12 + 143));
    v13 = v12;
    if ( *((_DWORD *)v9 + v12 + 414) != *((_DWORD *)v9 + v12 + 478)
      || *((_DWORD *)v9 + v12 + 542) != *((_DWORD *)v9 + v12 + 606) )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v60[3] = 270LL;
      v60[4] = 33LL;
      v60[5] = v9;
      v60[6] = 0LL;
      v60[7] = 0LL;
      WdLogEvent5_WdCriticalError(v60);
    }
    ++v12;
    *((_DWORD *)v9 + v13 + 1022) = *((_DWORD *)v9 + v13 + 414);
    *((_DWORD *)v9 + v13 + 1086) = *((_DWORD *)v9 + v13 + 542);
  }
  v14 = *(int *)a2;
  if ( (_DWORD)v14 == 121 )
  {
    v15 = *((_QWORD *)a2 + 2);
    v16 = *(_QWORD *)(*(_QWORD *)v15 + 8LL);
    v17 = *(_QWORD **)(*(_QWORD *)(v16 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)v9 + 3) + 200LL));
    if ( v17 && *(_DWORD *)(*v17 + 40864LL) )
    {
      if ( (*(_DWORD *)(v16 + 48) & 2) != 0 )
        v18 = *(struct _KTHREAD ***)(*v17 + 8LL * (*(_DWORD *)(**(_QWORD **)v15 + 76LL) & 0x3F) + 40352);
      else
        v18 = (struct _KTHREAD **)v17[62];
    }
    else
    {
      v18 = 0LL;
    }
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v18, *((struct VIDMM_ALLOC **)a2 + 2));
  }
  else
  {
    switch ( (int)v14 )
    {
      case 101:
        for ( i = 0; i < *((_DWORD *)v9 + 926); ++i )
        {
          v49 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * i);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 152LL))(v49);
        }
        v50 = 0;
        for ( j = 0LL; v50 < *((_DWORD *)v9 + 1604); ++v50 )
        {
          v52 = *((_QWORD *)v9 + 5021) + 1552LL * v50;
          v53 = *(_BYTE *)(v52 + 436);
          if ( (v53 & 0x10) != 0 )
          {
            j |= 1LL << v50;
            *(_BYTE *)(v52 + 436) = v53 & 0xEF;
          }
        }
        VIDMM_GLOBAL::RecommitGpuVirtualAddresses(v9, j);
        break;
      case 102:
        v41 = *((_DWORD *)a2 + 10);
        v42 = 0LL;
        if ( *((_DWORD *)v9 + 926) )
        {
          do
          {
            v43 = 8 * v42;
            v44 = *(_QWORD *)(8 * v42 + *((_QWORD *)v9 + 464));
            v45 = *(_DWORD *)(v44 + 80);
            a3 = v45 & 0x1001;
            LOBYTE(this) = (v45 & 0x1001) != 0
                        || *((_DWORD *)v9 + 10033) == -1
                        || (v41 & 0x40) != 0 && *(_QWORD *)(v44 + 232) > (unsigned __int64)qword_1C0040420;
            v46 = (v45 & 0x1001) != 0
               || *((_DWORD *)v9 + 10033) == -1
               || *(_QWORD *)(v44 + 232) > (unsigned __int64)qword_1C0040420;
            if ( (v45 & 0x80u) == 0 || (v41 & 2) == 0 || !(_BYTE)this )
            {
              LOBYTE(this) = (v45 & 0x100) != 0;
              if ( ((unsigned __int8)this & ((v41 & 4) != 0)) == 0 && ((v45 & 0x1001) != 0 || (v41 & 0x10) == 0) )
              {
                if ( (v45 & 0x80u) != 0 && (v41 & 0x20) != 0 && v46 )
                {
                  if ( (v45 & 0x1001) == 0 )
                    VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v44, v41);
                }
                else
                {
                  VIDMM_SEGMENT::PurgeContent(v44, v41, *((_QWORD *)a2 + 6));
                  if ( (v41 & 8) == 0 )
                  {
                    v54 = *(_DWORD **)(v43 + *((_QWORD *)v9 + 464));
                    v55 = *((_QWORD *)v9 + 5021) + 1552LL * (unsigned int)v54[95];
                    if ( (v54[20] & 0x1000) != 0 )
                      v56 = 0;
                    else
                      v56 = v54[4] + 1;
                    if ( v56 == *(_DWORD *)(v55 + 56) || v56 == *(_DWORD *)(v55 + 40) )
                      *(_BYTE *)(v55 + 436) |= 0x80u;
                    if ( v56 == *(_DWORD *)(v55 + 64) || v56 == *(_DWORD *)(v55 + 48) )
                      *(_BYTE *)(v55 + 437) |= 1u;
                  }
                  this = *(VIDMM_CPU_HOST_APERTURE ***)(v43 + *((_QWORD *)v9 + 464));
                  v57 = *((unsigned int *)this + 92);
                  if ( (_DWORD)v57 != -1 )
                    (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v9 + 5008))(*((_QWORD *)v9 + 5009), v57, 0LL);
                }
              }
            }
            v42 = (unsigned int)(v42 + 1);
          }
          while ( (unsigned int)v42 < *((_DWORD *)v9 + 926) );
          v6 = (struct _VIDSCH_SYNC_OBJECT *)v82;
        }
        for ( k = 0; k < *((_DWORD *)v9 + 1604); ++k )
          VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)v9, 1u, k);
        if ( (v41 & 8) == 0 )
        {
          VIDMM_GLOBAL::PurgePageTables(v9, v41);
          v10 = 1;
          VIDMM_GLOBAL::DoDeferredUnlock(v9);
        }
        if ( (v41 & 0x20) != 0 )
        {
          for ( m = 0; m < *((_DWORD *)v9 + 926); ++m )
          {
            this = *(VIDMM_CPU_HOST_APERTURE ***)(*((_QWORD *)v9 + 464) + 8LL * m);
            if ( ((_DWORD)this[10] & 0x1001) == 0 )
              VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation((VIDMM_MEMORY_SEGMENT *)this);
          }
        }
        break;
      case 103:
        VIDMM_GLOBAL::CleanupPrimaryAllocation((VIDMM_GLOBAL *)this, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
        break;
      case 104:
        inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)v9, *((__int64 ***)a2 + 2), 4, 0, v79, &v84);
        break;
      case 105:
        VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v9, *((struct VIDMM_ALLOC **)a2 + 2), 0LL);
        break;
      case 106:
        VIDMM_GLOBAL::ReportVidMmStateWorker(v9);
        break;
      case 107:
        v30 = VIDMM_GLOBAL::RunApertureCoherencyTest(v9);
        goto LABEL_39;
      case 108:
        v30 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(v9);
        goto LABEL_39;
      case 110:
        v62 = 0;
        if ( *((int *)v9 + 926) > 0 )
        {
          v63 = 0LL;
          do
          {
            this = *(VIDMM_CPU_HOST_APERTURE ***)(v63 + *((_QWORD *)v9 + 464));
            v64 = *((_DWORD *)this + 20);
            if ( (v64 & 0x1001) == 0 && (v64 & 4) != 0 )
            {
              inited = VIDMM_SEGMENT::SuspendCpuAccess((VIDMM_SEGMENT *)this);
              if ( inited < 0 )
                break;
            }
            ++v62;
            v63 += 8LL;
          }
          while ( v62 < *((_DWORD *)v9 + 926) );
        }
        break;
      case 112:
        v36 = *((_QWORD *)a2 + 5);
        if ( *(_QWORD *)(v36 + 136) )
        {
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v36 + 136) + 48LL))(
            *(_QWORD *)(v36 + 136),
            v36,
            0LL,
            0LL,
            0,
            0LL);
        }
        if ( *(_QWORD *)(v36 + 264) )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(this);
          VIDMM_GLOBAL::FlushPagingBufferInternal(v9, *(_DWORD *)(v36 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
          VIDMM_GLOBAL::EvictTemporaryAllocation(v65, (struct _VIDMM_GLOBAL_ALLOC *)v36);
          VIDMM_GLOBAL::FlushPagingBufferInternal(v9, *(_DWORD *)(v36 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        }
        break;
      case 114:
        KeStackAttachProcess(**((PRKPROCESS **)v9 + 5040), &ApcState);
        updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v38, a2);
        goto LABEL_55;
      case 115:
        v32 = *((_QWORD *)a2 + 6);
        v33 = *(CVirtualAddressAllocator **)(v32 + 496);
        if ( v33 )
        {
          if ( *((_QWORD *)a2 + 5) )
          {
            KeStackAttachProcess(**((PRKPROCESS **)v9 + 5040), &ApcState);
            CVirtualAddressAllocator::DestroyVaAllocator(v33, v34, v35);
            KeUnstackDetachProcess(&ApcState);
          }
          else
          {
            CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v32 + 496), 0x1C0000000LL, a3);
          }
          *(_QWORD *)(*((_QWORD *)a2 + 6) + 496LL) = 0LL;
        }
        break;
      case 116:
        v30 = VIDMM_GLOBAL::PageInDeviceInternal(v9, *((struct VIDMM_DEVICE **)a2 + 3), 0, v79, &v84);
        goto LABEL_39;
      case 117:
        KeStackAttachProcess(**((PRKPROCESS **)v9 + 5040), &ApcState);
        updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                    v9,
                    *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                    1u);
LABEL_55:
        inited = updated;
        KeUnstackDetachProcess(&ApcState);
        break;
      case 118:
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(v9, *((_DWORD *)a2 + 1), 0);
        if ( inited < 0 )
        {
          v66 = WdLogNewEntry5_WdAssertion(this, v40);
          *(_QWORD *)(v66 + 24) = 9527LL;
          WdLogEvent5_WdAssertion(v66);
        }
        break;
      case 120:
        v30 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                v9,
                *((struct _KTHREAD ***)a2 + 5),
                *((_QWORD *)a2 + 6),
                a4,
                *((_BYTE *)a2 + 64));
LABEL_39:
        inited = v30;
        break;
      case 122:
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
          *((_QWORD *)a2 + 5),
          0LL,
          *((_QWORD *)a2 + 6),
          *((_QWORD *)a2 + 7));
        break;
      case 123:
        v31 = (__int64 **)*((_QWORD *)a2 + 5);
        if ( *((_BYTE *)a2 + 48) )
        {
          VIDMM_DEVICE::IndefinitelySuspend(v31, *((_BYTE *)a2 + 49));
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v31);
        }
        else
        {
          VIDMM_DEVICE::EnsureSchedulable((VIDMM_DEVICE *)v31, 0LL);
        }
        break;
      case 124:
        VIDMM_GLOBAL::TrimOfferCommitmentInternal(
          v9,
          *((struct VIDMM_PROCESS **)a2 + 5),
          *((struct DXGDECOMMITITERATOR **)a2 + 6),
          *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
          *((_QWORD *)a2 + 8),
          *((unsigned __int64 **)a2 + 9));
        break;
      case 126:
        VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
          v9,
          *((unsigned int *)a2 + 1),
          *((unsigned int *)a2 + 10),
          *((unsigned int *)a2 + 11));
        break;
      case 127:
        for ( n = 0; n < *((_DWORD *)v9 + 926); ++n )
          VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)v9 + 464) + 8LL * n));
        break;
      case 128:
        v68 = *((_QWORD *)a2 + 5);
        if ( *((_DWORD *)a2 + 12) )
          VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v68);
        else
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
            *(VIDMM_LINEAR_POOL **)(v68 + 152),
            *(void **)(v68 + 456),
            *(_QWORD *)(v68 + 424) - *(_QWORD *)(v68 + 464),
            *(_QWORD *)(v68 + 424));
        break;
      case 129:
        v37 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
        this = (VIDMM_CPU_HOST_APERTURE **)*((_QWORD *)v37 + 17);
        if ( this && *((_QWORD *)v37 + 56) )
          VIDMM_CPU_HOST_APERTURE::OfferRange(this[61], v37);
        break;
      case 205:
        VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v9, *((struct VIDMM_ALLOC **)a2 + 2), 1LL);
        break;
      case 216:
        VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
          *((_QWORD *)a2 + 5),
          *((unsigned __int8 *)a2 + 48),
          a3,
          (char *)a2 + 56);
        break;
      default:
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, 0x1C0000000uLL, a3);
        v69[3] = 270LL;
        v69[4] = 23LL;
        v69[5] = -1073741811LL;
        v69[6] = v14;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
        break;
    }
  }
  v19 = (int *)*((_QWORD *)a2 + 4);
  if ( v19 )
    *v19 = inited;
  if ( v10 )
  {
    VIDMM_GLOBAL::EndPreparation(v9, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(v9);
    if ( v78 )
      VidSchSignalPagingFences(
        *(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL),
        (unsigned int)&v80,
        (unsigned int)&v83,
        v58,
        -1,
        0);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v20 = v81;
    v81 = v6;
    v21 = (struct _KEVENT *)*((_QWORD *)a2 + 1);
    v22 = 0;
    *((_QWORD *)v9 + 466) = (char *)v9 + 3720;
    *((_QWORD *)v9 + 465) = (char *)v9 + 3720;
    v23 = *((_DWORD *)v9 + 1604) == 0;
    v80 = v20;
    if ( !v23 )
    {
      do
      {
        v24 = 0;
        v25 = 1552LL * v22;
        if ( *(_DWORD *)(*((_QWORD *)v9 + 5021) + v25 + 24) )
        {
          do
          {
            v26 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (v24 + *(_DWORD *)(*((_QWORD *)v9 + 5021) + v25 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 160LL))(v26);
            ++v24;
          }
          while ( v24 < *(_DWORD *)(*((_QWORD *)v9 + 5021) + v25 + 24) );
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p((__int64)this, &EventPagingEndPreparation, a3, *((_QWORD *)v9 + v22 + 143));
        if ( *((_DWORD *)v9 + v22 + 414) != *((_DWORD *)v9 + v22 + 478)
          || *((_DWORD *)v9 + v22 + 542) != *((_DWORD *)v9 + v22 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(v9, v22, 0, 0LL, 0LL, 0, 0);
        }
        this = (VIDMM_CPU_HOST_APERTURE **)*((_QWORD *)v9 + v22 + 143);
        if ( this )
          *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
        ++v22;
      }
      while ( v22 < *((_DWORD *)v9 + 1604) );
    }
    v27 = (_QWORD **)((char *)v9 + 41424);
    if ( *v27 != v27 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
      v72 = *v27;
      while ( v72 != v27 )
      {
        v73 = (_QWORD *)*v72;
        v74 = v72 - 36;
        if ( *(_QWORD **)(*v72 + 8LL) != v72 || (v75 = (_QWORD *)v72[1], (_QWORD *)*v75 != v72) )
          __fastfail(3u);
        *v75 = v73;
        v73[1] = v75;
        *v72 = 0LL;
        v72 = v73;
        if ( (*((_DWORD *)v74 + 13) & 7) != 0 )
        {
          v76 = v74[4];
          v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v70, v71);
          v77[3] = 270LL;
          v77[4] = 63LL;
          v77[5] = v74;
          v77[6] = v76;
          v77[7] = 0LL;
          WdLogEvent5_WdCriticalError(v77);
        }
        VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v74);
      }
    }
    if ( *((_BYTE *)v9 + 41440) )
    {
      VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*((_QWORD *)v9 + 2) + 512LL));
      *((_BYTE *)v9 + 41440) = 0;
    }
    if ( v78 )
    {
      VidSchSignalSyncObjectsFromGpu(
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL) + 56LL),
        *(__int64 **)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL) + 240LL),
        1u,
        (void **)&v80,
        0,
        &v81);
      v28 = *((_DWORD *)v9 + 1604);
      if ( v28 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL), v20, v82, (unsigned int)((1 << v28) - 1));
    }
    else if ( v21 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
      KeSetEvent(v21, 0, 0);
    }
    *((_QWORD *)v9 + 805) = 0LL;
    *((_QWORD *)v9 + 806) = 0LL;
    *((_DWORD *)v9 + 2) = 0;
  }
  return (unsigned int)inited;
}
