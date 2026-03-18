/*
 * XREFs of VfFillAllocatedMemory @ 0x1407757E4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140781610 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407816C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407817B0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407818A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140781AE0 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x140782A98 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

void *__fastcall VfFillAllocatedMemory(void *a1, size_t a2)
{
  unsigned __int8 LowPart; // al
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  if ( a2 >= 0x100 )
    a2 = 256LL;
  if ( a2 != 256 )
    return memset(a1, LowPart | 1u, a2);
  result = (void *)(((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL | ((((((LowPart | 1LL) << 8) | LowPart | 1LL) << 16) | ((LowPart | 1LL) << 8) | LowPart | 1LL) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}
