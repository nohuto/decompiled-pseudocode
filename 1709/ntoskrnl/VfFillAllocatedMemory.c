/*
 * XREFs of VfFillAllocatedMemory @ 0x1407B75A4
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1407C37C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407C38B0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407C39E0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407C3B10 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1407C3DB0 (VerifierMmAllocateNonCachedMemory.c)
 *     VfFillAllocatePagesForMdl @ 0x1407C4E28 (VfFillAllocatePagesForMdl.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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
