/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x140051920
 * Callers:
 *     KeQueryOwnerMutant @ 0x140003D24 (KeQueryOwnerMutant.c)
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     KeInsertQueueEx @ 0x140010EB0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x140011118 (KiInsertQueueInternal.c)
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     ExpDeleteMutant @ 0x140011530 (ExpDeleteMutant.c)
 *     KeWaitForGate @ 0x140017A68 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140017B70 (KiWaitForAllObjects.c)
 *     KiProcessThreadWaitList @ 0x14001C060 (KiProcessThreadWaitList.c)
 *     KeResumeThread @ 0x1400256A4 (KeResumeThread.c)
 *     KeTimeOutQueueWaiters @ 0x14002969C (KeTimeOutQueueWaiters.c)
 *     KiSwitchQueue @ 0x140029E3C (KiSwitchQueue.c)
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeRemoveQueueEntry @ 0x140031CA4 (KeRemoveQueueEntry.c)
 *     KiSwitchPriQueue @ 0x1400363E8 (KiSwitchPriQueue.c)
 *     KiDecrementProcessStackCount @ 0x14003FB0C (KiDecrementProcessStackCount.c)
 *     KiOutSwapProcesses @ 0x140040840 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x140040F94 (KiInSwapProcesses.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     PpmCheckRun @ 0x140045590 (PpmCheckRun.c)
 *     KiTimer2Expiration @ 0x140047B60 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     KeDeregisterObjectNotification @ 0x140051420 (KeDeregisterObjectNotification.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400514B0 (NtAssociateWaitCompletionPacket.c)
 *     KeInsertPriQueue @ 0x1400689F0 (KeInsertPriQueue.c)
 *     KiFreezeSingleThread @ 0x140072F08 (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x140072F68 (KeSuspendThread.c)
 *     KiSuspendThread @ 0x14007301C (KiSuspendThread.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     KiDetachProcess @ 0x1400B1E40 (KiDetachProcess.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiDirectSwitchThread @ 0x1400E1C90 (KiDirectSwitchThread.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     KiReadyThread @ 0x1400E2E20 (KiReadyThread.c)
 *     IoSetIoCompletionEx @ 0x1400E30E0 (IoSetIoCompletionEx.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 *     KiThawSingleThread @ 0x140120CB4 (KiThawSingleThread.c)
 *     KeRegisterObjectNotification @ 0x14012A4E8 (KeRegisterObjectNotification.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14012B098 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KeRetryOutswapProcess @ 0x1401FD0EC (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x1401FE678 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x140201B30 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140203CEC (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x140205B3C (KiSatisfyThreadWait.c)
 *     KeGetTimer2DueTime @ 0x1402063F4 (KeGetTimer2DueTime.c)
 *     ExGetTimerDueTime @ 0x14025CBD4 (ExGetTimerDueTime.c)
 *     ExpCheckForWorker @ 0x14025D678 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
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
