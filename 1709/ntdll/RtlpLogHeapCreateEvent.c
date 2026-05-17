/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x18010153C
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800133A8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
