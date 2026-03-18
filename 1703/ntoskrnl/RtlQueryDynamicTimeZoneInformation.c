/*
 * XREFs of RtlQueryDynamicTimeZoneInformation @ 0x1406EB040
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x1408268D8 (ExInitializeUtcTimeZoneBias.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryDynamicTimeZoneInformation(char *a1)
{
  return RtlpQueryTimeZoneInformationWorker(a1, 0x1B0uLL);
}
