/*
 * XREFs of KeIsThreadRunning @ 0x14023FDC4
 * Callers:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     KiResumeThread @ 0x1400419D8 (KiResumeThread.c)
 *     ExpReleaseFastMutexContended @ 0x140064400 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriorityEx @ 0x14007BCF4 (KeSetEventBoostPriorityEx.c)
 *     KePulseEvent @ 0x140081280 (KePulseEvent.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x1400850DC (KiInsertQueueInternal.c)
 *     KeRegisterObjectNotification @ 0x140085E90 (KeRegisterObjectNotification.c)
 *     KeInsertQueueEx @ 0x140086460 (KeInsertQueueEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x140087AF0 (NtAssociateWaitCompletionPacket.c)
 *     KeSetProcess @ 0x14008AE20 (KeSetProcess.c)
 *     KeWakeWaitChain @ 0x1400BDED8 (KeWakeWaitChain.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1400C1D70 (KeInsertQueue.c)
 *     KiExpireTimer2 @ 0x1400EA230 (KiExpireTimer2.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x1400F9010 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140102B20 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140103050 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiTimerWaitTest @ 0x1401089B0 (KiTimerWaitTest.c)
 *     KeRundownQueueCommon @ 0x14013E274 (KeRundownQueueCommon.c)
 *     KeReleaseMutant @ 0x14013E470 (KeReleaseMutant.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     KeTryToInsertQueueApc @ 0x140245940 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140245D30 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1402B4FB4 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
