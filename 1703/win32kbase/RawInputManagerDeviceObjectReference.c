/*
 * XREFs of RawInputManagerDeviceObjectReference @ 0x1C0092DE0
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C010F970 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RawInputManagerDeviceObjectReference(void *a1)
{
  return ObReferenceObjectByPointer(a1, 3u, ExRawInputManagerObjectType, 0);
}
