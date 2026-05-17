/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x1801012C4
 * Callers:
 *     RtlpSetSegmentInfo @ 0x18008172C (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinitySlotAssign(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x34uLL);
  v7[4] = a1;
  HIWORD(v7[0]) = 4153;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
