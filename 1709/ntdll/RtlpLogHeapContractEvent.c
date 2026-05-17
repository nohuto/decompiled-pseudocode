/*
 * XREFs of RtlpLogHeapContractEvent @ 0x18010148C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x180038F8C (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpDecommitBlock @ 0x18004A4B4 (RtlpDecommitBlock.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x1800133A8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0C70 (NtTraceEvent.c)
 *     GetUCBytes @ 0x1800FF528 (GetUCBytes.c)
 */

__int64 __fastcall RtlpLogHeapContractEvent(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+7h] BYREF
  int v4; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v5; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  v4 = 0;
  v5 = RtlpEstimateAllocatedSize(a1);
  GetUCBytes(a1, &v3, &v4);
  return NtTraceEvent();
}
