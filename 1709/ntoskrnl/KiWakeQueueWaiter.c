/*
 * XREFs of KiWakeQueueWaiter @ 0x140061410
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140083270 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400837A0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     PpmCheckRun @ 0x14008F490 (PpmCheckRun.c)
 *     KiTimerWaitTest @ 0x140093D00 (KiTimerWaitTest.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 *     ExpWakePushLock @ 0x1400A7F10 (ExpWakePushLock.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KeSetProcess @ 0x1400AE74C (KeSetProcess.c)
 *     KeRegisterObjectNotification @ 0x1400B25BC (KeRegisterObjectNotification.c)
 *     KiDetachProcess @ 0x1400BF4A0 (KiDetachProcess.c)
 *     KeRundownQueueCommon @ 0x1400DB574 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x1400DB760 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400E29D0 (NtAssociateWaitCompletionPacket.c)
 *     KiExpireTimer2 @ 0x1400E2E30 (KiExpireTimer2.c)
 *     KePulseEvent @ 0x1400F0C10 (KePulseEvent.c)
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 *     KiActivateWaiterKQueue @ 0x140107844 (KiActivateWaiterKQueue.c)
 *     KeInsertQueueEx @ 0x140110C00 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140115E38 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 *     KiInsertQueueInternal @ 0x140124ED8 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
 *     KeInsertHeadQueue @ 0x140208100 (KeInsertHeadQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400621E0 (KiSignalThread.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // r12
  __int64 v11; // rbp
  int v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  do
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      break;
    v8 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
      __fastfail(3u);
    *v9 = v8;
    v10 = 0;
    *(_QWORD *)(v8 + 8) = v9;
    v11 = v7[3];
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)(v11 + 64) );
    }
    if ( *(_BYTE *)(v11 + 388) == 5 )
      v10 = KiSignalThread(a1, v11, a3, v7);
    *(_QWORD *)(v11 + 64) = 0LL;
    ++*((_BYTE *)v7 + 17);
    if ( v10 )
      return 1;
  }
  while ( v3 != v4 );
  return 0;
}
