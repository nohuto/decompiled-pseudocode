/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x1406C567C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 */

void PopSetConnectedStandbyMarker()
{
  char v0; // bl
  char v1; // di

  v0 = PopPdcLastCsEnterReason;
  v1 = PopWnfCsEnterScenarioId;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 2u;
    BYTE9(PopBsdPowerTransition) = v1;
    BYTE10(PopBsdPowerTransition) ^= (v0 ^ BYTE10(PopBsdPowerTransition)) & 0x1F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
