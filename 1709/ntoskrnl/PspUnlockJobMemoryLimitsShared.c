/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x140510788
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14071734C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
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
