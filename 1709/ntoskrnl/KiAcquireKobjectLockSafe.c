/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400E3300
 * Callers:
 *     KeInsertPriQueue @ 0x140021C30 (KeInsertPriQueue.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400623F0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400728B0 (KiExitDispatcher.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiDirectSwitchThread @ 0x14008DBB0 (KiDirectSwitchThread.c)
 *     PpmCheckRun @ 0x14008F490 (PpmCheckRun.c)
 *     KiTimer2Expiration @ 0x140092BD0 (KiTimer2Expiration.c)
 *     KiReadyThread @ 0x1400932D0 (KiReadyThread.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x1400AA148 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400ABB8C (KiSuspendThread.c)
 *     KeSuspendThread @ 0x1400AC2F8 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x1400AC524 (KiFreezeSingleThread.c)
 *     KiDecrementProcessStackCount @ 0x1400AD3D8 (KiDecrementProcessStackCount.c)
 *     KeSetProcess @ 0x1400AE74C (KeSetProcess.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1400B2AC0 (KeTimeOutQueueWaiters.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KeRundownQueueEx @ 0x1400DB4A4 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x1400DB574 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     KeDeregisterObjectNotification @ 0x1400E293C (KeDeregisterObjectNotification.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400E29D0 (NtAssociateWaitCompletionPacket.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KiWaitForAllObjects @ 0x1400E3B9C (KiWaitForAllObjects.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KiSwitchQueue @ 0x1401076B0 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140107730 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeInsertQueueEx @ 0x140110C00 (KeInsertQueueEx.c)
 *     KiOutSwapProcesses @ 0x140111E50 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14011465C (KiInSwapProcesses.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KeResumeThread @ 0x14011CDF8 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x140121B84 (KiThawSingleThread.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     KiInsertQueueInternal @ 0x140124ED8 (KiInsertQueueInternal.c)
 *     KeRemoveQueueEntry @ 0x140126168 (KeRemoveQueueEntry.c)
 *     KeQueryOwnerMutant @ 0x14012B14C (KeQueryOwnerMutant.c)
 *     KiSwitchPriQueue @ 0x14012B684 (KiSwitchPriQueue.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
 *     KiSetSystemTimeDpc @ 0x140149AE0 (KiSetSystemTimeDpc.c)
 *     KeRetryOutswapProcess @ 0x140202F18 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140204914 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x140208100 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x14020A1F4 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14020BCB4 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14020D150 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x14024E8F4 (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x140287298 (ExpCheckForWorker.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireKobjectLockSafe(volatile signed __int32 *a1)
{
  unsigned int v1; // edi
  __int64 result; // rax

  v1 = 0;
  if ( _interlockedbittestandset(a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v1);
      result = *(unsigned int *)a1;
    }
    while ( (result & 0x80u) != 0LL || _interlockedbittestandset(a1, 7u) );
  }
  return result;
}
