/*
 * XREFs of PsCaptureExceptionPort @ 0x1404D69B0
 * Callers:
 *     DbgkForwardException @ 0x1404504F4 (DbgkForwardException.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     ExpRaiseHardError @ 0x14050A5C4 (ExpRaiseHardError.c)
 *     PspFreezeProcessWorker @ 0x140719180 (PspFreezeProcessWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsCaptureExceptionPort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v3; // rdi
  void *v4; // rbx

  if ( !*(_QWORD *)(a1 + 848) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (signed __int64 *)(a1 + 728);
  ExAcquirePushLockSharedEx(a1 + 728, 0LL);
  v4 = (void *)(*(_QWORD *)(a1 + 848) & 0xFFFFFFFFFFFFFFF8uLL);
  ObfReferenceObject(v4);
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
