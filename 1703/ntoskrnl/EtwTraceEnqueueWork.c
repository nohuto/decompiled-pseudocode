/*
 * XREFs of EtwTraceEnqueueWork @ 0x1402535C8
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
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     KiTimerWaitTest @ 0x1400E43F0 (KiTimerWaitTest.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KeSetProcess @ 0x14011603C (KeSetProcess.c)
 *     KeRegisterObjectNotification @ 0x14012A4E8 (KeRegisterObjectNotification.c)
 *     KeInsertHeadQueue @ 0x140201B30 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void *__fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1600);
  v5 = a2;
  v6 = v3;
  v7 = &v5;
  v9 = 0;
  v8 = 12;
  return EtwTraceKernelEvent((int)&v7, 1, 0x21000000u, 1342, a3 != 0 ? 5250562 : 5244418);
}
