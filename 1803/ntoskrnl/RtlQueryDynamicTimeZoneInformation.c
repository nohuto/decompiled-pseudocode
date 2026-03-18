/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1407866F0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1408CA254 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x140588E84 (RtlpQueryTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
