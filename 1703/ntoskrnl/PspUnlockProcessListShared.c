/*
 * XREFs of PspUnlockProcessListShared @ 0x1400623E0
 * Callers:
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x1405839EC (PsChangeQuantumTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
