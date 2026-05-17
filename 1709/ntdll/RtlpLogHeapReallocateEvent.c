/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x1801017F0
 * Callers:
 *     RtlpReAllocateHeap @ 0x18003CA00 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReallocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
