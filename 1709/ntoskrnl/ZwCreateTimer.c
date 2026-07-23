/*
 * XREFs of ZwCreateTimer @ 0x14017F020
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1406AE4B0 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
