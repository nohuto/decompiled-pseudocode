/*
 * XREFs of RtlpLogHeapLockEvent @ 0x18010177C
 * Callers:
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapLockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
