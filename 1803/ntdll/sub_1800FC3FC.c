/*
 * XREFs of sub_1800FC3FC @ 0x1800FC3FC
 * Callers:
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800FC3FC(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[4] = a1;
  HIWORD(v7[0]) = 613;
  v7[5] = a2;
  LODWORD(v7[6]) = a3;
  RtlGetCurrentServiceSessionId();
  return ZwTraceEvent();
}
