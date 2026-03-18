/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140614660
 * Callers:
 *     <none>
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14014C068 (PnpUnregisterPlugPlayNotification.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 1);
}
