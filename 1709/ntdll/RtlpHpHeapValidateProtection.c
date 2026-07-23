/*
 * XREFs of RtlpHpHeapValidateProtection @ 0x180048FE8
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x18000736C (RtlpHpHeapExtendContext.c)
 *     RtlpFindAndCommitPages @ 0x180047558 (RtlpFindAndCommitPages.c)
 *     RtlpHpSegPageRangeCommit @ 0x180048360 (RtlpHpSegPageRangeCommit.c)
 *     RtlpCommitBlock @ 0x18004A2F4 (RtlpCommitBlock.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpHpHeapValidateProtection(PVOID BaseAddress, unsigned int a2)
{
  unsigned int v2; // ebx
  PVOID MemoryInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+54h] [rbp-14h]

  v2 = a2;
  if ( a2 == 64
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicInformation,
          MemoryInformation,
          0x30uLL,
          0LL) < 0
     || (v6 & 0x60) == 0
     || MemoryInformation[0] != BaseAddress) )
  {
    RtlpLogHeapFailure(0, (_DWORD)BaseAddress, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
