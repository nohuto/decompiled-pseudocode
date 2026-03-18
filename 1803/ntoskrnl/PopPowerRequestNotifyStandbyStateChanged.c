/*
 * XREFs of PopPowerRequestNotifyStandbyStateChanged @ 0x14075D7B0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopHandleExecutionRequiredEnablementUpdate @ 0x1405E8FEC (PopHandleExecutionRequiredEnablementUpdate.c)
 *     PopSetExecutionRequiredTimer @ 0x140654B28 (PopSetExecutionRequiredTimer.c)
 */

void __fastcall PopPowerRequestNotifyStandbyStateChanged(char a1)
{
  unsigned __int64 v2; // rcx

  PopAcquirePowerRequestPushLock(1);
  if ( a1 )
  {
    qword_1403ABA98 = MEMORY[0xFFFFF78000000008];
    HIDWORD(PopExecutionRequiredContext) = PopPdcLastCsEnterReason;
    PopSetExecutionRequiredTimer();
  }
  else
  {
    qword_1403ABA98 = 0LL;
    HIDWORD(PopExecutionRequiredContext) = 45;
    KeCancelTimer(&PopExecutionRequiredTimer);
  }
  PopHandleExecutionRequiredEnablementUpdate(v2);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
