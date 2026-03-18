/*
 * XREFs of UsbhPdoPowerWorker @ 0x1C0046340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UsbhPdoPowerWorker(ULONG_PTR a1, IRP *a2)
{
  return UsbhPdoPowerWorkerInternal(a1, a2);
}
