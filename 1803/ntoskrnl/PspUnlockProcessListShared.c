/*
 * XREFs of PspUnlockProcessListShared @ 0x14016C21C
 * Callers:
 *     PsChangeQuantumTable @ 0x1406116A8 (PsChangeQuantumTable.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
