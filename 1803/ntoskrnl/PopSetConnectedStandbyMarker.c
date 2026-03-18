/*
 * XREFs of PopSetConnectedStandbyMarker @ 0x14075D5FC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14027B24C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     PopWriteBsdPowerTransition @ 0x140611DF0 (PopWriteBsdPowerTransition.c)
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
