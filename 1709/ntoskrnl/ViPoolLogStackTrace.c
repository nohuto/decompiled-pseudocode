/*
 * XREFs of ViPoolLogStackTrace @ 0x1407B78E8
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 *     VfFreePoolNotification @ 0x1407B7624 (VfFreePoolNotification.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1407C37C0 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407C38B0 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407C39E0 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1407C3B10 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1407C3C20 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1407C3C80 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1407C3DB0 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1407C3E40 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1407C3F40 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1407C4120 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1407C43E0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1407C44F0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1407C45E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x140028A90 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400D9B84 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPoolLogStackCallout @ 0x1407A5770 (ViPoolLogStackCallout.c)
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
