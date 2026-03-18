/*
 * XREFs of KeUpdateGroupSchedulingConstants @ 0x140184DDC
 * Callers:
 *     KiEnableGroupScheduling @ 0x140184D0C (KiEnableGroupScheduling.c)
 *     PspReadDfssConfigurationValues @ 0x140283BA0 (PspReadDfssConfigurationValues.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall KeUpdateGroupSchedulingConstants(char a1)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 )
    KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = 1000000 * (unsigned __int64)*(unsigned int *)(KiProcessorBlock[0] + 68) / 0x3E8;
  KiCycleDivisorShortTerm = v2 * (unsigned int)PsDfssShortTermSharingMS;
  KiCycleDivisorLongTerm = v2 * (unsigned int)PsDfssLongTermSharingMS;
  KiCyclesPerGeneration = v2 * (unsigned int)PsDfssGenerationLengthMS;
  KiGroupSchedulingNumerator = PsDfssLongTermFraction1024;
  KiGenerationTicks = 10000 * (unsigned __int64)(unsigned int)PsDfssGenerationLengthMS / KeMaximumIncrement;
  result = KiAssignSchedulingGroupWeights(0, 1, 0LL);
  if ( !a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
  }
  return result;
}
