/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400FC800
 * Callers:
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400FC794 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400FE760 (ExpGetSystemEmulationProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14014A37C (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14014A454 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14014A4FC (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14014ABCC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaInitialize @ 0x140154D94 (ExpSaInitialize.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140156834 (ExpSaPageGroupDescriptorFree.c)
 *     KeQueryMaximumProcessorCount @ 0x140204130 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x14020834C (KeStartProfile.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x140284BAC (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x1405DA61C (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x140748F0C (EtwpAllocatePmcData.c)
 *     ExpInitSystemPhase1 @ 0x1408429B0 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14008D0E0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
