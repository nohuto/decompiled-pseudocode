/*
 * XREFs of PspNotificationLimitRateControlToleranceField @ 0x14055F918
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceField(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 60;
  if ( a2 == 1 )
    return a1 + 44;
  return a1 + 32;
}
