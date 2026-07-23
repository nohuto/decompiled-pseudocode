/*
 * XREFs of RtlpLogHeapCommit @ 0x1801013E4
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180003B70 (RtlpHpHeapAllocate.c)
 *     RtlpCreateLowFragHeap @ 0x180006FD8 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180077E1C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapCommit(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _QWORD Fields[8]; // [rsp+20h] [rbp-78h] BYREF

  memset(Fields, 0, sizeof(Fields));
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4147;
  Fields[5] = a2;
  Fields[6] = a3;
  LODWORD(Fields[7]) = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v8 = 2147353480LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v8, 0x20402u, 0x20u, Fields);
}
