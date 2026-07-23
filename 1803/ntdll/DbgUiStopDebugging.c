/*
 * XREFs of DbgUiStopDebugging @ 0x1800C9640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
