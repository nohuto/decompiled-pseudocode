/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x140088870
 * Callers:
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400371F8 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400886A4 (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14014EE20 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14014EEF8 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14014EFA0 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014F6A4 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1401522A0 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaInitialize @ 0x140163CC0 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1401FDF60 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140201D7C (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x14025B1FC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x1405C7308 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x14070D624 (EtwpAllocatePmcData.c)
 *     ExpInitSystemPhase1 @ 0x1407FDF80 (ExpInitSystemPhase1.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
