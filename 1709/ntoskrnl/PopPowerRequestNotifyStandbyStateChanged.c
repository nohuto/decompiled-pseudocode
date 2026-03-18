/*
 * XREFs of PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x14059F4BC (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x1405F17F8 (PopSetExecutionRequiredTimer.c)
 */

void __fastcall PopPowerRequestNotifyStandbyStateChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    qword_1403671E8 = MEMORY[0xFFFFF78000000008];
    HIDWORD(PopExecutionRequiredContext) = PopPdcLastCsEnterReason;
    PopSetExecutionRequiredTimer();
  }
  else
  {
    qword_1403671E8 = 0LL;
    HIDWORD(PopExecutionRequiredContext) = 44;
    KeCancelTimer(&PopExecutionRequiredTimer);
  }
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
