/*
 * XREFs of IoUnregisterPlugPlayNotificationEx @ 0x140586660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotificationEx(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 1);
}
