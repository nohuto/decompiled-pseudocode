/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x140157500
 * Callers:
 *     KiEnableGroupScheduling @ 0x140157434 (KiEnableGroupScheduling.c)
 *     PspReadDfssConfigurationValues @ 0x14024D7C0 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x1400D1BDC (KiAssignSchedulingGroupWeights.c)
 */

__int64 KeUpdateGroupSchedulingConstants()
{
  unsigned __int64 v0; // r8

  v0 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68) / 0x3E8;
  KiCycleDivisorShortTerm = v0 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v0 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v0 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000 * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS / KeMaximumIncrement;
  return KiAssignSchedulingGroupWeights(0, 1, 0LL);
}
