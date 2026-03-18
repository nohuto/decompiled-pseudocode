/*
 * XREFs of KiAcquireKobjectLockSafe @ 0x1400EA710
 * Callers:
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KiDetachProcess @ 0x14000A340 (KiDetachProcess.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140038350 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiDirectSwitchThread @ 0x1400399E0 (KiDirectSwitchThread.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     KiSuspendThread @ 0x140044BA8 (KiSuspendThread.c)
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x1400850DC (KiInsertQueueInternal.c)
 *     KeTimeOutQueueWaiters @ 0x140085270 (KeTimeOutQueueWaiters.c)
 *     KeRegisterObjectNotification @ 0x140085E90 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x140086460 (KeInsertQueueEx.c)
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x140086EF0 (KiWaitForAllObjects.c)
 *     KeDeregisterObjectNotification @ 0x140087A64 (KeDeregisterObjectNotification.c)
 *     NtAssociateWaitCompletionPacket @ 0x140087AF0 (NtAssociateWaitCompletionPacket.c)
 *     KeRemoveQueueEntry @ 0x140087FA8 (KeRemoveQueueEntry.c)
 *     KeSetProcess @ 0x14008AE20 (KeSetProcess.c)
 *     KeInsertPriQueue @ 0x14008F920 (KeInsertPriQueue.c)
 *     KiSwitchQueue @ 0x1400AF2F8 (KiSwitchQueue.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x1400B19F0 (KiProcessThreadWaitList.c)
 *     KiThawSingleThread @ 0x1400BD1B0 (KiThawSingleThread.c)
 *     KiFreezeSingleThread @ 0x1400BD320 (KiFreezeSingleThread.c)
 *     KeResumeThread @ 0x1400BD808 (KeResumeThread.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
 *     KiSwitchPriQueue @ 0x1400CEB28 (KiSwitchPriQueue.c)
 *     KiTimer2Expiration @ 0x1400E8E30 (KiTimer2Expiration.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     KiInSwapProcesses @ 0x1400EB0B0 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x1400EB1B0 (KiOutSwapProcesses.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KiCommitThreadWait @ 0x1400F64C0 (KiCommitThreadWait.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KiReadyThread @ 0x1400FB8E0 (KiReadyThread.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KeRundownQueueEx @ 0x14013E1A4 (KeRundownQueueEx.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     KeQueryOwnerMutant @ 0x140144404 (KeQueryOwnerMutant.c)
 *     KiSetSystemTimeDpc @ 0x140167EE0 (KiSetSystemTimeDpc.c)
 *     KeRetryOutswapProcess @ 0x140240590 (KeRetryOutswapProcess.c)
 *     KeQueryTimerDueTime @ 0x140242130 (KeQueryTimerDueTime.c)
 *     KeInsertHeadQueue @ 0x140245D30 (KeInsertHeadQueue.c)
 *     KiAdjustThreadTimer @ 0x140247E70 (KiAdjustThreadTimer.c)
 *     KiSatisfyThreadWait @ 0x14024A2D8 (KiSatisfyThreadWait.c)
 *     KeRundownPriQueue @ 0x14024B4E0 (KeRundownPriQueue.c)
 *     PspSetProcessTimerDelayForKTimers @ 0x140284C8C (PspSetProcessTimerDelayForKTimers.c)
 *     ExpCheckForWorker @ 0x1402BB594 (ExpCheckForWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
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
