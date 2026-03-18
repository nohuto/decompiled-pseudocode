/*
 * XREFs of PspRateControlLimitFlag @ 0x140479E44
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140479260 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRateControlLimitFlag(int a1)
{
  if ( !a1 )
    return 0x100000LL;
  if ( a1 == 1 )
    return 0x80000LL;
  return 0x40000LL;
}
