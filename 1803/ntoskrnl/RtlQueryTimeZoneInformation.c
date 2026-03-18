/*
 * XREFs of RtlQueryTimeZoneInformation @ 0x140786840
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140588E84 (RtlpQueryTimeZoneInformationWorker.c)
 */

NTSTATUS __stdcall RtlQueryTimeZoneInformation(PRTL_TIME_ZONE_INFORMATION TimeZoneInformation)
{
  return RtlpQueryTimeZoneInformationWorker((char *)TimeZoneInformation, 0xACuLL);
}
