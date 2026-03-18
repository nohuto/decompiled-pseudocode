/*
 * XREFs of PspLockJobMemoryLimitsShared @ 0x140510834
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14071734C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspLockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 1032, 0LL);
}
