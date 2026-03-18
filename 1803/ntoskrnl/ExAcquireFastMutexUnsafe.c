/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140068180
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140066DD0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x1400B6BD0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x1400B83C0 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1402253C0 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140225528 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x14023F590 (KeAcquireGuardedMutexUnsafe.c)
 *     LOCK_TRANSACTION_LIST @ 0x140498AB4 (LOCK_TRANSACTION_LIST.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     CmpNotifyTriggerCheck @ 0x1404E289C (CmpNotifyTriggerCheck.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 *     CmpTransMgrRollback @ 0x14054BC94 (CmpTransMgrRollback.c)
 *     CmpCleanupLightWeightTransaction @ 0x14054BEFC (CmpCleanupLightWeightTransaction.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14054C228 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpRunDownCmRM @ 0x14054E698 (CmpRunDownCmRM.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14054E9B4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14054EAD4 (CmpPrepareLightWeightTransaction.c)
 *     CmKtmNotification @ 0x14054ED10 (CmKtmNotification.c)
 *     CmSnapshotRMTxArray @ 0x14054F008 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x14054F0C0 (CmpIsCmRm.c)
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14055B180 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x14055B4E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14055B570 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14055BD00 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     FsRtlOplockBreakH @ 0x140579BC0 (FsRtlOplockBreakH.c)
 *     CmRmFinalizeRecovery @ 0x1405824E8 (CmRmFinalizeRecovery.c)
 *     SepNotifyFileSystems @ 0x1405832A0 (SepNotifyFileSystems.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpTransSearchAddTrans @ 0x1405E145C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405E16EC (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1405E790C (CmpLogCheckpoint.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140652560 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmObliterateRMTxArray @ 0x1406F706C (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1406F7190 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x1406F740C (CmpQueueLazyCommitWorker.c)
 *     FsRtlCheckUpperOplock @ 0x140715180 (FsRtlCheckUpperOplock.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14071564C (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x140715788 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x140716D20 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x1407421B0 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140792DA0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140792E40 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140792F20 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1407C0090 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407C17BC (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407C2930 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407C2AB8 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1407C3288 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407C3738 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1407C3930 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1407C3A44 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1407C3CB0 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1407C3FAC (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407C4220 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407C42D0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1407C45FC (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1407C4800 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407C4A04 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1407C4C08 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140007DA0 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x1401043B0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1402AE854 (EtwTraceAutoBoostEntryExhaustion.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v2; // rsi
  __int64 v4; // rax
  char v5; // cl
  int SessionId; // eax
  bool v7; // zf
  unsigned __int8 AbOrphanedEntrySummary; // si
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v9 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  LOBYTE(v4) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v4 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v4) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
    CurrentThread->AbEntrySummary = v4;
  }
  v5 = v4;
  _BitScanForward((unsigned int *)&v4, (unsigned __int8)v4);
  v10 = v4;
  CurrentThread->AbEntrySummary = v5 & ~(1 << v4);
  v2 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v2 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_8;
  }
  if ( (unsigned __int64)FastMutex >= 0xFFFF800000000000uLL
    && byte_1403CCF90[(((unsigned __int64)FastMutex >> 39) & 0x1FF) - 256] == 1 )
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
  if ( v7 && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
