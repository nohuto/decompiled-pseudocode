/*
 * XREFs of sub_1800FF678 @ 0x1800FF678
 * Callers:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_18002BA00 @ 0x18002BA00 (sub_18002BA00.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FF678(__int64 a1, int a2)
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
