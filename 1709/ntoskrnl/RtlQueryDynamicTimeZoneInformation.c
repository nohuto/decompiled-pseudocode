/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x140722F50
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x140858074 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140578AF4 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
