/*
 * XREFs of PsSetCreateProcessNotifyRoutine @ 0x1405CC420
 * Callers:
 *     VfFaultsSetParameters @ 0x1407B7CD8 (VfFaultsSetParameters.c)
 *     VerifierInitSystem @ 0x14084819C (VerifierInitSystem.c)
 * Callees:
 *     PspSetCreateProcessNotifyRoutine @ 0x1405CC504 (PspSetCreateProcessNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutine(PCREATE_PROCESS_NOTIFY_ROUTINE NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, Remove != 0);
}
