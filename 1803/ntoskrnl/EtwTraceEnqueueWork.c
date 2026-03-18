/*
 * XREFs of EtwTraceEnqueueWork @ 0x1402AEBAC
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
 *     KeInsertHeadQueue @ 0x140245D30 (KeInsertHeadQueue.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceEnqueueWork(__int64 a1, __int64 a2, char a3)
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
