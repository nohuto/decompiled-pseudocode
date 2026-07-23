/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1800E74A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_1800E7530(TimeZoneInformation);
}
