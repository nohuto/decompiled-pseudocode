/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x140628200
 * Callers:
 *     <none>
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x1406282E0 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
