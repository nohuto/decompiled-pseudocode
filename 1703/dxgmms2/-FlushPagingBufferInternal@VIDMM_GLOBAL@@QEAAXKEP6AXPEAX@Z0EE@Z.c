/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049610 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0057730 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00579C0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058548 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00587DC (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00594A0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AF48 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005B5E8 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C006EE60 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00942F0 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00949F8 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0095F3C (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A17A0 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0002BC0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006410 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0006490 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiSetPriorityContext @ 0x1C000FE48 (VidSchiSetPriorityContext.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0011164 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0011600 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C004FCEC (VidSchRegisterCompletionEvent.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0063BC0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006B1A0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchGetNodeOrdinal @ 0x1C006D18C (VidSchGetNodeOrdinal.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C009C6C4 (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int8 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  unsigned __int8 v7; // bl
  unsigned int v8; // r10d
  VIDMM_GLOBAL *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rcx
  bool v24; // al
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  bool v32; // zf
  __int64 v33; // rbx
  __int64 v34; // rcx
  size_t v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ebx
  __int64 *v38; // rax
  __int64 *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int128 v41; // xmm1
  struct _VIDMM_DMA_BUFFER *v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rax
  unsigned int v46; // r10d
  __int64 v47; // rax
  __int64 *v48; // rdx
  _QWORD *v49; // rcx
  _QWORD *v50; // rsi
  _QWORD *v51; // rcx
  _QWORD *v52; // rcx
  __int64 v53; // rdx
  _QWORD *v54; // rax
  VIDMM_GLOBAL **v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  VIDMM_DMA_POOL **v58; // rbx
  unsigned int v59; // r8d
  _QWORD *v60; // rdx
  _QWORD *v61; // rdx
  __int64 v62; // r8
  _QWORD *v63; // rax
  VIDMM_GLOBAL **v64; // r8
  _QWORD *v65; // rax
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  size_t v69; // rcx
  __int64 *v70; // rax
  KPRIORITY PriorityThread; // eax
  __int64 v72; // rax
  char v73; // [rsp+40h] [rbp-C0h]
  char v74; // [rsp+41h] [rbp-BFh]
  int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  size_t Size_4; // [rsp+48h] [rbp-B8h]
  size_t Size_4a; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+50h] [rbp-B0h]
  __int64 **v80; // [rsp+50h] [rbp-B0h]
  struct VIDMM_MAPPED_VA_RANGE *v81; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v82; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD **v83; // [rsp+58h] [rbp-A8h]
  CVirtualAddressAllocator *v84; // [rsp+58h] [rbp-A8h]
  __int64 v85; // [rsp+60h] [rbp-A0h]
  _QWORD *v86; // [rsp+60h] [rbp-A0h]
  _QWORD *v87; // [rsp+60h] [rbp-A0h]
  __int64 v88; // [rsp+68h] [rbp-98h]
  _DWORD *v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+78h] [rbp-88h]
  KSPIN_LOCK *v92; // [rsp+78h] [rbp-88h]
  __int64 v93; // [rsp+80h] [rbp-80h]
  _QWORD *v94; // [rsp+80h] [rbp-80h]
  struct _VIDMM_DMA_BUFFER *v95[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v96; // [rsp+A0h] [rbp-60h]
  __int128 v97; // [rsp+B0h] [rbp-50h]
  __int128 v98; // [rsp+C0h] [rbp-40h]
  __int64 v99; // [rsp+D0h] [rbp-30h] BYREF
  void *v100; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v101[24]; // [rsp+F0h] [rbp-10h] BYREF
  VIDMM_GLOBAL *v102; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v103; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v104; // [rsp+1C0h] [rbp+C0h]
  unsigned __int8 v106; // [rsp+1D0h] [rbp+D0h]
  void (*v107)(void *); // [rsp+1D8h] [rbp+D8h]

  v107 = a4;
  v106 = a3;
  v102 = this;
  v7 = a3;
  v8 = a2;
  v9 = this;
  v10 = 472LL * a2;
  v11 = a2;
  v85 = a2;
  v88 = v10 + *((_QWORD *)this + 5021);
  Size_4 = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10 = Size_4;
    a4 = v107;
    v8 = a2;
    v65[3] = v7;
    v65[4] = *((unsigned int *)v9 + v11 + 414);
    this = (VIDMM_GLOBAL *)*((unsigned int *)v9 + v11 + 478);
    v65[5] = this;
  }
  v12 = *((unsigned __int8 *)v9 + 40872);
  if ( (unsigned __int8)v12 >= 0x80u && v7 )
    *((_BYTE *)v9 + 40873) |= 1u;
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5021) + v10 + 436) & 1) != 0
    && (unsigned __int8)v12 < 0x80u
    && *((_QWORD *)v9 + v11 + 143)
    && *((_DWORD *)v9 + 2) )
  {
    LOBYTE(v12) = v12 | 0x80;
    *((_BYTE *)v9 + 40872) = v12;
    v83 = (struct _KTHREAD **)*((_QWORD *)v9 + v11 + 5044);
    while ( 1 )
    {
      v74 = 0;
      while ( 1 )
      {
        this = (VIDMM_GLOBAL *)(v10 + *((_QWORD *)v9 + 5021) + 456LL);
        v13 = *(_QWORD **)this;
        if ( *(VIDMM_GLOBAL **)this == this )
          break;
        v81 = (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)v9 + v11 + 738), v13[2]) )
          break;
        v56 = *v13;
        v57 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v57 != v13 )
          __fastfail(3u);
        *v57 = v56;
        *(_QWORD *)(v56 + 8) = v57;
        *v13 = 0LL;
        v13[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v74 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v9 + v11 + 5044),
            v81,
            0LL,
            1);
        }
        v82 = *(struct VIDMM_VAD **)v81;
        v73 = 0;
        if ( v83[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v83 + 7));
          v73 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v83, v82, v10);
        v10 = Size_4;
        if ( v73 )
        {
          v83[8] = 0LL;
          ExReleasePushLockExclusiveEx(v83 + 7, 0LL);
          KeLeaveCriticalRegion();
          v10 = Size_4;
        }
      }
      if ( !v74 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v9, a2, 0, 0LL, 0LL, 0, 0);
      v10 = Size_4;
    }
    *((_BYTE *)v9 + 40872) &= ~0x80u;
    a4 = v107;
    v8 = a2;
    v7 = v106;
  }
  if ( *((_BYTE *)v9 + 40872) < 0x80u )
  {
    if ( a6 && (*((_BYTE *)v9 + 40873) & 1) != 0 )
    {
      v7 = 0;
      v106 = 0;
    }
    *((_BYTE *)v9 + 40873) &= ~1u;
  }
  if ( *((_DWORD *)v9 + v11 + 478) == *((_DWORD *)v9 + v11 + 414)
    && *((_DWORD *)v9 + v11 + 606) == *((_DWORD *)v9 + v11 + 542)
    && !v7 )
  {
    v50 = (_QWORD *)*((_QWORD *)v9 + 471);
    while ( v50 != (_QWORD *)((char *)v9 + 3768) )
    {
      v51 = v50 - 29;
      v50 = (_QWORD *)*v50;
      v103 = v51;
      if ( (*((_DWORD *)v51 + 19) & 0x3F) == v8 )
      {
        v52 = v51 + 29;
        v86 = v52;
        v53 = *v52;
        v54 = (_QWORD *)v52[1];
        if ( *(_QWORD **)(*v52 + 8LL) != v52 || (_QWORD *)*v54 != v52 )
          __fastfail(3u);
        *v54 = v53;
        *(_QWORD *)(v53 + 8) = v54;
        if ( g_IsInternalReleaseOrDbg )
        {
          v66 = WdLogNewEntry5_WdTrace(v52);
          v8 = a2;
          *(_QWORD *)(v66 + 24) = v103;
          v52 = v86;
        }
        v55 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
        if ( *v55 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
          __fastfail(3u);
        *v52 = (char *)v9 + 3784;
        v52[1] = v55;
        *v55 = (VIDMM_GLOBAL *)v52;
        *((_QWORD *)v9 + 474) = v52;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v9 + 2) )
  {
    v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v12, v10);
    v67[3] = 270LL;
    v67[4] = 33LL;
    v67[5] = v9;
    v67[6] = 0LL;
    v67[7] = 0LL;
    WdLogEvent5_WdCriticalError(v67);
    a4 = v107;
  }
  v14 = *((_QWORD *)v9 + v11 + 143);
  v15 = (__int64)v9 + 8 * v11 + 1144;
  v91 = *(_DWORD *)(v14 + 172);
  v16 = *(_DWORD *)(v14 + 168);
  *(_DWORD *)(v14 + 172) = v16;
  v79 = v16;
  v17 = *(_QWORD *)(*(_QWORD *)v15 + 56LL);
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 136);
    if ( (*(_DWORD *)(v18 + 80) & 0x1000) != 0 )
      Size = 0;
    else
      Size = *(_DWORD *)(v18 + 16) + 1;
    v19 = *(_QWORD *)(v17 + 144) + *(_QWORD *)(v18 + 24);
  }
  else
  {
    v19 = *(_QWORD *)(*(_QWORD *)v15 + 88LL);
    Size = 0;
  }
  if ( a4 )
  {
    ((void (__fastcall *)(void *))a4)(a5);
    v15 = (__int64)v9 + 8 * v11 + 1144;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 56LL) + 136LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
  if ( *(_DWORD *)(v88 + 24) )
  {
    v22 = 0;
    do
    {
      v23 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (v22 + *(_DWORD *)(*((_QWORD *)v9 + 5021) + Size_4 + 20)));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 144LL))(v23);
      ++v22;
    }
    while ( v22 < *(_DWORD *)(v88 + 24) );
    v11 = v85;
  }
  v24 = *((_DWORD *)v9 + v11 + 414) == *((_DWORD *)v9 + v11 + 478)
     && *((_DWORD *)v9 + v11 + 542) == *((_DWORD *)v9 + v11 + 606);
  if ( *((_DWORD *)v9 + v11 + 1155) || !v24 )
  {
    v25 = *(unsigned __int8 *)(*((_QWORD *)v9 + 5021) + Size_4 + 436);
    if ( (v25 & 0x40) != 0 )
    {
      v68 = WdLogNewEntry5_WdWarning(v25, v21);
      *(_QWORD *)(v68 + 24) = v11;
      WdLogEvent5_WdWarning(v68);
    }
    v95[1] = *((struct _VIDMM_DMA_BUFFER **)v9 + v11 + 143);
    LODWORD(v95[0]) = 256;
    _InterlockedIncrement((volatile signed __int32 *)v95[1] + 8);
    v26 = *((_DWORD *)v9 + v11 + 478);
    *((_QWORD *)&v96 + 1) = __PAIR64__(v26, Size);
    v27 = *((_DWORD *)v9 + v11 + 414) - v26;
    v28 = *((_DWORD *)v9 + v11 + 606);
    *(_QWORD *)&v97 = __PAIR64__(v28, v27);
    *((_QWORD *)&v97 + 1) = __PAIR64__(v91, *((_DWORD *)v9 + v11 + 542) - v28);
    LODWORD(v98) = v79;
    v29 = *((_QWORD *)v9 + 3);
    *(_QWORD *)&v96 = v19;
    v30 = *(_QWORD *)(v29 + 2192);
    if ( a7 )
      v31 = *(unsigned int *)(v30 + 48 * v11 + 20);
    else
      v31 = *(unsigned __int16 *)(v30 + 48 * v11 + 2);
    DWORD1(v98) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v9 + 2) + 416LL), a2, v31);
    BYTE8(v98) = a7 != 0;
    v32 = *((_DWORD *)v9 + v11 + 1155) == 0;
    v100 = (void *)*((_QWORD *)v9 + v11 + 738);
    if ( v32 )
    {
      *((_DWORD *)v9 + v11 + 1155) = 1;
      ++*((_QWORD *)v9 + v11 + 610);
    }
    v32 = (*((_BYTE *)v9 + 40872) & 1) == 0;
    v93 = *((_QWORD *)v9 + v11 + 610);
    v99 = v93;
    if ( !v32 && *((_QWORD *)v9 + 5115) )
      VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        v9,
        (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v95,
        a2);
    v33 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 416LL);
    v90 = v33;
    if ( VidSchIsTDRPending(v33) )
    {
      if ( ((__int64)v95[0] & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v95[1] + 17), v95[1], 1);
      goto LABEL_52;
    }
    v34 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v33, DWORD1(v98));
    v35 = *(_QWORD *)(*(_QWORD *)(v33 + 232) + 8 * v34);
    Size_4a = v35;
    if ( BYTE8(v98) )
    {
      v69 = *(_QWORD *)(*(_QWORD *)(v33 + 240) + 8 * v34);
      if ( v69 )
        v35 = v69;
      Size_4a = v35;
    }
    v36 = *(_QWORD *)(*(_QWORD *)(v35 + 96) + 24LL);
    v84 = (CVirtualAddressAllocator *)v36;
    v37 = *(_DWORD *)(v36 + 128) * (48 * *(_DWORD *)(v36 + 56) + ((8 * *(_DWORD *)(v36 + 56) + 167) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v36 + 56) + 89);
    Sizea = v37;
    if ( v37 <= 0x370 )
    {
      v37 = 880;
      Sizea = 880;
    }
    v89 = (_DWORD *)(v35 + 736);
    v80 = (__int64 **)(v35 + 720);
    v92 = (KSPIN_LOCK *)(v36 + 1888);
    v38 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v36 + 1888),
            (__int64 **)(v35 + 720),
            (_DWORD *)(v35 + 736));
    if ( v38 )
    {
      PoolWithTag = v38 - 1;
    }
    else
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v37, 0x68536956u);
      if ( PoolWithTag )
        goto LABEL_48;
      memset(v101, 0, 0xA0uLL);
      LODWORD(v101[4]) |= 0x10u;
      LODWORD(v101[2]) = 1;
      LODWORD(v101[6]) = *(unsigned __int16 *)(*(_QWORD *)(Size_4a + 96) + 4LL);
      VidSchRegisterCompletionEvent((__int64)v84, (__int64)v101);
      do
      {
        v70 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)v84 + 236, v80, v89);
        if ( v70 )
          PoolWithTag = v70 - 1;
        else
          VidSchWaitForCompletionEvent((__int64)v84, (__int64)v101, 19LL);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)v84 + 237, v101, 0LL);
      v9 = v102;
      v11 = v85;
    }
    if ( !PoolWithTag )
    {
LABEL_49:
      *(_DWORD *)PoolWithTag = 1953189969;
      *((_DWORD *)PoolWithTag + 12) = 8;
      PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
      PoolWithTag[11] = Size_4a;
      *((_DWORD *)PoolWithTag + 13) = 2;
      CurrentThread = KeGetCurrentThread();
      v41 = v96;
      *(_OWORD *)(PoolWithTag + 33) = *(_OWORD *)v95;
      PoolWithTag[12] = (__int64)CurrentThread;
      v42 = v95[0];
      v43 = v97;
      *(_OWORD *)(PoolWithTag + 35) = v41;
      PoolWithTag[9] = (__int64)v42;
      v44 = v98;
      *(_OWORD *)(PoolWithTag + 37) = v43;
      *(_OWORD *)(PoolWithTag + 39) = v44;
      if ( (*(_DWORD *)(v90 + 2152) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext(Size_4a, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)PoolWithTag);
LABEL_52:
      v45 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 416LL);
      if ( a2 == -1 )
      {
        v46 = *(_DWORD *)(v45 + 56);
        if ( a7 )
          v48 = *(__int64 **)(v45 + 240);
        else
          v48 = *(__int64 **)(v45 + 232);
      }
      else
      {
        v46 = 1;
        if ( a7 )
          v47 = *(_QWORD *)(v45 + 240);
        else
          v47 = *(_QWORD *)(v45 + 232);
        v48 = (__int64 *)(v47 + 8 * v11);
      }
      VidSchSignalSyncObjectsFromGpu(v46, v48, 1u, &v100, 0, &v99);
      *((_QWORD *)v9 + v11 + 674) = v93;
      goto LABEL_57;
    }
LABEL_48:
    memset(PoolWithTag, 0, Sizea);
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v92, Size_4a + 768, PoolWithTag + 1, (_DWORD *)(Size_4a + 784));
    goto LABEL_49;
  }
LABEL_57:
  *((_DWORD *)v9 + v11 + 478) = *((_DWORD *)v9 + v11 + 414);
  *((_DWORD *)v9 + v11 + 606) = *((_DWORD *)v9 + v11 + 542);
  v49 = (_QWORD *)*((_QWORD *)v9 + 471);
  if ( v49 != (_QWORD *)((char *)v9 + 3768) )
  {
    v59 = a2;
    do
    {
      v60 = v49 - 29;
      v49 = (_QWORD *)*v49;
      v104 = v60;
      v94 = v49;
      if ( (*((_DWORD *)v60 + 19) & 0x3F) == v59 )
      {
        v61 = v60 + 29;
        v87 = v61;
        v62 = *v61;
        v63 = (_QWORD *)v61[1];
        if ( *(_QWORD **)(*v61 + 8LL) != v61 || (_QWORD *)*v63 != v61 )
          __fastfail(3u);
        *v63 = v62;
        *(_QWORD *)(v62 + 8) = v63;
        if ( g_IsInternalReleaseOrDbg )
        {
          v72 = WdLogNewEntry5_WdTrace(v49);
          v61 = v87;
          *(_QWORD *)(v72 + 24) = v104;
          v49 = v94;
        }
        v64 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
        if ( *v64 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
          __fastfail(3u);
        v61[1] = v64;
        *v61 = (char *)v9 + 3784;
        *v64 = (VIDMM_GLOBAL *)v61;
        v59 = a2;
        *((_QWORD *)v9 + 474) = v61;
      }
    }
    while ( v49 != (_QWORD *)((char *)v9 + 3768) );
  }
  *((_DWORD *)v9 + v11 + 958) = 1;
  *((_DWORD *)v9 + v11 + 1155) = 0;
  if ( v106 )
  {
    v58 = (VIDMM_DMA_POOL **)((char *)v9 + 8 * v11);
    VIDMM_DMA_POOL::ReleaseBuffer(v58[79], v58[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v58[79], v58 + 143, 0, 1u);
    *((_DWORD *)v58[143] + 8) = 1;
    *((_DWORD *)v9 + v11 + 414) = 0;
    *((_DWORD *)v9 + v11 + 478) = 0;
    *((_DWORD *)v9 + v11 + 542) = 0;
    *((_DWORD *)v9 + v11 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 5021) + 448LL) = 0LL;
}
