/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140016B40
 * Callers:
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140016B10 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400867C0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1401175A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401E7AE0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E7C48 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x140202430 (KeAcquireGuardedMutexUnsafe.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14044BBC8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14044BCDC (CmpPrepareLightWeightTransaction.c)
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     CmpFlushNotify @ 0x14046E88C (CmpFlushNotify.c)
 *     CmpCreateHiveRootCell @ 0x14046F4A4 (CmpCreateHiveRootCell.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140479EE0 (HvpDoAllocateCell.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyTriggerCheck @ 0x14047BE6C (CmpNotifyTriggerCheck.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmpReportNotifyHelper @ 0x14047C340 (CmpReportNotifyHelper.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x140566CD0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCleanup @ 0x1405677D0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405689D4 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140568E08 (CmpTransSearchAddLightWeightTrans.c)
 *     LOCK_TRANSACTION_LIST @ 0x140569570 (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrRollback @ 0x14056964C (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x140569704 (CmSnapshotRMTxArray.c)
 *     CmKtmNotification @ 0x1405697C0 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x14056A274 (CmpIsCmRm.c)
 *     FsRtlOplockBreakH @ 0x140585890 (FsRtlOplockBreakH.c)
 *     CmpRunDownCmRM @ 0x140597B4C (CmpRunDownCmRM.c)
 *     CmRmFinalizeRecovery @ 0x14059BF00 (CmRmFinalizeRecovery.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405D70D4 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1405E3310 (CmpLogCheckpoint.c)
 *     SepNotifyFileSystems @ 0x1405E80F0 (SepNotifyFileSystems.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1405EEE20 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x140693E78 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140693FA0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x140694210 (CmpQueueLazyCommitWorker.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 *     CmpMarkEntireIndexDirty @ 0x14069B540 (CmpMarkEntireIndexDirty.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1406B0B6C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1406B0CA8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x1406B2250 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1406D8330 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x14072ECF0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x14072ED90 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x14072EE60 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407591A4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14075A890 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14075B948 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14075BAD0 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14075C71C (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x14075C910 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x14075CA24 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x14075CC90 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x14075CF8C (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x14075D200 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x14075D2B0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x14075D5DC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14075D7E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x14075D9E0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x14075DBE4 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140837EC8 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExpAcquireFastMutexContended @ 0x1400BAC30 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14027AE7C (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rdi
  unsigned int AbEntrySummary; // ecx
  __int64 v5; // rax
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 AbOrphanedEntrySummary; // di
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v9 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  if ( !CurrentThread->AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v10 = v5;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  v2 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_1403899D0[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v2 + 40) = SessionId;
  *(_QWORD *)(v2 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, FastMutex, &v9);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
