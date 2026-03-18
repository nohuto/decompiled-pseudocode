/*
 * XREFs of PsSetLoadImageNotifyRoutine @ 0x1405CC2E0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetLoadImageNotifyRoutineEx @ 0x1405CC300 (PsSetLoadImageNotifyRoutineEx.c)
 */

NTSTATUS __stdcall PsSetLoadImageNotifyRoutine(PLOAD_IMAGE_NOTIFY_ROUTINE NotifyRoutine)
{
  return PsSetLoadImageNotifyRoutineEx(NotifyRoutine, 0LL);
}
