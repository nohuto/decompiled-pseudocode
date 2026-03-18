/*
 * XREFs of WerKernelCloseHandle @ 0x1C0039694
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0075900 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerKernelCloseHandle(void *a1)
{
  if ( a1 )
    return ZwClose(a1);
  else
    return -1073741811;
}
