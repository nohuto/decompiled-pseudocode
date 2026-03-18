/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140722F70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140578AF4 (RtlpQueryTimeZoneInformationWorker.c)
 */

NTSTATUS __stdcall RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
