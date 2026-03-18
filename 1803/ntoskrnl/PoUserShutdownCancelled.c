/*
 * XREFs of PoUserShutdownCancelled @ 0x1405EACA0
 * Callers:
 *     PopPowerInformationInternal @ 0x140522340 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x1405EACD0 (PopUserShutdownCancelled.c)
 */

char PoUserShutdownCancelled()
{
  char result; // al
  __int64 v1; // rcx

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopQueueWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, DelayedWorkQueue);
    LOBYTE(v1) = 1;
    return PopUserShutdownCancelled(v1);
  }
  return result;
}
