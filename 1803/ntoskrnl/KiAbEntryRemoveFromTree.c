/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x1400E9340
 * Callers:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     MiFreePagedPoolPages @ 0x1400094C0 (MiFreePagedPoolPages.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     NtGetWriteWatch @ 0x140024440 (NtGetWriteWatch.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140046B30 (MiInsertInSystemSpace.c)
 *     MiExpandPtes @ 0x14004A560 (MiExpandPtes.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x14006C674 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     KeAbEntryFree @ 0x14007C944 (KeAbEntryFree.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14007DAD0 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14007E7BC (SmpKeyedStoreSetVaRanges.c)
 *     PspUnlockQuotaExpansion @ 0x1400800BC (PspUnlockQuotaExpansion.c)
 *     MmResourcesAvailable @ 0x1400869F0 (MmResourcesAvailable.c)
 *     SmpKeyedStoreEntryGet @ 0x14008BD28 (SmpKeyedStoreEntryGet.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14008CA88 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14008EF6C (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14009224C (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140094DA4 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140096E64 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x140097874 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140099EC4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14009A974 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     RtlpHpFixedVsAllocate @ 0x1400AB270 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x1400AB668 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1400ABBE8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1400AC488 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpFixedVsFree @ 0x1400AC960 (RtlpHpFixedVsFree.c)
 *     CcAmILowPriorityWriter @ 0x1400BAFF8 (CcAmILowPriorityWriter.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1400BC2F8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400C33BC (SepDeleteSessionLowboxEntries.c)
 *     MiObtainSessionVa @ 0x1400CB090 (MiObtainSessionVa.c)
 *     MiReleaseSessionVa @ 0x1400CD1E0 (MiReleaseSessionVa.c)
 *     MiDereferenceExtendInfo @ 0x1400CF1C0 (MiDereferenceExtendInfo.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1400D182C (ExQueryHandleExceptionsPermanency.c)
 *     MiAllocatePagedPoolPages @ 0x1400D9750 (MiAllocatePagedPoolPages.c)
 *     MiManageSubsectionView @ 0x1400DDC40 (MiManageSubsectionView.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140103C50 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140103DE0 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiCommitPageTableRangesForVad @ 0x140142BE4 (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     PfTSetTraceWorkerPriority @ 0x14014F258 (PfTSetTraceWorkerPriority.c)
 *     KeAbCrossThreadRelease @ 0x1401581B8 (KeAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14015A954 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14015AA34 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorFree @ 0x14015E594 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14015E660 (ExpSaPageGroupFreeMemory.c)
 *     MiUnlockDriverMappings @ 0x140160550 (MiUnlockDriverMappings.c)
 *     MiFreeUnusedPfnPages @ 0x14017A360 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x140186E04 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x140187064 (PspUnlockQuotaListExclusive.c)
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14025DC18 (MiIncrementLargeSubsections.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiRemovePlaceholderVad @ 0x140268600 (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x14026BA30 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x14026E3BC (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14026F364 (MiInsertPartitionPages.c)
 *     RtlpHpHeapExtendContext @ 0x1402953E0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrAlloc @ 0x140296050 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402969E4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140298508 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140299490 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140299878 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x14029B504 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14029C288 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14029C8C8 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhSubsegmentLockOwner @ 0x14029CDCC (RtlpHpLfhSubsegmentLockOwner.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402A2B28 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402A2D74 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x1402A79AC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402A7D90 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402A825C (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpDisableCompression @ 0x1402B3888 (EtwpDisableCompression.c)
 *     ExDisableHandleTracing @ 0x1402B7DA4 (ExDisableHandleTracing.c)
 *     ExpSvmDereferenceDevice @ 0x1402BC3A0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1402BDE9C (ExpSaPageGroupDescriptorFree.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     RtlRbReplaceNode @ 0x1400BCBC0 (RtlRbReplaceNode.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x1400EA1A0 (KiAbTryDecrementIoWaiterCounts.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400F3540 (ExpAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node, __int64 a2)
{
  unsigned int ParentValue; // edi
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  volatile LONG *v6; // r14
  unsigned __int64 *v7; // r15
  unsigned __int8 CurrentIrql; // r12
  int i; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rax
  volatile __int64 *v16; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v19; // eax
  _QWORD *v20; // rdx
  _RTL_RB_TREE *v21; // rcx
  unsigned __int64 Root; // rdi
  __int16 v23; // cx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  __int64 Next; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  unsigned __int16 v32; // ax
  char *v33; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+38h] [rbp-40h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  ParentValue = Node[1].ParentValue;
  v4 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v5 = ((v4 >> 4) & 0x3FF) << 6;
  v6 = (volatile LONG *)((char *)&KiAbTreeArray + v5 + 16);
  v7 = (unsigned __int64 *)((char *)&KiAbTreeArray + v5);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
    {
      LOBYTE(a2) = -1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, a2);
      else
        ExpAcquireSpinLockExclusive(v6, a2);
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v6);
    }
    v10 = v7[1];
    v11 = *v7;
    if ( (v10 & 1) != 0 )
    {
      if ( v11 )
        v11 ^= (unsigned __int64)v7;
      else
        v11 = 0LL;
    }
    v12 = v10 & 1;
    while ( v11 )
    {
      v13 = *(_QWORD *)(v11 + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v13 < v4 )
        goto LABEL_17;
      if ( v13 > v4 )
        goto LABEL_15;
      v14 = *(_DWORD *)(v11 + 40);
      if ( v14 == ParentValue )
        break;
      if ( v14 < ParentValue )
LABEL_17:
        v15 = *(_QWORD *)(v11 + 8);
      else
LABEL_15:
        v15 = *(_QWORD *)v11;
      if ( v12 && v15 )
        v11 ^= v15;
      else
        v11 = v15;
    }
    LockHandle.LockQueue.Next = 0LL;
    v16 = (volatile __int64 *)(v11 + 80);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 80);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = SchedulerAssist[5];
        SchedulerAssist[5] = v19 + 1;
        if ( v19 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16);
    }
    else
    {
      v20 = (_QWORD *)_InterlockedExchange64(v16, (__int64)&LockHandle);
      if ( v20 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v20);
    }
    if ( (PRTL_BALANCED_NODE)v11 != Node )
    {
      if ( i )
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v6);
      HIBYTE(Node[1].Right) &= ~0x80u;
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      {
        KiAbTryDecrementIoWaiterCounts(Node, v11);
        v31 = 64LL;
      }
      else
      {
        v31 = 48LL;
      }
      RtlRbRemoveNode((PRTL_RB_TREE)(v31 + v11), Node);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_70;
    }
    if ( i )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_QWORD *)(v11 + 64) )
  {
    v21 = (_RTL_RB_TREE *)(v11 + 64);
  }
  else
  {
    v21 = (_RTL_RB_TREE *)(v11 + 48);
    if ( !*(_QWORD *)(v11 + 48) )
      goto LABEL_41;
  }
  if ( v21 )
  {
    Root = (unsigned __int64)v21->Root;
    RtlRbRemoveNode(v21, v21->Root);
    RtlRbReplaceNode(v7, v11, Root);
    v36.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    v36.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)(Root + 80));
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    v23 = *(_WORD *)(Root + 90);
    *(_OWORD *)(Root + 48) = *(_OWORD *)(v11 + 48);
    *(_OWORD *)(Root + 64) = *(_OWORD *)(v11 + 64);
    *(_WORD *)(Root + 90) ^= (*(_WORD *)(v11 + 90) ^ v23) & 0x1FE;
    *(_WORD *)(Root + 90) = *(_WORD *)(v11 + 90) ^ (*(_WORD *)(Root + 90) ^ *(_WORD *)(v11 + 90)) & 0x1FF;
    KiAbTryDecrementIoWaiterCounts(v11, Root);
    *(_BYTE *)(Root + 27) |= 1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
    goto LABEL_51;
  }
LABEL_41:
  RtlRbRemoveNode((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v11);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
  else
    *v6 = 0;
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v26 = v25[5] - 1;
      v25[5] = v26;
      if ( !v26 && !*((_BYTE *)v25 + 25) && !*((_BYTE *)v25 + 27) )
        KiPerformUnboostKick(v24);
    }
  }
  KiAbTryDecrementIoWaiterCounts(v11, v11);
LABEL_51:
  *(_BYTE *)(v11 + 39) &= ~0x80u;
  *(_BYTE *)(v11 + 27) &= ~1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_57;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_57;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_57:
  v28 = KeGetCurrentPrcb();
  v29 = v28->SchedulerAssist;
  if ( v29 )
  {
    if ( v28->NestingLevel <= 1u )
    {
      v30 = v29[5] - 1;
      v29[5] = v30;
      if ( !v30 && !*((_BYTE *)v29 + 25) && !*((_BYTE *)v29 + 27) )
        KiPerformUnboostKick(v28);
    }
  }
LABEL_70:
  v32 = 16 * LOBYTE(Node[1].Children[0]);
  v33 = (char *)Node - v32;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v33[793];
  else
    LOBYTE(v32) = _InterlockedExchangeAdd8(v33 + 1423, 0xFFu);
  __writecr8(CurrentIrql);
  return v32;
}
