/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x180101360
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
