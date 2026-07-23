/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x1800FFA98
 * Callers:
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180061354 (RtlpDestroyHeapSegment.c)
 *     RtlpHpSegSegmentFree @ 0x1800620C0 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180107570 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall RtlpHeapLogRangeRelease(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  _QWORD Fields[7]; // [rsp+20h] [rbp-58h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 615;
  Fields[5] = a2;
  Fields[6] = a3;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v6 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x20402u, 0x18u, Fields);
}
