/*
 * XREFs of PspUnlockProcessListExclusive @ 0x14006A068
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x1404EABB0 (PspInsertProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockProcessListExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al

  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock, a2, a3, a4);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
