/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x1406F57C0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
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
    BYTE10(PopBsdPowerTransition) ^= (v0 ^ BYTE10(PopBsdPowerTransition)) & 0x3F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
