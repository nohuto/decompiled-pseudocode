/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140048030
 * Callers:
 *     MiCloneReserveVadCommit @ 0x140003268 (MiCloneReserveVadCommit.c)
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14001ED9C (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14001F550 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14001F9B4 (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400203E4 (MiUnlockDynamicMemoryExclusive.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140022EC0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14002AEB8 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     PspUnlockQuotaExpansion @ 0x14002C74C (PspUnlockQuotaExpansion.c)
 *     MiReleaseSessionVa @ 0x140035AD4 (MiReleaseSessionVa.c)
 *     KeAbEntryFree @ 0x14003FCFC (KeAbEntryFree.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053EC8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140054FF0 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140055720 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005B2AC (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1400A98F0 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400DA7D0 (MiFinishVadDeletion.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1400F0370 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x1400F04E0 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MmAssignProcessToJob @ 0x14011D7EC (MmAssignProcessToJob.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140121970 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     MiUnlockDriverMappings @ 0x140125548 (MiUnlockDriverMappings.c)
 *     MiObtainSessionVa @ 0x140125850 (MiObtainSessionVa.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MmResourcesAvailable @ 0x14012A820 (MmResourcesAvailable.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x14012E500 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x14012F544 (SmpKeyedStoreSetVaRanges.c)
 *     MiDereferenceExtendInfo @ 0x14013109C (MiDereferenceExtendInfo.c)
 *     PfTSetTraceWorkerPriority @ 0x140138120 (PfTSetTraceWorkerPriority.c)
 *     SepDeleteSessionLowboxEntries @ 0x1401433DC (SepDeleteSessionLowboxEntries.c)
 *     KeAbCrossThreadRelease @ 0x14014E18C (KeAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14014F0C4 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14014F418 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140151CD4 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140151FB8 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 *     MiFreeUnusedPfnPages @ 0x14015A8A0 (MiFreeUnusedPfnPages.c)
 *     PspUnlockQuotaListExclusive @ 0x14016836C (PspUnlockQuotaListExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140218D2C (MiIncrementLargeSubsections.c)
 *     MiClearPartitionPageBitMap @ 0x14021D530 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402239A0 (MiContractWsSwapPageFileWorker.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140249920 (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140249B6C (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x14024E424 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x14024E820 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14024ECBC (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpDisableCompression @ 0x140257B90 (EtwpDisableCompression.c)
 *     ExDisableHandleTracing @ 0x14025A2AC (ExDisableHandleTracing.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14025A5F4 (ExQueryHandleExceptionsPermanency.c)
 *     ExpSvmDereferenceDevice @ 0x14025E500 (ExpSvmDereferenceDevice.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 * Callees:
 *     RtlRbReplaceNode @ 0x140025BB0 (RtlRbReplaceNode.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     RtlRbRemoveNode @ 0x140048460 (RtlRbRemoveNode.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x14004B720 (KiAbTryDecrementIoWaiterCounts.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node, __int64 a2)
{
  __int64 v3; // rax
  volatile signed __int32 *v4; // r14
  _RTL_RB_TREE *v5; // r12
  unsigned __int8 CurrentIrql; // r13
  int i; // edi
  signed __int32 v8; // edx
  __int64 Root; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _RTL_RB_TREE *v12; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v14; // rax
  char *v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  bool v19; // zf
  signed __int32 v20; // eax
  unsigned __int64 v22; // [rsp+20h] [rbp-40h]
  unsigned int ParentValue; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  int v27; // [rsp+90h] [rbp+30h] BYREF

  ParentValue = Node[1].ParentValue;
  v22 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v3 = ((v22 >> 4) & 0x3FF) << 6;
  v4 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v3 + 16);
  v5 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, a2);
      }
      else
      {
        v27 = 0;
        if ( _interlockedbittestandset(v4, 0x1Fu) )
        {
          LOBYTE(a2) = -1;
          v27 = ExpWaitForSpinLockExclusiveAndAcquire(v4, a2);
        }
        v8 = *v4;
        while ( (v8 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v8 & 0x40000000) == 0 )
          {
            v20 = _InterlockedCompareExchange(v4, v8 | 0x40000000, v8);
            v19 = v8 == v20;
            v8 = v20;
            if ( !v19 )
              continue;
          }
          KeYieldProcessorEx(&v27);
          v8 = *v4;
        }
      }
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v4);
    }
    Root = (__int64)v5->Root;
    while ( Root )
    {
      v10 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v22 )
        goto LABEL_42;
      if ( v10 > v22 )
        goto LABEL_53;
      v11 = *(_DWORD *)(Root + 40);
      if ( v11 == ParentValue )
        break;
      if ( v11 < ParentValue )
      {
LABEL_42:
        v18 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&v5->0 & 1) != 0 && v18 )
        {
LABEL_60:
          Root ^= v18;
          continue;
        }
      }
      else
      {
LABEL_53:
        v18 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&v5->0 & 1) != 0 && v18 )
          goto LABEL_60;
      }
      Root = v18;
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, Root + 80);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(Root + 80), (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    if ( (PRTL_BALANCED_NODE)Root != Node )
    {
      if ( i )
        ExReleaseSpinLockExclusiveFromDpcLevel(v4);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v4);
      HIBYTE(Node[1].Right) &= ~0x80u;
      if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
      {
        KiAbTryDecrementIoWaiterCounts(Node, Root);
        v16 = 64LL;
      }
      else
      {
        v16 = 48LL;
      }
      RtlRbRemoveNode((PRTL_RB_TREE)(v16 + Root), Node);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_27;
    }
    if ( i )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v4);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_QWORD *)(Root + 64) )
  {
    v12 = (_RTL_RB_TREE *)(Root + 64);
  }
  else
  {
    v12 = (_RTL_RB_TREE *)(Root + 48);
    if ( !*(_QWORD *)(Root + 48) )
      goto LABEL_18;
  }
  if ( v12 )
  {
    v17 = (unsigned __int64)v12->Root;
    RtlRbRemoveNode(v12, v12->Root);
    RtlRbReplaceNode((__int64)v5, Root, v17);
    v25.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 80);
    v25.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v25);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    *(_OWORD *)(v17 + 48) = *(_OWORD *)(Root + 48);
    *(_OWORD *)(v17 + 64) = *(_OWORD *)(Root + 64);
    *(_WORD *)(v17 + 90) ^= (*(_WORD *)(v17 + 90) ^ *(_WORD *)(Root + 90)) & 0x1FE;
    *(_WORD *)(v17 + 90) = *(_WORD *)(Root + 90) ^ (*(_WORD *)(v17 + 90) ^ *(_WORD *)(Root + 90)) & 0x1FF;
    KiAbTryDecrementIoWaiterCounts(Root, v17);
    *(_BYTE *)(v17 + 27) |= 1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25);
    goto LABEL_24;
  }
LABEL_18:
  RtlRbRemoveNode(v5, (PRTL_BALANCED_NODE)Root);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  if ( (*(_BYTE *)(Root + 27) & 2) != 0 )
  {
    *(_WORD *)(Root + 90) ^= (*(_WORD *)(Root + 90) ^ (2 * ((*(_WORD *)(Root + 90) >> 1) - 1))) & 0x1FE;
    *(_BYTE *)(Root + 27) &= ~2u;
  }
  if ( (*(_BYTE *)(Root + 27) & 4) != 0 )
  {
    *(_WORD *)(Root + 90) = *(_WORD *)(Root + 90) & 0x1FF | (((*(_WORD *)(Root + 90) >> 9) - 1) << 9);
    *(_BYTE *)(Root + 27) &= ~4u;
  }
LABEL_24:
  *(_BYTE *)(Root + 39) &= ~0x80u;
  *(_BYTE *)(Root + 27) &= ~1u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
  }
  else
  {
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_27;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_27:
  v14 = 16LL * LOBYTE(Node[1].Children[0]);
  v15 = (char *)Node - v14;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v15[793];
  else
    LOBYTE(v14) = _InterlockedExchangeAdd8(v15 + 1423, 0xFFu);
  __writecr8(CurrentIrql);
  return v14;
}
