/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A040 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005A5C0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C005B8F0 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C005C730 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D814 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z @ 0x1C005E970 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@QEAAXEI@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0074DDC (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009BDF4 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C009C7A8 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K@Z @ 0x1C00AA00C (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00AAF74 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000217C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00022B0 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007210 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSetPriorityContext @ 0x1C0010E38 (VidSchiSetPriorityContext.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C00674D0 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007182C (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 *     VidSchGetNodeOrdinal @ 0x1C0072874 (VidSchGetNodeOrdinal.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00A497C (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
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
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rcx
  bool v23; // al
  __int64 v24; // rcx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  bool v31; // zf
  __int64 v32; // rbx
  __int64 v33; // rdx
  size_t v34; // r8
  __int64 v35; // r9
  unsigned int v36; // ebx
  _QWORD *v37; // rax
  _QWORD *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int128 v40; // xmm1
  struct _VIDMM_DMA_BUFFER *v41; // rax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int64 v44; // rax
  unsigned int v45; // r10d
  __int64 v46; // rax
  __int64 *v47; // rdx
  _QWORD *v48; // rcx
  _QWORD *v49; // rsi
  _QWORD *v50; // rcx
  _QWORD *v51; // rcx
  __int64 v52; // rax
  _QWORD *v53; // rdx
  VIDMM_GLOBAL **v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rcx
  VIDMM_DMA_POOL **v57; // rbx
  unsigned int v58; // r8d
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  __int64 v61; // r8
  _QWORD *v62; // rax
  VIDMM_GLOBAL **v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  KPRIORITY PriorityThread; // eax
  __int64 v71; // rax
  char v72; // [rsp+40h] [rbp-C0h]
  char v73; // [rsp+41h] [rbp-BFh]
  int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  size_t Size_4; // [rsp+48h] [rbp-B8h]
  size_t Size_4a; // [rsp+48h] [rbp-B8h]
  int v78; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v79; // [rsp+50h] [rbp-B0h]
  struct VIDMM_MAPPED_VA_RANGE *v80; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v81; // [rsp+50h] [rbp-B0h]
  struct _KTHREAD **v82; // [rsp+58h] [rbp-A8h]
  CVirtualAddressAllocator *v83; // [rsp+58h] [rbp-A8h]
  __int64 v84; // [rsp+60h] [rbp-A0h]
  _QWORD *v85; // [rsp+60h] [rbp-A0h]
  _QWORD *v86; // [rsp+60h] [rbp-A0h]
  __int64 v87; // [rsp+68h] [rbp-98h]
  _DWORD *v88; // [rsp+68h] [rbp-98h]
  __int64 v89; // [rsp+70h] [rbp-90h]
  unsigned int v90; // [rsp+78h] [rbp-88h]
  KSPIN_LOCK *v91; // [rsp+78h] [rbp-88h]
  __int64 v92; // [rsp+80h] [rbp-80h]
  _QWORD *v93; // [rsp+80h] [rbp-80h]
  struct _VIDMM_DMA_BUFFER *v94[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v95; // [rsp+A0h] [rbp-60h]
  __int128 v96; // [rsp+B0h] [rbp-50h]
  __int128 v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+D0h] [rbp-30h] BYREF
  void *v99; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v100[24]; // [rsp+F0h] [rbp-10h] BYREF
  VIDMM_GLOBAL *v101; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v102; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v103; // [rsp+1C0h] [rbp+C0h]
  unsigned __int8 v105; // [rsp+1D0h] [rbp+D0h]
  void (*v106)(void *); // [rsp+1D8h] [rbp+D8h]

  v106 = a4;
  v105 = a3;
  v101 = this;
  v7 = a3;
  v8 = a2;
  v9 = this;
  v10 = 1552LL * a2;
  v11 = a2;
  v84 = a2;
  v87 = v10 + *((_QWORD *)this + 5021);
  Size_4 = v10;
  if ( g_IsInternalReleaseOrDbg )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v10 = Size_4;
    a4 = v106;
    v8 = a2;
    v64[3] = v7;
    v64[4] = *((unsigned int *)v9 + v11 + 414);
    this = (VIDMM_GLOBAL *)*((unsigned int *)v9 + v11 + 478);
    v64[5] = this;
  }
  v12 = *((unsigned __int8 *)v9 + 40872);
  if ( (v12 & 0x80u) != 0LL && v7 )
    *((_BYTE *)v9 + 40873) |= 1u;
  if ( (*(_BYTE *)(*((_QWORD *)v9 + 5021) + v10 + 436) & 1) != 0
    && *((_QWORD *)v9 + v11 + 143)
    && *((_DWORD *)v9 + 2)
    && (v12 & 0x80u) == 0LL )
  {
    LOBYTE(v12) = v12 | 0x80;
    *((_BYTE *)v9 + 40872) = v12;
    v82 = (struct _KTHREAD **)*((_QWORD *)v9 + v11 + 5044);
    while ( 1 )
    {
      v73 = 0;
      while ( 1 )
      {
        this = (VIDMM_GLOBAL *)(v10 + *((_QWORD *)v9 + 5021) + 456LL);
        v13 = *(_QWORD **)this;
        if ( *(VIDMM_GLOBAL **)this == this )
          break;
        v80 = (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)v9 + v11 + 738), v13[2]) )
          break;
        v55 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v56 = (_QWORD *)v13[1], (_QWORD *)*v56 != v13) )
          __fastfail(3u);
        *v56 = v55;
        *(_QWORD *)(v55 + 8) = v56;
        *v13 = 0LL;
        v13[1] = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v73 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v9 + v11 + 5044),
            v80,
            0LL,
            1);
        }
        v81 = *(struct VIDMM_VAD **)v80;
        v72 = 0;
        if ( v82[8] != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v82 + 7));
          v72 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v82, v81, v10);
        v10 = Size_4;
        if ( v72 )
        {
          v82[8] = 0LL;
          ExReleasePushLockExclusiveEx(v82 + 7, 0LL);
          KeLeaveCriticalRegion();
          v10 = Size_4;
        }
      }
      if ( !v73 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v9, a2, 0, 0LL, 0LL, 0, 0);
      v10 = Size_4;
    }
    *((_BYTE *)v9 + 40872) &= ~0x80u;
    a4 = v106;
    v8 = a2;
    v7 = v105;
  }
  if ( *((char *)v9 + 40872) >= 0 )
  {
    if ( a6 && (*((_BYTE *)v9 + 40873) & 1) != 0 )
    {
      v7 = 0;
      v105 = 0;
    }
    *((_BYTE *)v9 + 40873) &= ~1u;
  }
  if ( *((_DWORD *)v9 + v11 + 478) == *((_DWORD *)v9 + v11 + 414)
    && *((_DWORD *)v9 + v11 + 606) == *((_DWORD *)v9 + v11 + 542)
    && !v7 )
  {
    v49 = (_QWORD *)*((_QWORD *)v9 + 471);
    while ( v49 != (_QWORD *)((char *)v9 + 3768) )
    {
      v50 = v49 - 29;
      v49 = (_QWORD *)*v49;
      v102 = v50;
      if ( (*((_DWORD *)v50 + 19) & 0x3F) == v8 )
      {
        v51 = v50 + 29;
        v85 = v51;
        v52 = *v51;
        if ( *(_QWORD **)(*v51 + 8LL) != v51 || (v53 = (_QWORD *)v51[1], (_QWORD *)*v53 != v51) )
          __fastfail(3u);
        *v53 = v52;
        *(_QWORD *)(v52 + 8) = v53;
        if ( g_IsInternalReleaseOrDbg )
        {
          v65 = WdLogNewEntry5_WdTrace(v51);
          v8 = a2;
          *(_QWORD *)(v65 + 24) = v102;
          v51 = v85;
        }
        v54 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
        if ( *v54 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
          __fastfail(3u);
        *v51 = (char *)v9 + 3784;
        v51[1] = v54;
        *v54 = (VIDMM_GLOBAL *)v51;
        *((_QWORD *)v9 + 474) = v51;
      }
    }
    return;
  }
  if ( !*((_DWORD *)v9 + 2) )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v12, v10);
    v66[3] = 270LL;
    v66[4] = 33LL;
    v66[5] = v9;
    v66[6] = 0LL;
    v66[7] = 0LL;
    WdLogEvent5_WdCriticalError(v66);
    a4 = v106;
  }
  v14 = *((_QWORD *)v9 + v11 + 143);
  v15 = (__int64)v9 + 8 * v11 + 1144;
  v90 = *(_DWORD *)(v14 + 172);
  v16 = *(_DWORD *)(v14 + 168);
  *(_DWORD *)(v14 + 172) = v16;
  v78 = v16;
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
  if ( *(_DWORD *)(v87 + 24) )
  {
    v21 = 0;
    do
    {
      v22 = *(_QWORD *)(*((_QWORD *)v9 + 464) + 8LL * (v21 + *(_DWORD *)(*((_QWORD *)v9 + 5021) + Size_4 + 20)));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 160LL))(v22);
      ++v21;
    }
    while ( v21 < *(_DWORD *)(v87 + 24) );
    v11 = v84;
  }
  v23 = *((_DWORD *)v9 + v11 + 414) == *((_DWORD *)v9 + v11 + 478)
     && *((_DWORD *)v9 + v11 + 542) == *((_DWORD *)v9 + v11 + 606);
  if ( *((_DWORD *)v9 + v11 + 1155) || !v23 )
  {
    v24 = *(unsigned __int8 *)(*((_QWORD *)v9 + 5021) + Size_4 + 436);
    if ( (v24 & 0x40) != 0 )
    {
      v67 = WdLogNewEntry5_WdWarning(v24);
      *(_QWORD *)(v67 + 24) = v11;
      WdLogEvent5_WdWarning(v67);
    }
    v94[1] = *((struct _VIDMM_DMA_BUFFER **)v9 + v11 + 143);
    LODWORD(v94[0]) = 256;
    _InterlockedIncrement((volatile signed __int32 *)v94[1] + 8);
    v25 = *((_DWORD *)v9 + v11 + 478);
    *((_QWORD *)&v95 + 1) = __PAIR64__(v25, Size);
    v26 = *((_DWORD *)v9 + v11 + 414) - v25;
    v27 = *((_DWORD *)v9 + v11 + 606);
    *(_QWORD *)&v96 = __PAIR64__(v27, v26);
    *((_QWORD *)&v96 + 1) = __PAIR64__(v90, *((_DWORD *)v9 + v11 + 542) - v27);
    LODWORD(v97) = v78;
    v28 = *((_QWORD *)v9 + 3);
    *(_QWORD *)&v95 = v19;
    v29 = *(_QWORD *)(v28 + 2216);
    if ( a7 )
      v30 = *(unsigned int *)(v29 + 48 * v11 + 20);
    else
      v30 = *(unsigned __int16 *)(v29 + 48 * v11 + 2);
    DWORD1(v97) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL), a2, v30);
    BYTE8(v97) = a7 != 0;
    v31 = *((_DWORD *)v9 + v11 + 1155) == 0;
    v99 = (void *)*((_QWORD *)v9 + v11 + 738);
    if ( v31 )
    {
      *((_DWORD *)v9 + v11 + 1155) = 1;
      ++*((_QWORD *)v9 + v11 + 610);
    }
    v31 = (*((_BYTE *)v9 + 40872) & 1) == 0;
    v92 = *((_QWORD *)v9 + v11 + 610);
    v98 = v92;
    if ( !v31 && *((_QWORD *)v9 + 5115) )
      VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
        v9,
        (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)v94,
        a2);
    v32 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL);
    v89 = v32;
    if ( VidSchIsTDRPending(v32) )
    {
      if ( ((__int64)v94[0] & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v94[1] + 17), v94[1], 1);
      goto LABEL_52;
    }
    v33 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v32, DWORD1(v97));
    v34 = *(_QWORD *)(*(_QWORD *)(v32 + 240) + 8 * v33);
    Size_4a = v34;
    if ( BYTE8(v97) )
    {
      v68 = *(_QWORD *)(v32 + 248);
      if ( *(_QWORD *)(v68 + 8 * v33) )
        v34 = *(_QWORD *)(v68 + 8 * v33);
      Size_4a = v34;
    }
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 96) + 24LL);
    v83 = (CVirtualAddressAllocator *)v35;
    v36 = *(_DWORD *)(v35 + 128) * (48 * *(_DWORD *)(v35 + 56) + ((8 * *(_DWORD *)(v35 + 56) + 175) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v35 + 56) + 93);
    Sizea = v36;
    if ( v36 <= 0x3A0 )
    {
      v36 = 928;
      Sizea = 928;
    }
    v88 = (_DWORD *)(v34 + 712);
    v79 = (struct VIDMM_VAD *)(v34 + 696);
    v91 = (KSPIN_LOCK *)(v35 + 1896);
    v37 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v35 + 1896),
            (_QWORD **)(v34 + 696),
            (_DWORD *)(v34 + 712));
    if ( v37 )
    {
      PoolWithTag = v37 - 1;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v36, 0x68536956u);
      if ( PoolWithTag )
        goto LABEL_48;
      memset(v100, 0, 0xA0uLL);
      LODWORD(v100[4]) |= 0x10u;
      LODWORD(v100[2]) = 1;
      LODWORD(v100[6]) = *(unsigned __int16 *)(*(_QWORD *)(Size_4a + 96) + 4LL);
      VidSchRegisterCompletionEvent(v83, v100);
      do
      {
        v69 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)v83 + 237, (_QWORD **)v79, v88);
        if ( v69 )
          PoolWithTag = v69 - 1;
        else
          VidSchWaitForCompletionEvent(v83, v100, 19LL);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)v83 + 238, v100, 0LL);
      v9 = v101;
      v11 = v84;
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
      v40 = v95;
      *((_OWORD *)PoolWithTag + 18) = *(_OWORD *)v94;
      PoolWithTag[13] = CurrentThread;
      v41 = v94[0];
      v42 = v96;
      *((_OWORD *)PoolWithTag + 19) = v40;
      PoolWithTag[9] = v41;
      v43 = v97;
      *((_OWORD *)PoolWithTag + 20) = v42;
      *((_OWORD *)PoolWithTag + 21) = v43;
      if ( (*(_DWORD *)(v89 + 2168) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext(Size_4a, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)PoolWithTag);
LABEL_52:
      v44 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 512LL);
      if ( a2 == -1 )
      {
        v45 = *(_DWORD *)(v44 + 56);
        if ( a7 )
          v47 = *(__int64 **)(v44 + 248);
        else
          v47 = *(__int64 **)(v44 + 240);
      }
      else
      {
        v45 = 1;
        if ( a7 )
          v46 = *(_QWORD *)(v44 + 248);
        else
          v46 = *(_QWORD *)(v44 + 240);
        v47 = (__int64 *)(v46 + 8 * v11);
      }
      VidSchSignalSyncObjectsFromGpu(v45, v47, 1u, &v99, 0, &v98);
      *((_QWORD *)v9 + v11 + 674) = v92;
      goto LABEL_57;
    }
LABEL_48:
    memset(PoolWithTag, 0, Sizea);
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v91, Size_4a + 744, PoolWithTag + 1, (_DWORD *)(Size_4a + 760));
    goto LABEL_49;
  }
LABEL_57:
  *((_DWORD *)v9 + v11 + 478) = *((_DWORD *)v9 + v11 + 414);
  *((_DWORD *)v9 + v11 + 606) = *((_DWORD *)v9 + v11 + 542);
  v48 = (_QWORD *)*((_QWORD *)v9 + 471);
  if ( v48 != (_QWORD *)((char *)v9 + 3768) )
  {
    v58 = a2;
    do
    {
      v59 = v48 - 29;
      v48 = (_QWORD *)*v48;
      v103 = v59;
      v93 = v48;
      if ( (*((_DWORD *)v59 + 19) & 0x3F) == v58 )
      {
        v60 = v59 + 29;
        v86 = v60;
        v61 = *v60;
        if ( *(_QWORD **)(*v60 + 8LL) != v60 || (v62 = (_QWORD *)v60[1], (_QWORD *)*v62 != v60) )
          __fastfail(3u);
        *v62 = v61;
        *(_QWORD *)(v61 + 8) = v62;
        if ( g_IsInternalReleaseOrDbg )
        {
          v71 = WdLogNewEntry5_WdTrace(v48);
          v60 = v86;
          *(_QWORD *)(v71 + 24) = v103;
          v48 = v93;
        }
        v63 = (VIDMM_GLOBAL **)*((_QWORD *)v9 + 474);
        if ( *v63 != (VIDMM_GLOBAL *)((char *)v9 + 3784) )
          __fastfail(3u);
        v60[1] = v63;
        *v60 = (char *)v9 + 3784;
        *v63 = (VIDMM_GLOBAL *)v60;
        v58 = a2;
        *((_QWORD *)v9 + 474) = v60;
      }
    }
    while ( v48 != (_QWORD *)((char *)v9 + 3768) );
  }
  *((_DWORD *)v9 + v11 + 958) = 1;
  *((_DWORD *)v9 + v11 + 1155) = 0;
  if ( v105 )
  {
    v57 = (VIDMM_DMA_POOL **)((char *)v9 + 8 * v11);
    VIDMM_DMA_POOL::ReleaseBuffer(v57[79], v57[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v57[79], v57 + 143, 0, 1u);
    *((_DWORD *)v57[143] + 8) = 1;
    *((_DWORD *)v9 + v11 + 414) = 0;
    *((_DWORD *)v9 + v11 + 478) = 0;
    *((_DWORD *)v9 + v11 + 542) = 0;
    *((_DWORD *)v9 + v11 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v9 + 5021) + 448LL) = 0LL;
}
