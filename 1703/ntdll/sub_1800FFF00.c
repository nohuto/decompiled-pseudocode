/*
 * XREFs of sub_1800FFF00 @ 0x1800FFF00
 * Callers:
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FFF00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 UserModeGlobalLogger; // rcx
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4146;
  Fields[5] = a2;
  Fields[6] = a3;
  Fields[7] = a4;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x20u, Fields);
}
