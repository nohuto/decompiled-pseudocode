/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x1407B7B44
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x1407A95D0 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x1407A9640 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x1407A9680 (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1407A9A20 (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x1407A9B40 (VerifierPortIoAllocateIrp.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x1407B7ABC (VfFaultsInjectPoolAllocationFailure.c)
 *     ViKeInjectStatusAlerted @ 0x1407BA2B4 (ViKeInjectStatusAlerted.c)
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
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1407C45E0 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1407C47D0 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1407C48D0 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1407A6C00 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1407B7C7C (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x1407B8244 (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x1407B834C (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1407D5284;
    return 0LL;
  }
  if ( (MmVerifierData & 4) != 0 )
  {
    v3 = VfFaultInjectionProbability;
    v4 = VfFaultInjectionMaxProbability;
    if ( !VfFaultInjectionProbability
      || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
      || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
      || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
      || !(unsigned int)ViFaultsIsCurrentAppTarget() )
    {
      return 0LL;
    }
    if ( (unsigned int)VfRandomGetNumber(0, v4) >= v3 )
    {
      ++dword_1407D5274;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_1407D5278;
    }
    else
    {
      ++dword_1407D5270;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE6(KeGetCurrentThread()[1].Queue) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_1407D5260;
  }
  return 1LL;
}
