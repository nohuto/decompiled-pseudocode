/*
 * XREFs of VfAllocPoolNotification @ 0x140824784
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140830D40 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x140830E30 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x140830F50 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x140831070 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140831170 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1408311D0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1408312F0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140831370 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140831460 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140831650 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140831900 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140831A70 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140831B50 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     ViPoolLogStackTrace @ 0x140824B48 (ViPoolLogStackTrace.c)
 */

__int64 VfAllocPoolNotification()
{
  __int64 result; // rax

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) == 0
    || ((MmVerifierData & 1) != 0 || (MmVerifierData & 8) != 0)
    && (result = (unsigned int)VfFlightOptions, (VfFlightOptions & 9) != 0) )
  {
    if ( VfPoolTraces )
      return ViPoolLogStackTrace();
  }
  return result;
}
