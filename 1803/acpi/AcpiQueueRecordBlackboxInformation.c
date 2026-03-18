/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C00425DC
 * Callers:
 *     AmliDisableWatchdog @ 0x1C0003034 (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0042970 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C0066900) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
