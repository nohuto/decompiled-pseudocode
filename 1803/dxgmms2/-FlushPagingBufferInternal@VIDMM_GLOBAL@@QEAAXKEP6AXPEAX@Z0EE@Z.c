/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050
 * Callers:
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005EE70 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005F2A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C0060210 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0060EC0 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061F10 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C006221C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0062A24 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C0062F48 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0071EC0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C009DF14 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1D44 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00A28A0 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A4774 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00B212C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0002828 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0004BA0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0004D1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0005400 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007370 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiSetPriorityContext @ 0x1C0012174 (VidSchiSetPriorityContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchGetNodeOrdinal @ 0x1C00561F4 (VidSchGetNodeOrdinal.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00570A0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0059C30 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C005B1F0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0074B84 (VidSchRegisterCompletionEvent.c)
 *     ?GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA118 (-GetProcessGpuVa@VIDMM_FENCE_STORAGE_PAGE@@QEAA_KPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STO.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00ABD6C (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00BF058 (VidSchiSubmitHwPagingCommand.c)
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
  __int64 v7; // r10
  unsigned __int8 v8; // bl
  unsigned int v9; // r11d
  VIDMM_GLOBAL *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rsi
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD **v16; // rcx
  _QWORD *v17; // rbx
  char *v18; // rdx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  unsigned int v25; // esi
  __int64 v26; // rcx
  int v27; // ecx
  bool v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  char *v31; // r8
  volatile signed __int32 *v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r8d
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // ebx
  _QWORD *v42; // rax
  _QWORD *PoolWithTag; // rbx
  size_t v44; // rax
  KSPIN_LOCK *v45; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _VIDMM_DMA_BUFFER *v47; // xmm2_8
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int64 v50; // rax
  __int128 v51; // xmm0
  __int64 v52; // rax
  int v53; // r8d
  __int64 v54; // rax
  _QWORD *v55; // r9
  VIDMM_GLOBAL *v56; // rcx
  char *v57; // rsi
  char *v58; // rax
  char *v59; // rcx
  char **v60; // rax
  VIDMM_GLOBAL **v61; // rdx
  __int64 v62; // rax
  _QWORD *v63; // rcx
  VIDMM_DMA_POOL **v64; // rbx
  unsigned int v65; // r8d
  VIDMM_GLOBAL *v66; // rdx
  int v67; // eax
  VIDMM_GLOBAL **v68; // rax
  VIDMM_GLOBAL **v69; // r8
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  struct VIDMM_MONITORED_FENCE_STORAGE *i; // rsi
  struct VIDMM_PROCESS *v75; // r9
  VIDMM_FENCE_STORAGE_PAGE *v76; // rcx
  D3DGPU_VIRTUAL_ADDRESS ProcessGpuVa; // rax
  ADAPTER_RENDER *v78; // rcx
  int v79; // esi
  __int64 v80; // rax
  _QWORD *v81; // rax
  KPRIORITY PriorityThread; // eax
  __int64 v83; // rax
  char v84; // [rsp+40h] [rbp-C0h]
  char v85; // [rsp+41h] [rbp-BFh]
  bool v86; // [rsp+44h] [rbp-BCh]
  struct _VIDSCH_CONTEXT *v87; // [rsp+48h] [rbp-B8h]
  struct _VIDSCH_CONTEXT *v88; // [rsp+48h] [rbp-B8h]
  int Size; // [rsp+50h] [rbp-B0h]
  unsigned int Sizea; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v91; // [rsp+58h] [rbp-A8h]
  struct VIDMM_MAPPED_VA_RANGE *v92; // [rsp+58h] [rbp-A8h]
  struct VIDMM_VAD *v93; // [rsp+58h] [rbp-A8h]
  __int64 v94; // [rsp+60h] [rbp-A0h]
  char *v95; // [rsp+60h] [rbp-A0h]
  __int64 v96; // [rsp+60h] [rbp-A0h]
  struct _KTHREAD **v97; // [rsp+68h] [rbp-98h]
  CVirtualAddressAllocator *v98; // [rsp+68h] [rbp-98h]
  _DWORD *v99; // [rsp+70h] [rbp-90h]
  VIDMM_GLOBAL *v100; // [rsp+70h] [rbp-90h]
  char *v101; // [rsp+70h] [rbp-90h]
  char *v102; // [rsp+78h] [rbp-88h] BYREF
  KSPIN_LOCK *v103; // [rsp+80h] [rbp-80h]
  size_t v104; // [rsp+88h] [rbp-78h]
  __int64 v105; // [rsp+90h] [rbp-70h]
  VIDMM_GLOBAL *v106; // [rsp+98h] [rbp-68h]
  unsigned __int64 v107[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _VIDMM_DMA_BUFFER *v108[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v109; // [rsp+C0h] [rbp-40h]
  __int128 v110; // [rsp+D0h] [rbp-30h]
  __int128 v111; // [rsp+E0h] [rbp-20h]
  __int64 v112; // [rsp+F0h] [rbp-10h]
  _QWORD v113[20]; // [rsp+100h] [rbp+0h] BYREF
  struct _DXGKARG_BUILDPAGINGBUFFER v114; // [rsp+1A0h] [rbp+A0h] BYREF
  char *v116; // [rsp+310h] [rbp+210h]
  _QWORD *v117; // [rsp+310h] [rbp+210h]
  unsigned __int8 v119; // [rsp+320h] [rbp+220h]
  void (*v120)(void *); // [rsp+328h] [rbp+228h]

  v120 = a4;
  v119 = a3;
  v7 = *((_QWORD *)this + 5090);
  v8 = a3;
  v9 = a2;
  v10 = this;
  v11 = 1560LL * a2;
  v12 = a2;
  v105 = a2;
  v87 = (struct _VIDSCH_CONTEXT *)v11;
  v94 = v7 + v11;
  if ( g_IsInternalReleaseOrDbg )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11 = (__int64)v87;
    a4 = v120;
    v9 = a2;
    v70[3] = v8;
    v70[4] = *((unsigned int *)v10 + v12 + 414);
    v70[5] = *((unsigned int *)v10 + v12 + 478);
    v7 = *((_QWORD *)v10 + 5090);
  }
  v13 = *((_BYTE *)v10 + 41449);
  v14 = v13;
  if ( (v13 & 1) != 0 )
  {
    v14 = v13;
    if ( v8 )
    {
      LOBYTE(v14) = v13 | 2;
      *((_BYTE *)v10 + 41449) = v13 | 2;
    }
  }
  v15 = (unsigned __int8)v14;
  if ( (*(_BYTE *)(v7 + v11 + 436) & 1) != 0 && *((_QWORD *)v10 + v12 + 143) && *((_DWORD *)v10 + 2) && (v14 & 1) == 0 )
  {
    LOBYTE(v14) = v14 | 1;
    *((_BYTE *)v10 + 41449) = v14;
    v97 = (struct _KTHREAD **)*((_QWORD *)v10 + v12 + 5116);
    while ( 1 )
    {
      v85 = 0;
      while ( 1 )
      {
        v16 = (_QWORD **)(v11 + *((_QWORD *)v10 + 5090) + 464LL);
        v17 = *v16;
        if ( *v16 == v16 )
          break;
        v92 = (struct VIDMM_MAPPED_VA_RANGE *)(v17 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)v10 + v12 + 746), v17[2]) )
          break;
        v62 = *v17;
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v63 = (_QWORD *)v17[1], (_QWORD *)*v63 != v17) )
          __fastfail(3u);
        *v63 = v62;
        *(_QWORD *)(v62 + 8) = v63;
        *v17 = 0LL;
        v17[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v85 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v10 + v12 + 5116),
            v92,
            0LL,
            1);
        }
        v93 = *(struct VIDMM_VAD **)v92;
        if ( v97[8] == KeGetCurrentThread() )
        {
          v84 = 0;
        }
        else
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v97 + 7));
          v84 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v97, v93, v11);
        v11 = (__int64)v87;
        if ( v84 )
        {
          v97[8] = 0LL;
          ExReleasePushLockExclusiveEx(v97 + 7, 0LL);
          KeLeaveCriticalRegion();
          v11 = (__int64)v87;
        }
      }
      if ( !v85 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v10, a2, 0, 0LL, 0LL, 0, 0);
      v11 = (__int64)v87;
    }
    *((_BYTE *)v10 + 41449) &= ~1u;
    v15 = *((unsigned __int8 *)v10 + 41449);
    a4 = v120;
    v9 = a2;
    v8 = v119;
  }
  if ( (v15 & 1) == 0 )
  {
    if ( a6 && (v15 & 2) != 0 )
    {
      v8 = 0;
      v119 = 0;
    }
    LOBYTE(v15) = v15 & 0xFD;
    *((_BYTE *)v10 + 41449) = v15;
  }
  if ( *((_DWORD *)v10 + v12 + 478) == *((_DWORD *)v10 + v12 + 414)
    && *((_DWORD *)v10 + v12 + 606) == *((_DWORD *)v10 + v12 + 542)
    && !v8 )
  {
    v57 = (char *)*((_QWORD *)v10 + 471);
    while ( v57 != (char *)v10 + 3768 )
    {
      v58 = v57 - 232;
      v59 = v57;
      v57 = *(char **)v57;
      v116 = v58;
      LODWORD(v58) = *((_DWORD *)v58 + 19) & 0x3F;
      v102 = v59;
      if ( (_DWORD)v58 == v9 )
      {
        if ( *((char **)v57 + 1) != v59 || (v60 = (char **)*((_QWORD *)v59 + 1), *v60 != v59) )
          __fastfail(3u);
        *v60 = v57;
        *((_QWORD *)v57 + 1) = v60;
        if ( g_IsInternalReleaseOrDbg )
        {
          v71 = WdLogNewEntry5_WdTrace(v59);
          v9 = a2;
          *(_QWORD *)(v71 + 24) = v116;
          v59 = v102;
        }
        v61 = (VIDMM_GLOBAL **)*((_QWORD *)v10 + 474);
        if ( *v61 != (VIDMM_GLOBAL *)((char *)v10 + 3784) )
          __fastfail(3u);
        *(_QWORD *)v59 = (char *)v10 + 3784;
        *((_QWORD *)v59 + 1) = v61;
        *v61 = (VIDMM_GLOBAL *)v59;
        *((_QWORD *)v10 + 474) = v59;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v10 + 2) )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v11);
    v72[3] = 270LL;
    v72[4] = 33LL;
    v72[5] = v10;
    v72[6] = 0LL;
    v72[7] = 0LL;
    WdLogEvent5_WdCriticalError(v72);
    a4 = v120;
  }
  v18 = (char *)v10 + 8 * v12;
  v19 = *((_QWORD *)v18 + 143);
  LODWORD(v103) = *(_DWORD *)(v19 + 172);
  v20 = *(_DWORD *)(v19 + 168);
  *(_DWORD *)(v19 + 172) = v20;
  v21 = *((_QWORD *)v18 + 143);
  LODWORD(v104) = v20;
  v22 = *(_QWORD *)(v21 + 56);
  if ( v22 )
  {
    v23 = *(_QWORD *)(v22 + 136);
    if ( (*(_DWORD *)(v23 + 80) & 0x1000) != 0 )
      Size = 0;
    else
      Size = *(_DWORD *)(v23 + 16) + 1;
    v24 = *(_QWORD *)(v22 + 144) + *(_QWORD *)(v23 + 24);
  }
  else
  {
    v24 = *(_QWORD *)(v21 + 88);
    Size = 0;
  }
  if ( a4 )
  {
    ((void (__fastcall *)(void *))a4)(a5);
    v21 = *((_QWORD *)v10 + v12 + 143);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v21 + 56) + 136LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v21 + 56) + 136LL));
  if ( *(_DWORD *)(v94 + 24) )
  {
    v25 = 0;
    do
    {
      v26 = *(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * (v25 + *(_DWORD *)((char *)v87 + *((_QWORD *)v10 + 5090) + 20)));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 160LL))(v26);
      ++v25;
    }
    while ( v25 < *(_DWORD *)(v94 + 24) );
    v12 = v105;
  }
  v27 = *((_DWORD *)v10 + v12 + 414);
  v28 = v27 == *((_DWORD *)v10 + v12 + 478) && *((_DWORD *)v10 + v12 + 542) == *((_DWORD *)v10 + v12 + 606);
  v29 = *((unsigned int *)v10 + v12 + 1171);
  if ( (_DWORD)v29 || !v28 )
  {
    v30 = *((unsigned __int8 *)v87 + *((_QWORD *)v10 + 5090) + 436);
    if ( (v30 & 0x40) != 0 )
    {
      v73 = WdLogNewEntry5_WdWarning(v30, v29);
      *(_QWORD *)(v73 + 24) = v12;
      WdLogEvent5_WdWarning(v73);
      LODWORD(v29) = *((_DWORD *)v10 + v12 + 1171);
    }
    v31 = (char *)*((_QWORD *)v10 + v12 + 746);
    v95 = v31;
    v102 = v31;
    if ( !(_DWORD)v29 )
    {
      *((_DWORD *)v10 + v12 + 1171) = 1;
      ++*((_QWORD *)v10 + v12 + 618);
    }
    v91 = (struct VIDMM_VAD *)*((_QWORD *)v10 + v12 + 618);
    v107[0] = (unsigned __int64)v91;
    if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 528LL) + 54LL)
      || *((_BYTE *)v10 + 7072)
      || !*((_QWORD *)v10 + v12 + 143)
      || (*(_DWORD *)(*((_QWORD *)v10 + v12 + 79) + 32LL) & 4) == 0 )
    {
      v86 = 0;
      goto LABEL_38;
    }
    v101 = (char *)*((_QWORD *)v10 + v12 + 746);
    if ( v101 == v31 )
    {
      if ( *((_BYTE *)v10 + v12 + 4617) )
      {
        v86 = 1;
        goto LABEL_38;
      }
      *((_BYTE *)v10 + v12 + 4617) = 1;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer(v10, a2, (struct _VIDMM_GLOBAL_ALLOC *)v31, &v114);
    for ( i = (struct VIDMM_MONITORED_FENCE_STORAGE *)(v95 + 48); ; i = (struct VIDMM_MONITORED_FENCE_STORAGE *)(v95 + 48) )
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(v10, a2, 0LL, &v114);
      v75 = (struct VIDMM_PROCESS *)*((_QWORD *)v10 + 5112);
      v76 = *(VIDMM_FENCE_STORAGE_PAGE **)i;
      v114.Operation = DXGK_OPERATION_SIGNAL_MONITORED_FENCE;
      v114.Fill.FillSize = (SIZE_T)v91;
      ProcessGpuVa = VIDMM_FENCE_STORAGE_PAGE::GetProcessGpuVa(v76, v10, i, v75);
      v78 = (ADAPTER_RENDER *)*((_QWORD *)v10 + 2);
      v114.UpdateContextAllocation.ContextAllocation = ProcessGpuVa;
      v79 = ADAPTER_RENDER::DdiBuildPagingBuffer(v78, &v114);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(v10, a2, 0LL, &v114, v79, 0, 0LL);
      if ( v79 != -1071775743 )
        break;
    }
    v86 = v79 >= 0;
    v12 = v105;
    if ( v101 == v95 )
      *((_BYTE *)v10 + v105 + 4617) = 0;
LABEL_38:
    *(_QWORD *)&v109 = v91;
    v32 = (volatile signed __int32 *)*((_QWORD *)v10 + v12 + 143);
    v108[0] = (struct _VIDMM_DMA_BUFFER *)256;
    v108[1] = (struct _VIDMM_DMA_BUFFER *)v32;
    _InterlockedIncrement(v32 + 8);
    v33 = *((_DWORD *)v10 + v12 + 478);
    *(_QWORD *)&v110 = __PAIR64__(v33, Size);
    LODWORD(v32) = *((_DWORD *)v10 + v12 + 414) - v33;
    v34 = *((_DWORD *)v10 + v12 + 606);
    *((_QWORD *)&v110 + 1) = __PAIR64__(v34, (unsigned int)v32);
    LODWORD(v32) = *((_DWORD *)v10 + v12 + 542) - v34;
    *((_QWORD *)&v109 + 1) = v24;
    *(_QWORD *)&v111 = __PAIR64__((unsigned int)v103, (unsigned int)v32);
    DWORD2(v111) = v104;
    v35 = 352 * v12;
    v36 = *(_QWORD *)(*((_QWORD *)v10 + 3) + 2360LL);
    if ( a7 )
      v37 = *(_DWORD *)(v36 + v35 + 20);
    else
      v37 = *(unsigned __int16 *)(v36 + v35 + 2);
    HIDWORD(v111) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v10 + 2) + 528LL), a2, v37);
    LOBYTE(v112) = a7 != 0;
    if ( (*((_BYTE *)v10 + 41448) & 2) != 0 && *((_QWORD *)v10 + 5187) )
      VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        v10,
        (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v108,
        a2);
    v106 = *(VIDMM_GLOBAL **)(*((_QWORD *)v10 + 2) + 528LL);
    if ( VidSchIsTDRPending((__int64)v106) )
    {
      if ( ((__int64)v108[0] & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v108[1] + 17), v108[1], 1);
      goto LABEL_56;
    }
    if ( *((_BYTE *)v106 + 54) )
    {
      VidSchiSubmitHwPagingCommand(v106, v108);
LABEL_56:
      if ( !v86 )
      {
        v52 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 528LL);
        if ( *(_BYTE *)(v52 + 54) )
        {
          VidSchSignalSyncObjectsFromCpu((_QWORD *)1, (__int64)&v102, 0, v107, 0);
        }
        else
        {
          if ( a2 == -1 )
          {
            v53 = *(_DWORD *)(v52 + 60);
            if ( a7 )
              v55 = *(_QWORD **)(v52 + 264);
            else
              v55 = *(_QWORD **)(v52 + 240);
          }
          else
          {
            v53 = 1;
            if ( a7 )
              v54 = *(_QWORD *)(v52 + 264);
            else
              v54 = *(_QWORD *)(v52 + 240);
            v55 = (_QWORD *)(v54 + 8 * v12);
          }
          VidSchSignalSyncObjectsFromGpu(0LL, 0LL, v53, v55, 1u, (void **)&v102, 0, v107);
        }
      }
      *((_QWORD *)v10 + v12 + 682) = v91;
      v27 = *((_DWORD *)v10 + v12 + 414);
      goto LABEL_64;
    }
    v38 = (unsigned int)VidSchiSchedulerNodeToDriverEngine((__int64)v106, HIDWORD(v111));
    v39 = *(_QWORD *)(*((_QWORD *)v106 + 30) + 8 * v38);
    v88 = (struct _VIDSCH_CONTEXT *)v39;
    if ( (_BYTE)v112 )
    {
      v80 = *((_QWORD *)v106 + 33);
      if ( *(_QWORD *)(v80 + 8 * v38) )
        v39 = *(_QWORD *)(v80 + 8 * v38);
      v88 = (struct _VIDSCH_CONTEXT *)v39;
    }
    v40 = *(_QWORD *)(*(_QWORD *)(v39 + 96) + 24LL);
    v96 = v40;
    v41 = *(_DWORD *)(v40 + 132) * (48 * *(_DWORD *)(v40 + 60) + ((8 * *(_DWORD *)(v40 + 60) + 175) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v40 + 60) + 98);
    Sizea = v41;
    if ( v41 <= 0x3C0 )
    {
      v41 = 960;
      Sizea = 960;
    }
    v99 = (_DWORD *)(v39 + 720);
    v98 = (CVirtualAddressAllocator *)(v39 + 704);
    v103 = (KSPIN_LOCK *)(v40 + 1912);
    v42 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v40 + 1912),
            (_QWORD **)(v39 + 704),
            (_DWORD *)(v39 + 720));
    if ( v42 )
    {
      PoolWithTag = v42 - 1;
    }
    else
    {
      v104 = v41;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v41, 0x68536956u);
      if ( PoolWithTag )
      {
        v44 = v104;
        goto LABEL_52;
      }
      memset(v113, 0, sizeof(v113));
      LODWORD(v113[4]) |= 0x40u;
      LODWORD(v113[2]) = 1;
      LODWORD(v113[6]) = *(unsigned __int16 *)(*((_QWORD *)v88 + 12) + 4LL);
      VidSchRegisterCompletionEvent(v96, v113);
      do
      {
        v81 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v96 + 1912), (_QWORD **)v98, v99);
        if ( v81 )
          PoolWithTag = v81 - 1;
        else
          VidSchWaitForCompletionEvent(v96, v113, 19LL);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v96 + 1920), v113, 0LL);
      v10 = this;
      v12 = v105;
    }
    if ( !PoolWithTag )
    {
LABEL_53:
      *(_DWORD *)PoolWithTag = 1953189969;
      *((_DWORD *)PoolWithTag + 12) = 8;
      PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
      PoolWithTag[11] = v88;
      *((_DWORD *)PoolWithTag + 13) = 2;
      CurrentThread = KeGetCurrentThread();
      v47 = v108[0];
      v48 = v109;
      v49 = v110;
      *((_OWORD *)PoolWithTag + 17) = *(_OWORD *)v108;
      PoolWithTag[13] = CurrentThread;
      v50 = (__int64)v106;
      *((_OWORD *)PoolWithTag + 18) = v48;
      v51 = v111;
      *((_OWORD *)PoolWithTag + 19) = v49;
      *(_QWORD *)&v49 = v112;
      *((_OWORD *)PoolWithTag + 20) = v51;
      PoolWithTag[42] = v49;
      PoolWithTag[9] = v47;
      if ( (*(_DWORD *)(v50 + 2192) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext(v88, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((__int64)PoolWithTag);
      goto LABEL_56;
    }
    v44 = Sizea;
LABEL_52:
    memset(PoolWithTag, 0, v44);
    v45 = v103;
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v45, (__int64)v88 + 752, PoolWithTag + 1, (_DWORD *)v88 + 192);
    goto LABEL_53;
  }
LABEL_64:
  *((_DWORD *)v10 + v12 + 606) = *((_DWORD *)v10 + v12 + 542);
  *((_DWORD *)v10 + v12 + 478) = v27;
  v56 = (VIDMM_GLOBAL *)*((_QWORD *)v10 + 471);
  if ( v56 != (VIDMM_GLOBAL *)((char *)v10 + 3768) )
  {
    v65 = a2;
    do
    {
      v100 = v56;
      v117 = (_QWORD *)((char *)v56 - 232);
      v66 = v56;
      v67 = *((_DWORD *)v56 - 39);
      v56 = *(VIDMM_GLOBAL **)v56;
      v106 = v56;
      if ( (v67 & 0x3F) == v65 )
      {
        if ( *((VIDMM_GLOBAL **)v56 + 1) != v66 || (v68 = (VIDMM_GLOBAL **)*((_QWORD *)v66 + 1), *v68 != v66) )
          __fastfail(3u);
        *v68 = v56;
        *((_QWORD *)v56 + 1) = v68;
        if ( g_IsInternalReleaseOrDbg )
        {
          v83 = WdLogNewEntry5_WdTrace(v56);
          v66 = v100;
          *(_QWORD *)(v83 + 24) = v117;
          v56 = v106;
        }
        v69 = (VIDMM_GLOBAL **)*((_QWORD *)v10 + 474);
        if ( *v69 != (VIDMM_GLOBAL *)((char *)v10 + 3784) )
          __fastfail(3u);
        *((_QWORD *)v66 + 1) = v69;
        *(_QWORD *)v66 = (char *)v10 + 3784;
        *v69 = v66;
        v65 = a2;
        *((_QWORD *)v10 + 474) = v66;
      }
    }
    while ( v56 != (VIDMM_GLOBAL *)((char *)v10 + 3768) );
  }
  *((_DWORD *)v10 + v12 + 958) = 1;
  *((_DWORD *)v10 + v12 + 1171) = 0;
  if ( v119 )
  {
    v64 = (VIDMM_DMA_POOL **)((char *)v10 + 8 * v12);
    VIDMM_DMA_POOL::ReleaseBuffer(v64[79], v64[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v64[79], v64 + 143, 0, 1);
    *((_DWORD *)v64[143] + 8) = 1;
    *((_DWORD *)v10 + v12 + 414) = 0;
    *((_DWORD *)v10 + v12 + 478) = 0;
    *((_DWORD *)v10 + v12 + 542) = 0;
    *((_DWORD *)v10 + v12 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v10 + 5090) + 448LL) = 0LL;
}
