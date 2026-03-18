/*
 * XREFs of PopClearConnectedStandbyMarker @ 0x1406C53BC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402301D4 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
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
    BYTE11(PopBsdPowerTransition) ^= (v0 ^ BYTE11(PopBsdPowerTransition)) & 0x1F;
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
