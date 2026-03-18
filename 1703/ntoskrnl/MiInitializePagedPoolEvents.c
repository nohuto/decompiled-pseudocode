/*
 * XREFs of MiInitializePagedPoolEvents @ 0x14080432C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1405A25E8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     MiFreePoolPagesLeft @ 0x140085050 (MiFreePoolPagesLeft.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036D058, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_14036BD88 )
    KeResetEvent(qword_140380320);
  else
    KeSetEvent(qword_140380320, 0, 0);
  if ( v1 <= qword_14036BD80 )
    KeSetEvent(qword_140380318, 0, 0);
  else
    KeResetEvent(qword_140380318);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036D058, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036D058);
  KeAbPostRelease((ULONG_PTR)&qword_14036D058);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
