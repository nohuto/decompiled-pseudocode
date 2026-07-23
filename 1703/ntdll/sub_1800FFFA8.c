/*
 * XREFs of sub_1800FFFA8 @ 0x1800FFFA8
 * Callers:
 *     sub_18002F120 @ 0x18002F120 (sub_18002F120.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FFFA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 UserModeGlobalLogger; // rcx
  _QWORD Fields[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(Fields, 0, 0x44uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4149;
  LODWORD(Fields[8]) = a5;
  Fields[5] = a2;
  Fields[6] = a3;
  Fields[7] = a4;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)UserModeGlobalLogger, 0x20402u, 0x24u, Fields);
}
