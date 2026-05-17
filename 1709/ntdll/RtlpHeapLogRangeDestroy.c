/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800FFA0C
 * Callers:
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[4] = a1;
  HIWORD(v3[0]) = 616;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
