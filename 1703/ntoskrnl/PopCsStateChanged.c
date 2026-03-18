/*
 * XREFs of PopCsStateChanged @ 0x1406C5874
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     PopIsUserInitiatedMonitorRequestReason @ 0x14022A4B8 (PopIsUserInitiatedMonitorRequestReason.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405D48E4 (PopEnableExecutionRequiredPowerRequests.c)
 */

void __fastcall PopCsStateChanged(char a1)
{
  int v2; // edx
  char v3; // cl

  PopAcquirePowerRequestPushLock(1);
  if ( !a1 )
  {
    PopLastCsEnterTime = 0LL;
    v3 = 1;
    PopExecutionTimeoutProcessed = 0;
    goto LABEL_7;
  }
  if ( PopIsUserInitiatedMonitorRequestReason() )
  {
    v3 = 0;
LABEL_7:
    PopEnableExecutionRequiredPowerRequests(v3);
    goto LABEL_8;
  }
  if ( PopExecutionRequiredTimeout != v2 )
  {
    PopLastCsEnterTime = MEMORY[0xFFFFF78000000008];
    KiSetTimerEx(
      (__int64)&PopExecutionRequiredTimer,
      -10000000LL * (unsigned int)PopExecutionRequiredTimeout,
      0,
      0,
      (__int64)&PopExecutionRequiredTimeoutDpc);
  }
LABEL_8:
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
