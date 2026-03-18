/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x140775D48
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x140767A40 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x140767AB0 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x140767AF0 (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140767E00 (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x140767F20 (VerifierPortIoAllocateIrp.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140775CC0 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViKeInjectStatusAlerted @ 0x1407783D4 (ViKeInjectStatusAlerted.c)
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
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x140782440 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x140782540 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x140764ED4 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x140775E80 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x140776448 (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x140776550 (ViFaultsIsCurrentAppTarget.c)
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
    ++dword_140790284;
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
      ++dword_140790274;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_140790278;
    }
    else
    {
      ++dword_140790270;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE6(KeGetCurrentThread()[1].Queue) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_140790260;
  }
  return 1LL;
}
