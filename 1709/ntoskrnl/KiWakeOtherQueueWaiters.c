/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x140061290
 * Callers:
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     IopCompleteRequest @ 0x140070200 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
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
 *     KiInsertQueueInternal @ 0x140124ED8 (KiInsertQueueInternal.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    v5 = v2;
    v2 = (_QWORD *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v10 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
        __fastfail(3u);
      *v2 = v10;
      *(_QWORD *)(v10 + 8) = v2;
      *((_BYTE *)v5 + 17) = 5;
      KiInsertQueueInternal(v5[3], v5);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v7 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      v8 = *((unsigned __int16 *)v5 + 9);
      v9 = v5[3];
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(_QWORD *)(v9 + 64) );
      }
      if ( *(_BYTE *)(v9 + 388) == 5 )
        KiSignalThread(a1, v9, v8, v5);
      *(_QWORD *)(v9 + 64) = 0LL;
      ++*((_BYTE *)v5 + 17);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
