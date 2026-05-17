/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1800FFB38
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHeapLogRangeReserve(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 614;
  v7[5] = a2;
  v7[6] = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
