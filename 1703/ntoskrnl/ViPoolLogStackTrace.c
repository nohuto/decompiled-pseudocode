/*
 * XREFs of ViPoolLogStackTrace @ 0x140775AE8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     VfFreePoolNotification @ 0x140775864 (VfFreePoolNotification.c)
 *     VerifierMmAllocateContiguousMemory @ 0x140781610 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407816C0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407817B0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407818A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x140781980 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1407819E0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140781AE0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140781B70 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140781C30 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x140781D90 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x140782050 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x140782160 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400E4A50 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x14010F460 (KeExpandKernelStackAndCalloutEx.c)
 *     ViPoolLogStackCallout @ 0x140775AB0 (ViPoolLogStackCallout.c)
 */

void __fastcall ViPoolLogStackTrace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( VfPoolTraces )
  {
    v2 = VfPoolTraces
       + ((unsigned __int64)(_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)) << 7);
    *(_QWORD *)(v2 + 16) = KeGetCurrentThread();
    *(_QWORD *)v2 = a1;
    *(_QWORD *)(v2 + 8) = a2;
    if ( (VfOptionFlags & 2) != 0 )
    {
LABEL_3:
      *(_QWORD *)(v2 + 24) = 0LL;
      return;
    }
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
    {
      ViPoolLogStackCallout((PVOID *)v2);
    }
    else if ( KeExpandKernelStackAndCalloutEx(
                (PEXPAND_STACK_CALLOUT)ViPoolLogStackCallout,
                (PVOID)v2,
                0xE30uLL,
                1u,
                0LL) < 0 )
    {
      goto LABEL_3;
    }
  }
}
