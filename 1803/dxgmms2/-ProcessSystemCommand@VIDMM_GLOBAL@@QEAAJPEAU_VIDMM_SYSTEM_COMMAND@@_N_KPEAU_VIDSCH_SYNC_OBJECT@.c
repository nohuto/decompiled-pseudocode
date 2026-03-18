/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E224 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0001F20 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0023F00 (McTemplateK0p.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005ADD0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005B0C0 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C005E980 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EAB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005FB74 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00603BC (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0060D84 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0062F48 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076410 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C0076618 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0076744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00768D8 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007A19C (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F1DC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FAD0 (-DisableIoMmuIsolation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009FB64 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009FBD0 (-EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@11W4VIDMM_DEFRAGMENT_DIRECTION@@@Z @ 0x1C00A1FDC (-MoveResourcesSysCommandHelper@VIDMM_GLOBAL@@QEAAJIW4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A29E4 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A2ECC (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A3324 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00A3D10 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00A4044 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C00A5D4C (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00B0EE4 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ @ 0x1C00B1660 (-ValidateFrameBufferRotation@VIDMM_MEMORY_SEGMENT@@QEAAXXZ.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B2608 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B28B4 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00B3824 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B389C (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B47EC (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B527C (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00B5924 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z @ 0x1C00BADD4 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX_K1@Z.c)
 *     VidSchiResumeFlipQueues @ 0x1C00BC34C (VidSchiResumeFlipQueues.c)
 *     VidSchSignalPagingFences @ 0x1C00BE1E4 (VidSchSignalPagingFences.c)
 *     VidSchWaitForPagingFence @ 0x1C00BE7D0 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        struct _RTL_BALANCED_NODE *a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  char v7; // r15
  VIDMM_GLOBAL *v9; // rdi
  int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r8
  _QWORD *v19; // rdx
  CVirtualAddressAllocator *v20; // rcx
  __int64 v21; // r8
  unsigned int *v22; // rax
  struct VIDMM_ALLOC *v23; // r12
  struct _VIDSCH_SYNC_OBJECT *v24; // rcx
  bool v25; // si
  SIZE_T v26; // rbx
  __int64 v27; // r14
  unsigned int v28; // esi
  __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD **v32; // r14
  __int64 v33; // r9
  unsigned int v34; // ecx
  VIDMM_DEVICE *v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rax
  CVirtualAddressAllocator *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  struct _VIDMM_GLOBAL_ALLOC *v42; // rdx
  __int64 v43; // rcx
  VIDMM_GLOBAL *v44; // rcx
  int updated; // eax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // r14d
  unsigned int v49; // ebx
  __int64 v50; // r15
  __int64 v51; // r10
  int v52; // r9d
  char v53; // cl
  char v54; // dl
  _DWORD *v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  unsigned int v59; // r14d
  unsigned int j; // ebx
  VIDMM_MEMORY_SEGMENT *v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rdx
  char v67; // r8
  int v68; // ebx
  __int64 v69; // r14
  VIDMM_SEGMENT *v70; // rcx
  int v71; // eax
  VIDMM_GLOBAL *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  unsigned int i; // ebx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  int v79; // r9d
  __int64 v80; // rdx
  __int64 v81; // r8
  _QWORD *v82; // r15
  _QWORD *v83; // rax
  _QWORD *v84; // r13
  _QWORD *v85; // rcx
  __int64 v86; // rbx
  _QWORD *v87; // rax
  char v88; // [rsp+50h] [rbp-51h]
  bool v89[3]; // [rsp+51h] [rbp-50h] BYREF
  int inited; // [rsp+54h] [rbp-4Dh]
  unsigned __int64 v91; // [rsp+58h] [rbp-49h]
  struct _VIDSCH_SYNC_OBJECT *v92; // [rsp+60h] [rbp-41h]
  struct _VIDSCH_SYNC_OBJECT *v93; // [rsp+68h] [rbp-39h] BYREF
  void *v94; // [rsp+70h] [rbp-31h] BYREF
  struct VIDMM_ALLOC *v95; // [rsp+78h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-21h] BYREF

  v5 = *((int *)this + 2);
  v6 = *(int *)a2;
  v91 = (unsigned __int64)a4;
  v7 = a3;
  v94 = a4;
  v9 = this;
  v92 = a5;
  v10 = 0;
  v93 = a5;
  v11 = 0;
  v88 = a3;
  inited = 0;
  if ( (_DWORD)v5 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
    v46[3] = 270LL;
    v46[4] = 64LL;
    v46[5] = v9;
    v46[6] = v5;
    v46[7] = v6;
    WdLogEvent5_WdCriticalError(v46);
  }
  ++*((_QWORD *)v9 + 575);
  v12 = 0;
  v13 = *((unsigned int *)v9 + 1748);
  *((_DWORD *)v9 + 2) = v6;
  *((_DWORD *)v9 + 12) = -1;
  *((_QWORD *)v9 + 877) = 0LL;
  *((_QWORD *)v9 + 878) = 0LL;
  if ( (_DWORD)v13 )
  {
    do
    {
      v14 = v12;
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0p((__int64)this, &EventPagingStartPreparation, a3, *((_QWORD *)v9 + v12 + 143));
      this = (VIDMM_GLOBAL *)*((unsigned int *)v9 + v12 + 414);
      if ( (_DWORD)this != *((_DWORD *)v9 + v12 + 478) || *((_DWORD *)v9 + v12 + 542) != *((_DWORD *)v9 + v12 + 606) )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v13, a3);
        v47[3] = 270LL;
        v47[4] = 33LL;
        v47[5] = v9;
        v47[6] = 0LL;
        v47[7] = 0LL;
        WdLogEvent5_WdCriticalError(v47);
        this = (VIDMM_GLOBAL *)*((unsigned int *)v9 + v12 + 414);
      }
      v15 = *((_DWORD *)v9 + v12++ + 542);
      *((_DWORD *)v9 + v14 + 1086) = v15;
      *((_DWORD *)v9 + v14 + 958) = 0;
      *((_DWORD *)v9 + v14 + 1022) = (_DWORD)this;
      v13 = *((unsigned int *)v9 + 1748);
    }
    while ( v12 < (unsigned int)v13 );
  }
  v16 = *(int *)a2;
  if ( (_DWORD)v16 == 121 )
  {
    v17 = *((_QWORD *)a2 + 2);
    v18 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
    v19 = *(_QWORD **)(*(_QWORD *)(v18 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)v9 + 3) + 200LL));
    if ( v19 && *(_DWORD *)(*v19 + 41440LL) )
    {
      if ( (*(_DWORD *)(v18 + 88) & 2) != 0 )
        v20 = *(CVirtualAddressAllocator **)(*v19 + 8LL * (*(_DWORD *)(**(_QWORD **)v17 + 76LL) & 0x3F) + 40928);
      else
        v20 = (CVirtualAddressAllocator *)v19[62];
    }
    else
    {
      v20 = 0LL;
    }
    CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v20, *((struct VIDMM_ALLOC **)a2 + 2));
    goto LABEL_15;
  }
  v21 = 0x1C0000000uLL;
  switch ( (int)v16 )
  {
    case 101:
      v62 = 0;
      if ( *((_DWORD *)v9 + 926) )
      {
        do
        {
          v63 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * v62);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 152LL))(v63);
          ++v62;
        }
        while ( v62 < *((_DWORD *)v9 + 926) );
        LODWORD(v13) = *((_DWORD *)v9 + 1748);
      }
      v64 = 0LL;
      v65 = 0;
      if ( (_DWORD)v13 )
      {
        do
        {
          v66 = *((_QWORD *)v9 + 5090) + 1560LL * v65;
          v67 = *(_BYTE *)(v66 + 436);
          if ( (v67 & 0x10) != 0 )
          {
            v64 |= 1LL << v65;
            *(_BYTE *)(v66 + 436) = v67 & 0xEF;
          }
          ++v65;
        }
        while ( v65 < *((_DWORD *)v9 + 1748) );
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(v9, v64);
      goto LABEL_15;
    case 102:
      v48 = 0;
      v49 = *((_DWORD *)a2 + 10);
      if ( !*((_DWORD *)v9 + 926) )
        goto LABEL_101;
      break;
    case 103:
      VIDMM_GLOBAL::CleanupPrimaryAllocation(this, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_15;
    case 104:
      v11 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v9, *((__int64 ***)a2 + 2), 4, 0, v89, &v95);
      inited = v11;
      goto LABEL_15;
    case 105:
      VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v9, *((struct VIDMM_ALLOC **)a2 + 2), 0LL);
      goto LABEL_15;
    case 106:
      VIDMM_GLOBAL::ReportVidMmStateWorker(v9);
      goto LABEL_15;
    case 107:
      v11 = VIDMM_GLOBAL::RunApertureCoherencyTest(v9);
      inited = v11;
      goto LABEL_15;
    case 108:
      v11 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(v9);
      inited = v11;
      goto LABEL_15;
    case 110:
      v68 = 0;
      if ( *((int *)v9 + 926) > 0 )
      {
        v69 = 0LL;
        do
        {
          v70 = *(VIDMM_SEGMENT **)(v69 + *((_QWORD *)v9 + 464));
          v71 = *((_DWORD *)v70 + 20);
          if ( (v71 & 0x1001) == 0 && (v71 & 4) != 0 )
          {
            inited = VIDMM_SEGMENT::SuspendCpuAccess(v70);
            v11 = inited;
            if ( inited < 0 )
              break;
          }
          ++v68;
          v69 += 8LL;
        }
        while ( v68 < *((_DWORD *)v9 + 926) );
      }
      goto LABEL_15;
    case 112:
      v37 = *((_QWORD *)a2 + 5);
      if ( *(_QWORD *)(v37 + 136) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v37 + 136) + 48LL))(
          *(_QWORD *)(v37 + 136),
          v37,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v37 + 264) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(this);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v9, *(_DWORD *)(v37 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::EvictTemporaryAllocation(v72, (struct _VIDMM_GLOBAL_ALLOC *)v37);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v9, *(_DWORD *)(v37 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      }
      goto LABEL_15;
    case 113:
      v11 = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
              this,
              (struct _VIDMM_SYSTEM_COMMAND *)((char *)a2 + 40),
              &v95);
      inited = v11;
      goto LABEL_15;
    case 114:
      KeStackAttachProcess(**((PRKPROCESS **)v9 + 5112), &ApcState);
      updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v44, a2);
      goto LABEL_61;
    case 115:
      v38 = *((_QWORD *)a2 + 6);
      v39 = *(CVirtualAddressAllocator **)(v38 + 496);
      if ( v39 )
      {
        if ( *((_QWORD *)a2 + 5) )
        {
          KeStackAttachProcess(**((PRKPROCESS **)v9 + 5112), &ApcState);
          CVirtualAddressAllocator::DestroyVaAllocator(v39, v40, v41);
          KeUnstackDetachProcess(&ApcState);
        }
        else
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*(CVirtualAddressAllocator **)(v38 + 496), v13, 0x1C0000000LL);
        }
        *(_QWORD *)(*((_QWORD *)a2 + 6) + 496LL) = 0LL;
      }
      goto LABEL_15;
    case 116:
      v11 = VIDMM_GLOBAL::PageInDeviceInternal(v9, *((struct VIDMM_DEVICE **)a2 + 3), 0, v89, &v95);
      inited = v11;
      goto LABEL_15;
    case 117:
      KeStackAttachProcess(**((PRKPROCESS **)v9 + 5112), &ApcState);
      updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                  v9,
                  *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                  1u);
LABEL_61:
      inited = updated;
      v11 = updated;
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_15;
    case 118:
      inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(v9, *((_DWORD *)a2 + 1), 0);
      v11 = inited;
      if ( inited < 0 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v74, v73);
        *(_QWORD *)(v75 + 24) = 9595LL;
        WdLogEvent5_WdAssertion(v75);
      }
      goto LABEL_15;
    case 120:
      v11 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
              v9,
              *((struct CVirtualAddressAllocator **)a2 + 5),
              *((struct _RTL_BALANCED_NODE **)a2 + 6),
              a4,
              *((_BYTE *)a2 + 64));
      inited = v11;
      goto LABEL_15;
    case 122:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
        *((_QWORD *)a2 + 5),
        0LL,
        *((_QWORD *)a2 + 6),
        *((_QWORD *)a2 + 7));
      goto LABEL_15;
    case 123:
      v36 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 5);
      if ( *((_BYTE *)a2 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v36, *((_BYTE *)a2 + 49));
        VIDMM_DEVICE::FaultAllAllocations(v36);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable(v36, 0);
      }
      goto LABEL_15;
    case 124:
      VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        v9,
        *((struct VIDMM_PROCESS **)a2 + 5),
        *((struct DXGDECOMMITITERATOR **)a2 + 6),
        *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)a2 + 56),
        *((_QWORD *)a2 + 8),
        *((unsigned __int64 **)a2 + 9));
      goto LABEL_15;
    case 126:
      VIDMM_GLOBAL::MoveResourcesSysCommandHelper(
        v9,
        *((unsigned int *)a2 + 1),
        *((unsigned int *)a2 + 10),
        *((unsigned int *)a2 + 11));
      goto LABEL_15;
    case 127:
      for ( i = 0; i < *((_DWORD *)v9 + 926); ++i )
        VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)v9 + 464) + 8LL * i));
      goto LABEL_15;
    case 128:
      v77 = *((_QWORD *)a2 + 5);
      if ( *((_DWORD *)a2 + 12) )
        VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v77);
      else
        VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(
          *(VIDMM_LINEAR_POOL **)(v77 + 152),
          *(void **)(v77 + 456),
          *(_QWORD *)(v77 + 424) - *(_QWORD *)(v77 + 464),
          *(_QWORD *)(v77 + 424));
      goto LABEL_15;
    case 129:
      v42 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 5);
      v43 = *((_QWORD *)v42 + 17);
      if ( v43 && *((_QWORD *)v42 + 56) )
        VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v43 + 488), v42);
      goto LABEL_15;
    case 130:
      v11 = VIDMM_GLOBAL::EnableIoMmuIsolation(v9);
      inited = v11;
      goto LABEL_15;
    case 131:
      VIDMM_GLOBAL::DisableIoMmuIsolation(v9);
      goto LABEL_15;
    case 205:
      LOBYTE(v21) = 1;
      VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v9, *((struct VIDMM_ALLOC **)a2 + 2), v21);
      goto LABEL_15;
    case 216:
      VIDMM_SEGMENT::ProcessUnblockMemoryRanges(
        *((_QWORD *)a2 + 5),
        *((unsigned __int8 *)a2 + 48),
        0x1C0000000uLL,
        (char *)a2 + 56);
      goto LABEL_15;
    default:
      v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v13, 0x1C0000000uLL);
      v78[3] = 270LL;
      v78[4] = 23LL;
      v78[5] = -1073741811LL;
      v78[6] = v16;
      v78[7] = 0LL;
      WdLogEvent5_WdCriticalError(v78);
      goto LABEL_15;
  }
  do
  {
    v50 = 8LL * v48;
    v51 = *(_QWORD *)(v50 + *((_QWORD *)v9 + 464));
    v21 = *(unsigned int *)(v51 + 80);
    v52 = *(_DWORD *)(v51 + 80) & 0x1001;
    if ( v52
      || *((_DWORD *)v9 + 10170) == -1
      || (v49 & 0x40) != 0 && *(_QWORD *)(v51 + 232) > (unsigned __int64)qword_1C0047420 )
    {
      v53 = 1;
      if ( v52 )
        goto LABEL_74;
    }
    else
    {
      v53 = 0;
    }
    if ( *((_DWORD *)v9 + 10170) != -1 && *(_QWORD *)(v51 + 232) <= (unsigned __int64)qword_1C0047420 )
    {
      v54 = 0;
      goto LABEL_75;
    }
LABEL_74:
    v54 = 1;
LABEL_75:
    if ( ((v21 & 0x80) == 0 || (v49 & 2) == 0 || !v53)
      && ((v21 & 0x100) == 0 || (v49 & 4) == 0)
      && (v52 || (v49 & 0x10) == 0) )
    {
      if ( (v21 & 0x80) != 0 && (v49 & 0x20) != 0 && v54 )
      {
        if ( !v52 )
          VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v51, v49);
      }
      else
      {
        VIDMM_SEGMENT::PurgeContent(v51, v49, *((_QWORD *)a2 + 6));
        if ( (v49 & 8) == 0 )
        {
          v55 = *(_DWORD **)(v50 + *((_QWORD *)v9 + 464));
          v56 = *((_QWORD *)v9 + 5090) + 1560LL * (unsigned int)v55[95];
          if ( (v55[20] & 0x1000) != 0 )
            v57 = 0;
          else
            v57 = v55[4] + 1;
          if ( v57 == *(_DWORD *)(v56 + 56) || v57 == *(_DWORD *)(v56 + 40) )
            *(_BYTE *)(v56 + 436) |= 0x80u;
          if ( v57 == *(_DWORD *)(v56 + 64) || v57 == *(_DWORD *)(v56 + 48) )
            *(_BYTE *)(v56 + 437) |= 1u;
        }
        v58 = *(unsigned int *)(*(_QWORD *)(v50 + *((_QWORD *)v9 + 464)) + 368LL);
        if ( (_DWORD)v58 != -1 )
          (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v9 + 5080))(*((_QWORD *)v9 + 5081), v58, 0LL);
      }
    }
    ++v48;
  }
  while ( v48 < *((_DWORD *)v9 + 926) );
  LODWORD(v13) = *((_DWORD *)v9 + 1748);
  v7 = v88;
LABEL_101:
  v59 = 0;
  if ( (_DWORD)v13 )
  {
    do
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)v9, 1u, v59++);
    while ( v59 < *((_DWORD *)v9 + 1748) );
  }
  if ( (v49 & 8) == 0 )
  {
    VIDMM_GLOBAL::PurgePageTables(v9, v49);
    v10 = 1;
    VIDMM_GLOBAL::DoDeferredUnlock(v9);
  }
  if ( (v49 & 0x20) != 0 )
  {
    for ( j = 0; j < *((_DWORD *)v9 + 926); ++j )
    {
      v61 = *(VIDMM_MEMORY_SEGMENT **)(*((_QWORD *)v9 + 464) + 8LL * j);
      if ( (*((_DWORD *)v61 + 20) & 0x1001) == 0 )
        VIDMM_MEMORY_SEGMENT::ValidateFrameBufferRotation(v61);
    }
  }
LABEL_15:
  v22 = (unsigned int *)*((_QWORD *)a2 + 4);
  if ( v22 )
    *v22 = v11;
  if ( v10 )
  {
    VIDMM_GLOBAL::EndPreparation(v9, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(v9);
    if ( v7 )
      VidSchSignalPagingFences(
        *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL),
        (unsigned int)&v93,
        (unsigned int)&v94,
        v79,
        -1,
        0);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    v23 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 1);
    v24 = v92;
    v25 = 0;
    v26 = v91;
    v27 = 0LL;
    *((_QWORD *)v9 + 466) = (char *)v9 + 3720;
    *((_QWORD *)v9 + 465) = (char *)v9 + 3720;
    v94 = v24;
    v93 = (struct _VIDSCH_SYNC_OBJECT *)v26;
    v95 = v23;
    v89[0] = 0;
    if ( *((_DWORD *)v9 + 1748) )
    {
      do
      {
        v28 = 0;
        v29 = 1560LL * (unsigned int)v27;
        if ( *(_DWORD *)(*((_QWORD *)v9 + 5090) + v29 + 24) )
        {
          do
          {
            v30 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (v28 + *(_DWORD *)(*((_QWORD *)v9 + 5090) + v29 + 20)));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 160LL))(v30);
            ++v28;
          }
          while ( v28 < *(_DWORD *)(*((_QWORD *)v9 + 5090) + v29 + 24) );
          v24 = v92;
        }
        if ( v88 )
          VIDMM_GLOBAL::SignalMonitoredFence(v9, v27, (VIDMM_FENCE_STORAGE_PAGE **)v24, v26, v89);
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0p((__int64)v24, &EventPagingEndPreparation, v21, *((_QWORD *)v9 + v27 + 143));
        if ( *((_DWORD *)v9 + v27 + 414) != *((_DWORD *)v9 + v27 + 478)
          || *((_DWORD *)v9 + v27 + 542) != *((_DWORD *)v9 + v27 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(v9, v27, 0, 0LL, 0LL, 0, 0);
        }
        v31 = *((_QWORD *)v9 + v27 + 143);
        if ( v31 )
          *(_DWORD *)(v31 + 172) = *(_DWORD *)(v31 + 168);
        v24 = v92;
        v27 = (unsigned int)(v27 + 1);
      }
      while ( (unsigned int)v27 < *((_DWORD *)v9 + 1748) );
      v25 = v89[0];
      v23 = v95;
      v11 = inited;
      v7 = v88;
      v26 = v91;
    }
    v32 = (_QWORD **)((char *)v9 + 42000);
    if ( *v32 != v32 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
      v82 = *v32;
      if ( *v32 != v32 )
      {
        do
        {
          v83 = (_QWORD *)*v82;
          v84 = v82 - 36;
          if ( *(_QWORD **)(*v82 + 8LL) != v82 || (v85 = (_QWORD *)v82[1], (_QWORD *)*v85 != v82) )
            __fastfail(3u);
          *v85 = v83;
          v83[1] = v85;
          *v82 = 0LL;
          v82 = v83;
          if ( (*((_DWORD *)v84 + 13) & 7) != 0 )
          {
            v86 = v84[4];
            v87 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v85, v80, v81);
            v87[3] = 270LL;
            v87[4] = 63LL;
            v87[5] = v84;
            v87[6] = v86;
            v87[7] = 0LL;
            WdLogEvent5_WdCriticalError(v87);
          }
          VIDMM_DEVICE::ResumeSchedulerDevice((VIDMM_DEVICE *)v84);
        }
        while ( v82 != v32 );
        v11 = inited;
        v26 = v91;
      }
      v7 = v88;
    }
    if ( *((_BYTE *)v9 + 42016) )
    {
      VidSchiResumeFlipQueues(*(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL), 0xFFFFFFFFLL);
      *((_BYTE *)v9 + 42016) = 0;
    }
    if ( !v7 || v25 )
    {
      if ( v23 )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v9, 0xFFFFFFFF);
        KeSetEvent((PRKEVENT)v23, 0, 0);
      }
    }
    else
    {
      v33 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL);
      if ( *(_BYTE *)(v33 + 54) )
        VidSchSignalSyncObjectsFromCpu((_QWORD *)1, (__int64)&v94, 0, (unsigned __int64 *)&v93, 0);
      else
        VidSchSignalSyncObjectsFromGpu(0LL, 0LL, *(_DWORD *)(v33 + 60), *(_QWORD **)(v33 + 240), 1u, &v94, 0, &v93);
      v34 = *((_DWORD *)v9 + 1748);
      if ( v34 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)v9 + 2) + 528LL), v92, v26, (unsigned int)((1 << v34) - 1));
    }
    *((_QWORD *)v9 + 877) = 0LL;
    *((_QWORD *)v9 + 878) = 0LL;
    *((_DWORD *)v9 + 2) = 0;
  }
  return v11;
}
