/*
 * XREFs of sub_1800FFA00 @ 0x1800FFA00
 * Callers:
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_180020B90 @ 0x180020B90 (sub_180020B90.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceEvent @ 0x1800A5EB0 (ZwTraceEvent.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __fastcall sub_1800FFA00(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4148;
  Fields[5] = a2;
  Fields[6] = a3;
  LODWORD(Fields[7]) = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v8 = 2147353480LL;
  return ZwTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
