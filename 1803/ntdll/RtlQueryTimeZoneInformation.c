/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x180009E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return sub_180009E4C(TimeZoneInformation, 0xACuLL);
}
