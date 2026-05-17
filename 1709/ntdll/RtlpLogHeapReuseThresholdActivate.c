/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x180101898
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x18001453C (RtlpIsSubSegmentReuseThresholdExceeded.c)
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpLogHeapReuseThresholdActivate(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x34uLL);
  v7[4] = a1;
  HIWORD(v7[0]) = 4154;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
