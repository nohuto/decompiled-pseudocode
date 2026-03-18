/*
 * XREFs of PspRateControlLimitFlag @ 0x140510974
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
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
