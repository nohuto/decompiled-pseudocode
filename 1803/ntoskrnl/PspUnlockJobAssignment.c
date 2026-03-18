/*
 * XREFs of PspUnlockJobAssignment @ 0x1404F10B4
 * Callers:
 *     PspLockJobChain @ 0x1404F101C (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14052F7E8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock, a2, a3, a4);
  result = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
    return KiLeaveGuardedRegionUnsafe(a1);
  return result;
}
