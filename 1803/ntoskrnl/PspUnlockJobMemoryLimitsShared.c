/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1405374FC
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x140532058 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140535514 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14077B30C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 */

char __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  char result; // al

  v2 = a1 + 1032;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1032), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1032));
  result = KeAbPostRelease(v2);
  if ( a2 )
    return KiLeaveGuardedRegionUnsafe(a2);
  return result;
}
