/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140828D10
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1405B1D08 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiFreePoolPagesLeft @ 0x1400F0B80 (MiFreePoolPagesLeft.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rsi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140389318, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_140388088 )
    KeResetEvent(qword_14038A1B8);
  else
    KeSetEvent(qword_14038A1B8, 0, 0);
  if ( v1 <= qword_140388080 )
    KeSetEvent(qword_14038A1B0, 0, 0);
  else
    KeResetEvent(qword_14038A1B0);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140389318, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140389318);
  KeAbPostRelease((ULONG_PTR)&qword_140389318);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
