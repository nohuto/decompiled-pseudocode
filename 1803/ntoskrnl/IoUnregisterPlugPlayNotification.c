/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1405E57F0
 * Callers:
 *     SbpWaitForVmbus @ 0x1408E3720 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
