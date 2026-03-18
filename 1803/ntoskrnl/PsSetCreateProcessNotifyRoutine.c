/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x140628400
 * Callers:
 *     VfFaultsSetParameters @ 0x140824F38 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x1408C5854 (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x140628520 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
