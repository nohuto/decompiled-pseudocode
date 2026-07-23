/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800F834C
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D8A20 (RtlQueryProcessLockInformation.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E6850 (RtlQueryCriticalSectionOwner.c)
 *     RtlAssert @ 0x1800EA280 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800F8394 (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F9930 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x1801023A4 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
