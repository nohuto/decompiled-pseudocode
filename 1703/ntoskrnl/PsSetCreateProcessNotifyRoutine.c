/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1405A8B70
 * Callers:
 *     VfFaultsSetParameters @ 0x140775EDC (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x140812904 (VerifierInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
