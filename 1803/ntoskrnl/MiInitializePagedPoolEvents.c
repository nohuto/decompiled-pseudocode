/*
 * XREFs of MiInitializePagedPoolEvents @ 0x14089CF34
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14061C8B0 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     MiFreePoolPagesLeft @ 0x14008072C (MiFreePoolPagesLeft.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  v1 = MiFreePoolPagesLeft(6);
  if ( v1 < qword_1403CB188 )
    KeResetEvent(qword_1403CE038);
  else
    KeSetEvent(qword_1403CE038, 0, 0);
  if ( v1 <= qword_1403CB180 )
    KeSetEvent(qword_1403CE030, 0, 0);
  else
    KeResetEvent(qword_1403CE030);
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2, v2, v3, v4);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
