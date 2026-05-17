/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x180101228
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, 0x2CuLL);
  v5[4] = a1;
  HIWORD(v5[0]) = 4150;
  LODWORD(v5[5]) = a2;
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
