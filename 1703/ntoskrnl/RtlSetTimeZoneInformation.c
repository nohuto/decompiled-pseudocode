/*
 * XREFs of RtlSetTimeZoneInformation @ 0x1406EB070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
