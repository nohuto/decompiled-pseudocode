/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x180101360
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpLogHeapAllocateEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v7; // [rsp+26h] [rbp-52h]
  __int64 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+48h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]

  v8 = a1;
  v9 = a3;
  v10 = a2;
  v11 = a4;
  v7 = 4129;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x20402u, 0x1Cu, Fields);
}
