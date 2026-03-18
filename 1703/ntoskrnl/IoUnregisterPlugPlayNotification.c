/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1405751E0
 * Callers:
 *     SbpWaitForVmbus @ 0x14083774C (SbpWaitForVmbus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  return PnpUnregisterPlugPlayNotification((__int64)NotificationEntry, 0);
}
