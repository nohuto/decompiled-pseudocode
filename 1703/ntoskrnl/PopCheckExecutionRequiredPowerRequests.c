/*
 * XREFs of PopCheckExecutionRequiredPowerRequests @ 0x1406C5770
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1405D48E4 (PopEnableExecutionRequiredPowerRequests.c)
 */

void PopCheckExecutionRequiredPowerRequests()
{
  _InterlockedExchange(&PopExecutionRequiredWorkRequested, 0);
  PopAcquirePowerRequestPushLock(1);
  if ( byte_14034BC94
    && PopLastCsEnterTime
    && !PopExecutionTimeoutProcessed
    && PopExecutionRequiredTimeout != -1
    && MEMORY[0xFFFFF78000000008] - PopLastCsEnterTime >= 10000000
                                                        * (unsigned __int64)(unsigned int)PopExecutionRequiredTimeout )
  {
    PopExecutionTimeoutProcessed = 1;
    PopEnableExecutionRequiredPowerRequests(0);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
