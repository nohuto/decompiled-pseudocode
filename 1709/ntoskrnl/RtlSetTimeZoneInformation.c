/*
 * XREFs of RtlSetTimeZoneInformation @ 0x140722FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x140722FCC (RtlpSetTimeZoneInformationWorker.c)
 */

NTSTATUS __stdcall RtlSetTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpSetTimeZoneInformationWorker(TimeZoneInformation);
}
