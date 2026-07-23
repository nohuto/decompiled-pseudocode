/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x1800FFA0C
 * Callers:
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeDestroy(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD Fields[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 616;
  if ( RtlGetCurrentServiceSessionId() )
    v2 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v2 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v2, 0x20402u, 8u, Fields);
}
