/*
 * XREFs of KiWakeQueueWaiter @ 0x140011680
 * Callers:
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     KeInsertQueueEx @ 0x140010EB0 (KeInsertQueueEx.c)
 *     KiInsertQueueInternal @ 0x140011118 (KiInsertQueueInternal.c)
 *     KeRundownQueueEx @ 0x140011290 (KeRundownQueueEx.c)
 *     ExpDeleteMutant @ 0x140011530 (ExpDeleteMutant.c)
 *     KeWakeWaitChain @ 0x14002CAF8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     PpmCheckRun @ 0x140045590 (PpmCheckRun.c)
 *     KiExpireTimer2 @ 0x140048CA0 (KiExpireTimer2.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400514B0 (NtAssociateWaitCompletionPacket.c)
 *     KePulseEvent @ 0x140082D10 (KePulseEvent.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     IoSetIoCompletionEx @ 0x1400E30E0 (IoSetIoCompletionEx.c)
 *     KeReleaseMutant @ 0x1400E3270 (KeReleaseMutant.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KiActivateWaiterKQueue @ 0x140115000 (KiActivateWaiterKQueue.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 *     KeRegisterObjectNotification @ 0x14012A4E8 (KeRegisterObjectNotification.c)
 *     KeInsertHeadQueue @ 0x140201B30 (KeInsertHeadQueue.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  _QWORD *v7; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rax

  v3 = (_QWORD *)(a2 + 8);
  v5 = *(_QWORD **)(a2 + 8);
  while ( 1 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( *((_BYTE *)v7 + 16) != 3 )
      return 0;
    v9 = *v7;
    v10 = (_QWORD *)v7[1];
    if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v10 != v7 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (unsigned __int8)KiTryUnwaitThread(a1, v7, a3, 0LL) )
      break;
    if ( v5 == v3 )
      return 0;
  }
  return 1;
}
