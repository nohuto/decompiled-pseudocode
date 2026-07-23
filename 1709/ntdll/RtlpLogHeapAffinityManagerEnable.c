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

NTSTATUS __fastcall RtlpLogHeapAffinityManagerEnable(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _QWORD Fields[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(Fields, 0, 0x2CuLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4150;
  LODWORD(Fields[5]) = a2;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x20402u, 0xCu, Fields);
}
