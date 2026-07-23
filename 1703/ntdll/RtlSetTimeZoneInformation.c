/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1800EB630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_1800EB6C0(TimeZoneInformation);
}
