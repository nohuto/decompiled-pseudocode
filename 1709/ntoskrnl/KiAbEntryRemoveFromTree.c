/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x14005EA50
 * Callers:
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14000429C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004560 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140004A3C (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140005AC8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     CcApplyLowIoPriorityToThread @ 0x140022680 (CcApplyLowIoPriorityToThread.c)
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiFreePagedPoolPages @ 0x140035950 (MiFreePagedPoolPages.c)
 *     MiFinishVadDeletion @ 0x140037A20 (MiFinishVadDeletion.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreWait @ 0x14005F870 (KeAbPreWait.c)
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     MmResourcesAvailable @ 0x1400815F0 (MmResourcesAvailable.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140084600 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140084790 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     MiGetWsAndInsertVad @ 0x14009FAE0 (MiGetWsAndInsertVad.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1640 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1400A3110 (MiManageSubsectionView.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400B8A74 (MiUnlockDynamicMemoryExclusive.c)
 *     SmpKeyedStoreEntryGet @ 0x1400B9BEC (SmpKeyedStoreEntryGet.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbEntryFree @ 0x1400BB090 (KeAbEntryFree.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400BB278 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     PspUnlockQuotaExpansion @ 0x1400F1258 (PspUnlockQuotaExpansion.c)
 *     MiExpandPtes @ 0x1400F5BA0 (MiExpandPtes.c)
 *     MiReleaseSessionVa @ 0x1400F7EA8 (MiReleaseSessionVa.c)
 *     MiObtainSessionVa @ 0x1400F85C0 (MiObtainSessionVa.c)
 *     MiUnlockDriverMappings @ 0x1400F8C80 (MiUnlockDriverMappings.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 *     CcAmILowPriorityWriter @ 0x14011C2D0 (CcAmILowPriorityWriter.c)
 *     MiCommitPageTableRangesForVad @ 0x14012099C (MiCommitPageTableRangesForVad.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     SepDeleteSessionLowboxEntries @ 0x140133A34 (SepDeleteSessionLowboxEntries.c)
 *     KeAbCrossThreadRelease @ 0x140140734 (KeAbCrossThreadRelease.c)
 *     MiFreeUnusedPfnPages @ 0x140144320 (MiFreeUnusedPfnPages.c)
 *     ExpSaAllocatorAllocate @ 0x14014A620 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014A950 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x1401562B8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140156564 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140156834 (ExpSaPageGroupDescriptorFree.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015BB34 (ExQueryHandleExceptionsPermanency.c)
 *     MiUnlockPartitionSystemThreads @ 0x14015CF08 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x14015D198 (PspUnlockQuotaListExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 *     MiDereferenceExtendInfo @ 0x14021EE9C (MiDereferenceExtendInfo.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140223008 (MiIncrementLargeSubsections.c)
 *     MiContractWsSwapPageFileWorker @ 0x140230AC0 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140230E70 (MmOutSwapVirtualAddresses.c)
 *     MiClearPartitionPageBitMap @ 0x1402369EC (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     PfTSetTraceWorkerPriority @ 0x1402399C8 (PfTSetTraceWorkerPriority.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x1402659F4 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140265D68 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140266750 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x14026699C (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140266EC0 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14026864C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026DDA0 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14026F410 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140273FB0 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140274394 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14027485C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140274BC4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpDisableCompression @ 0x1402815F4 (EtwpDisableCompression.c)
 *     ExDisableHandleTracing @ 0x140283C40 (ExDisableHandleTracing.c)
 *     ExpSvmDereferenceDevice @ 0x140288050 (ExpSvmDereferenceDevice.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140115528 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140117F20 (RtlRbReplaceNode.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140286170 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node)
{
  __int64 v1; // rdx
  unsigned int ParentValue; // r13d
  unsigned __int64 v3; // rdi
  __int64 v5; // rax
  volatile signed __int32 *v6; // r14
  _RTL_RB_TREE *v7; // r12
  int i; // r15d
  signed __int32 v9; // edx
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _RTL_RB_TREE *v13; // rcx
  __int64 v14; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int16 v16; // ax
  char *v17; // rdx
  unsigned __int64 v18; // rcx
  signed __int32 v19; // ett
  _RTL_RB_TREE *v20; // r8
  __int64 v21; // rdx
  _RTL_BALANCED_NODE *v22; // rdi
  bool v23; // zf
  signed __int32 v24; // eax
  _RTL_BALANCED_NODE *v25; // rax
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  int v30; // [rsp+90h] [rbp+40h] BYREF
  __int64 CurrentIrql; // [rsp+98h] [rbp+48h]

  v1 = 0x7FFFFFFFFFFFFFFCLL;
  ParentValue = Node[1].ParentValue;
  v3 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v5 = ((v3 >> 4) & 0x3FF) << 6;
  v6 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v5 + 16);
  v7 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v5);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v1) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, v1);
      }
      else
      {
        v30 = 0;
        if ( _interlockedbittestandset(v6, 0x1Fu) )
          v30 = ExpWaitForSpinLockExclusiveAndAcquire(v6, 0xFFu);
        v9 = *v6;
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v24 = _InterlockedCompareExchange(v6, v9 | 0x40000000, v9);
            v23 = v9 == v24;
            v9 = v24;
            if ( !v23 )
              continue;
          }
          KeYieldProcessorEx(&v30);
          v9 = *v6;
        }
      }
    }
    else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v1) = -1;
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v6, v1);
    }
    else
    {
      _m_prefetchw((const void *)v6);
      v19 = *v6 & 0x7FFFFFFF;
      if ( v19 != _InterlockedCompareExchange(v6, v19 + 1, v19) )
      {
        LOBYTE(v1) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v6, v1);
      }
    }
    Root = v7->Root;
    while ( Root )
    {
      v11 = (__int64)Root[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
      if ( v11 > v3 )
        goto LABEL_59;
      if ( v11 < v3 )
        goto LABEL_63;
      v12 = Root[1].ParentValue;
      if ( v12 == ParentValue )
        break;
      if ( v12 < ParentValue )
      {
LABEL_63:
        v25 = Root->Children[1];
        if ( (*(_BYTE *)&v7->0 & 1) != 0 && v25 )
        {
LABEL_72:
          Root = (_RTL_BALANCED_NODE *)((unsigned __int64)v25 ^ (unsigned __int64)Root);
          continue;
        }
      }
      else
      {
LABEL_59:
        v25 = Root->Children[0];
        if ( (*(_BYTE *)&v7->0 & 1) != 0 && v25 )
          goto LABEL_72;
      }
      Root = v25;
    }
    v27.LockQueue.Lock = (unsigned __int64 *volatile)&Root[3].Children[1];
    v27.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v27, &Root[3].Right);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)&Root[3].Children[1], (__int64)&v27) )
    {
      KxWaitForLockOwnerShip(&v27);
    }
    if ( Root != Node )
      break;
    if ( i )
    {
      if ( Root[2].ParentValue )
      {
        v13 = (_RTL_RB_TREE *)&Root[2].16;
      }
      else
      {
        v13 = (_RTL_RB_TREE *)&Root[2];
        if ( !Root[2].Children[0] )
          goto LABEL_18;
      }
      if ( v13 )
      {
        v22 = v13->Root;
        RtlRbRemoveNode(v13, v13->Root);
        RtlRbReplaceNode(v7, Root, v22);
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&v22[3].Children[1];
        LockHandle.LockQueue.Next = 0LL;
        KxAcquireQueuedSpinLock(&LockHandle);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        v22[2].0 = Root[2].0;
        *(_OWORD *)&v22[2].0 = *(_OWORD *)&Root[2].0;
        *((_WORD *)&v22[3].1 + 1) ^= (*((_WORD *)&v22[3].1 + 1) ^ *((_WORD *)&Root[3].1 + 1)) & 0x1FE;
        *((_WORD *)&v22[3].1 + 1) = *((_WORD *)&Root[3].1 + 1) ^ (*((_WORD *)&v22[3].1 + 1) ^ *((_WORD *)&Root[3].1 + 1)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v22);
        BYTE3(v22[1].Left) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
      else
      {
LABEL_18:
        RtlRbRemoveNode(v7, Root);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v6, retaddr);
        else
          *v6 = 0;
        if ( (BYTE3(Root[1].Left) & 2) != 0 )
        {
          v14 = 510LL;
          *((_WORD *)&Root[3].1 + 1) ^= (*((_WORD *)&Root[3].1 + 1) ^ (2 * ((*((_WORD *)&Root[3].1 + 1) >> 1) - 1))) & 0x1FE;
          BYTE3(Root[1].Left) &= ~2u;
        }
        if ( (BYTE3(Root[1].Left) & 4) != 0 )
        {
          *((_WORD *)&Root[3].1 + 1) = *((_WORD *)&Root[3].1 + 1) & 0x1FF | (((*((_WORD *)&Root[3].1 + 1) >> 9) - 1) << 9);
          BYTE3(Root[1].Left) &= ~4u;
        }
      }
      HIBYTE(Root[1].Right) &= ~0x80u;
      BYTE3(Root[1].Left) &= ~1u;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
      {
        _m_prefetchw(&v27);
        Next = v27.LockQueue.Next;
        if ( !v27.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)v27.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&v27) == &v27 )
            goto LABEL_27;
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v27, v14);
        }
LABEL_46:
        v27.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        goto LABEL_27;
      }
      goto LABEL_75;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v6);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
    v1 = 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( i )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v6, retaddr);
  }
  else
  {
    _InterlockedAnd(v6, 0xBFFFFFFF);
    _InterlockedDecrement(v6);
  }
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    v20 = (_RTL_RB_TREE *)&Root[2].16;
    if ( (BYTE3(Node[1].Left) & 2) != 0 )
    {
      *((_WORD *)&Root[3].1 + 1) ^= (*((_WORD *)&Root[3].1 + 1) ^ (2 * ((*((_WORD *)&Root[3].1 + 1) >> 1) - 1))) & 0x1FE;
      BYTE3(Node[1].Left) &= ~2u;
    }
    if ( (BYTE3(Node[1].Left) & 4) != 0 )
    {
      *((_WORD *)&Root[3].1 + 1) = *((_WORD *)&Root[3].1 + 1) & 0x1FF | (((*((_WORD *)&Root[3].1 + 1) >> 9) - 1) << 9);
      BYTE3(Node[1].Left) &= ~4u;
    }
  }
  else
  {
    v20 = (_RTL_RB_TREE *)&Root[2];
  }
  RtlRbRemoveNode(v20, Node);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v27);
    Next = v27.LockQueue.Next;
    if ( !v27.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)v27.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&v27) == &v27 )
        goto LABEL_27;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v27, v21);
    }
    goto LABEL_46;
  }
LABEL_75:
  KiReleaseQueuedSpinLockInstrumented(&v27, retaddr);
LABEL_27:
  v16 = 16 * LOBYTE(Node[1].Children[0]);
  v17 = (char *)Node - v16;
  v18 = (unsigned __int8)CurrentIrql;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v17[793];
  else
    LOBYTE(v16) = _InterlockedExchangeAdd8(v17 + 1423, 0xFFu);
  __writecr8(v18);
  return v16;
}
