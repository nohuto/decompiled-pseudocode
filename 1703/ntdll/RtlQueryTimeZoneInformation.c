/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x180054210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_18005421C(TimeZoneInformation, 0xACuLL);
}
