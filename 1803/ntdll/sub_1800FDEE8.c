/*
 * XREFs of sub_1800FDEE8 @ 0x1800FDEE8
 * Callers:
 *     sub_180019A00 @ 0x180019A00 (sub_180019A00.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009B670 (ZwTraceEvent.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FDEE8(__int64 a1, int a2)
{
  __int64 UserModeGlobalLogger; // rcx
  _QWORD Fields[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(Fields, 0, 0x2CuLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4150;
  LODWORD(Fields[5]) = a2;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0xCu, Fields);
}
