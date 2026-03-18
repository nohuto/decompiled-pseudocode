/*
 * XREFs of KeIsThreadRunning @ 0x14020277C
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
 *     KeTryToInsertQueueApc @ 0x140207B30 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140208100 (KeInsertHeadQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
