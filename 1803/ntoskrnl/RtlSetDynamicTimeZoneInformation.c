/*
 * XREFs of RtlSetDynamicTimeZoneInformation @ 0x140786860
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetTimeZoneInformationWorker @ 0x14078689C (RtlpSetTimeZoneInformationWorker.c)
 */

__int64 __fastcall RtlSetDynamicTimeZoneInformation(void *a1)
{
  return RtlpSetTimeZoneInformationWorker(a1);
}
