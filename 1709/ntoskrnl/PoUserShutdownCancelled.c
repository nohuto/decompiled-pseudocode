/*
 * XREFs of PoUserShutdownCancelled @ 0x1406FDA30
 * Callers:
 *     PopPowerInformationInternal @ 0x1404EA1F0 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140139F70 (PopQueueWorkItem.c)
 *     PopUserShutdownCancelled @ 0x1406FDB68 (PopUserShutdownCancelled.c)
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
