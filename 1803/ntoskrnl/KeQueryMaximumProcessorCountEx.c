/*
 * XREFs of KeQueryMaximumProcessorCountEx @ 0x1400D38F0
 * Callers:
 *     ExpGetSystemEmulationProcessorInformation @ 0x1400D2F44 (ExpGetSystemEmulationProcessorInformation.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400D2FA0 (KeQueryLogicalProcessorRelationship.c)
 *     ExpGetSystemProcessorInformation @ 0x1400D3890 (ExpGetSystemProcessorInformation.c)
 *     ExpAllocateFannedOutPushLock @ 0x14015A650 (ExpAllocateFannedOutPushLock.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14015A6FC (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14015A7A8 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpSaInitialize @ 0x1401833F8 (ExpSaInitialize.c)
 *     KeQueryMaximumProcessorCount @ 0x1402419C0 (KeQueryMaximumProcessorCount.c)
 *     KeStartProfile @ 0x140245F7C (KeStartProfile.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1402B4E04 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402B925C (ExpTryAcquireFannedOutPushLockExclusive.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1402BDA4C (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1402BDE9C (ExpSaPageGroupDescriptorFree.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     EtwInitializeSiloState @ 0x14063D968 (EtwInitializeSiloState.c)
 *     EtwpAllocatePmcData @ 0x1407AAC68 (EtwpAllocatePmcData.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampCaptureFlushStats @ 0x1407B3BC8 (EtwpCovSampCaptureFlushStats.c)
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __stdcall KeQueryMaximumProcessorCountEx(USHORT GroupNumber)
{
  if ( !KeDynamicPartitioningSupported )
    return KeQueryActiveProcessorCountEx(GroupNumber);
  if ( GroupNumber == 0xFFFF || !GroupNumber && KiMaximumGroups == 1 )
    return KeMaximumProcessors;
  return GroupNumber < (USHORT)KiMaximumGroups ? KiMaximumGroupSize : 0;
}
