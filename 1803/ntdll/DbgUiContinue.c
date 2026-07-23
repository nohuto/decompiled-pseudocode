/*
 * XREFs of DbgUiContinue @ 0x1800C91E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiContinue(PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  return ZwDebugContinue(NtCurrentTeb()->DbgSsReserved[1], AppClientId, ContinueStatus);
}
