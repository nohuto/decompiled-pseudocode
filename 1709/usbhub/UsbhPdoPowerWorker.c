/*
 * XREFs of UsbhPdoPowerWorker @ 0x1C00470F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPowerWorkerInternal @ 0x1C001E220 (UsbhPdoPowerWorkerInternal.c)
 */

__int64 __fastcall UsbhPdoPowerWorker(ULONG_PTR a1, IRP *a2)
{
  return UsbhPdoPowerWorkerInternal(a1, a2);
}
