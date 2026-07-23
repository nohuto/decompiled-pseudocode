/*
 * XREFs of sub_1800FE558 @ 0x1800FE558
 * Callers:
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061E38 @ 0x180061E38 (sub_180061E38.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FE558(__int64 a1, __int64 a2, int a3)
{
  __int64 UserModeGlobalLogger; // rcx
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, 0x34uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4154;
  Fields[5] = a2;
  LODWORD(Fields[6]) = a3;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x14u, Fields);
}
