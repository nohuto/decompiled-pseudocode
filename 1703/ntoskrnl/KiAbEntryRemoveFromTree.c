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

char __fastcall KiAbEntryRemoveFromTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // r14
  char *v6; // r12
  unsigned __int8 CurrentIrql; // r13
  int i; // edi
  signed __int32 v9; // edx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int64 *v13; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  bool v21; // zf
  signed __int32 v22; // eax
  unsigned __int64 v24; // [rsp+20h] [rbp-40h]
  unsigned int v25; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  int v29; // [rsp+90h] [rbp+30h] BYREF

  v25 = *(_DWORD *)(a1 + 40);
  v24 = *(_QWORD *)(a1 + 32) & 0x7FFFFFFFFFFFFFFCLL;
  v4 = ((v24 >> 4) & 0x3FF) << 6;
  v5 = (volatile signed __int32 *)((char *)&KiAbTreeArray + v4 + 16);
  v6 = (char *)&KiAbTreeArray + v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  for ( i = *(_BYTE *)(a1 + 27) & 1; ; i = 1 )
  {
    if ( i )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(a2) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v5, a2);
      }
      else
      {
        v29 = 0;
        if ( _interlockedbittestandset(v5, 0x1Fu) )
        {
          LOBYTE(a2) = -1;
          v29 = ExpWaitForSpinLockExclusiveAndAcquire(v5, a2);
        }
        v9 = *v5;
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v22 = _InterlockedCompareExchange(v5, v9 | 0x40000000, v9);
            v21 = v9 == v22;
            v9 = v22;
            if ( !v21 )
              continue;
          }
          KeYieldProcessorEx(&v29);
          v9 = *v5;
        }
      }
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v5);
    }
    v10 = *(_QWORD *)v6;
    while ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v11 < v24 )
        goto LABEL_42;
      if ( v11 > v24 )
        goto LABEL_53;
      v12 = *(_DWORD *)(v10 + 40);
      if ( v12 == v25 )
        break;
      if ( v12 < v25 )
      {
LABEL_42:
        v20 = *(_QWORD *)(v10 + 8);
        if ( (v6[8] & 1) != 0 && v20 )
        {
LABEL_60:
          v10 ^= v20;
          continue;
        }
      }
      else
      {
LABEL_53:
        v20 = *(_QWORD *)v10;
        if ( (v6[8] & 1) != 0 && v20 )
          goto LABEL_60;
      }
      v10 = v20;
    }
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 80);
    LockHandle.LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10 + 80);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v10 + 80), (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    if ( v10 != a1 )
    {
      if ( i )
        ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      else
        ExReleaseSpinLockSharedFromDpcLevel(v5);
      *(_BYTE *)(a1 + 39) &= ~0x80u;
      if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
      {
        KiAbTryDecrementIoWaiterCounts(a1, v10);
        v18 = 64LL;
      }
      else
      {
        v18 = 48LL;
      }
      RtlRbRemoveNode(v18 + v10, a1, v17);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_27;
    }
    if ( i )
      break;
    ExReleaseSpinLockSharedFromDpcLevel(v5);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( *(_QWORD *)(v10 + 64) )
  {
    v13 = (unsigned __int64 *)(v10 + 64);
  }
  else
  {
    v13 = (unsigned __int64 *)(v10 + 48);
    if ( !*(_QWORD *)(v10 + 48) )
      goto LABEL_18;
  }
  if ( v13 )
  {
    v19 = *v13;
    RtlRbRemoveNode(v13, *v13, a3);
    RtlRbReplaceNode((__int64)v6, v10, v19);
    v27.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 80);
    v27.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v27);
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    *(_OWORD *)(v19 + 48) = *(_OWORD *)(v10 + 48);
    *(_OWORD *)(v19 + 64) = *(_OWORD *)(v10 + 64);
    *(_WORD *)(v19 + 90) ^= (*(_WORD *)(v19 + 90) ^ *(_WORD *)(v10 + 90)) & 0x1FE;
    *(_WORD *)(v19 + 90) = *(_WORD *)(v10 + 90) ^ (*(_WORD *)(v19 + 90) ^ *(_WORD *)(v10 + 90)) & 0x1FF;
    KiAbTryDecrementIoWaiterCounts(v10, v19);
    *(_BYTE *)(v19 + 27) |= 1u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
    goto LABEL_24;
  }
LABEL_18:
  RtlRbRemoveNode(v6, v10, a3);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v5, retaddr);
  else
    *v5 = 0;
  if ( (*(_BYTE *)(v10 + 27) & 2) != 0 )
  {
    *(_WORD *)(v10 + 90) ^= (*(_WORD *)(v10 + 90) ^ (2 * ((*(_WORD *)(v10 + 90) >> 1) - 1))) & 0x1FE;
    *(_BYTE *)(v10 + 27) &= ~2u;
  }
  if ( (*(_BYTE *)(v10 + 27) & 4) != 0 )
  {
    *(_WORD *)(v10 + 90) = *(_WORD *)(v10 + 90) & 0x1FF | (((*(_WORD *)(v10 + 90) >> 9) - 1) << 9);
    *(_BYTE *)(v10 + 27) &= ~4u;
  }
LABEL_24:
  *(_BYTE *)(v10 + 39) &= ~0x80u;
  *(_BYTE *)(v10 + 27) &= ~1u;
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
  v15 = 16LL * *(unsigned __int8 *)(a1 + 24);
  v16 = a1 - v15;
  if ( (*(_BYTE *)(a1 + 25) & 1) != 0 )
    --*(_BYTE *)(v16 + 793);
  else
    LOBYTE(v15) = _InterlockedExchangeAdd8((volatile signed __int8 *)(v16 + 1423), 0xFFu);
  __writecr8(CurrentIrql);
  return v15;
}
