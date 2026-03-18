/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x1406F4F18
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140244A94 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 */

void PopClearConnectedStandbyMarker()
{
  char v0; // bl

  v0 = PopPdcLastCsExitReason;
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    *(_QWORD *)&PopBsdPowerTransition = 0LL;
    BYTE8(PopBsdPowerTransition) &= ~2u;
    BYTE11(PopBsdPowerTransition) ^= (v0 ^ BYTE11(PopBsdPowerTransition)) & 0x3F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
