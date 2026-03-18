/*
 * XREFs of PspUnlockJobMemoryLimitsShared @ 0x1404797EC
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     PspApplyJobLimitsToProcess @ 0x140549298 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406E1060 (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 result; // rax

  v2 = a1 + 1032;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1032), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1032));
  result = KeAbPostRelease(v2);
  if ( a2 )
    return KiLeaveGuardedRegionUnsafe(a2);
  return result;
}
