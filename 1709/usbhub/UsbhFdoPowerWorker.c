/*
 * XREFs of UsbhFdoPowerWorker @ 0x1C00468D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x1C001F960 (UsbhFdoPowerWorkerInternal.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  return UsbhFdoPowerWorkerInternal(a1, a2);
}
