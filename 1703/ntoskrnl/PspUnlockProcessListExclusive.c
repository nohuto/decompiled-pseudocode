/*
 * XREFs of PspUnlockProcessListExclusive @ 0x140064018
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x14049CB2C (PspInsertProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
