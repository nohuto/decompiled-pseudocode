/*
 * XREFs of PsCaptureExceptionPort @ 0x1404B9494
 * Callers:
 *     PspExitThread @ 0x1404B8D70 (PspExitThread.c)
 *     DbgkForwardException @ 0x1405C0D3C (DbgkForwardException.c)
 *     PspFreezeProcessWorker @ 0x14077D150 (PspFreezeProcessWorker.c)
 *     ExpRaiseHardError @ 0x1407C5BB8 (ExpRaiseHardError.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
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
