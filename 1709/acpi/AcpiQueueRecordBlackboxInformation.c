/*
 * XREFs of AcpiQueueRecordBlackboxInformation @ 0x1C002BD2C
 * Callers:
 *     RunContext @ 0x1C0008F50 (RunContext.c)
 *     AmliDisableWatchdog @ 0x1C001141C (AmliDisableWatchdog.c)
 *     AmliWatchdogTimeoutAction @ 0x1C005B2C0 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     <none>
 */

char AcpiQueueRecordBlackboxInformation()
{
  char v0; // cl

  v0 = 0;
  if ( _InterlockedIncrement(&dword_1C0078920) == 1 )
  {
    ExQueueWorkItem(&AcpiRecordBlackboxWorkItem, DelayedWorkQueue);
    return 1;
  }
  return v0;
}
