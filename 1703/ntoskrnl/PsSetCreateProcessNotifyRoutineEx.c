/*
 * XREFs of PsSetCreateProcessNotifyRoutineEx @ 0x1405A8970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall PsSetCreateProcessNotifyRoutineEx(PCREATE_PROCESS_NOTIFY_ROUTINE_EX NotifyRoutine, BOOLEAN Remove)
{
  return PspSetCreateProcessNotifyRoutine(NotifyRoutine, (unsigned int)(Remove != 0) + 2);
}
