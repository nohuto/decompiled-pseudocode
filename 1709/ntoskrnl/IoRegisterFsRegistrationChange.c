/*
 * XREFs of IoRegisterFsRegistrationChange @ 0x1406B79D0
 * Callers:
 *     <none>
 * Callees:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405C8240 (IoRegisterFsRegistrationChangeMountAware.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  return IoRegisterFsRegistrationChangeMountAware(DriverObject, DriverNotificationRoutine, 0);
}
