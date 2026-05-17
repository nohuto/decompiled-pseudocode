/*
 * XREFs of RtlpLogHeapExtendEvent @ 0x180101658
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180006FD8 (RtlpCreateLowFragHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800472B8 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180077E1C (RtlpExtendLowFragHeapSegment.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800133A8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800FF528 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapExtendEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+17h] BYREF
  int v4; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+23h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
