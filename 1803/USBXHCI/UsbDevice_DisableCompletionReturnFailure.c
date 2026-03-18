/*
 * XREFs of UsbDevice_DisableCompletionReturnFailure @ 0x1C0031850
 * Callers:
 *     <none>
 * Callees:
 *     UsbDevice_DisableCompletion @ 0x1C0031580 (UsbDevice_DisableCompletion.c)
 */

void __fastcall UsbDevice_DisableCompletionReturnFailure(__int64 a1, int a2)
{
  UsbDevice_DisableCompletion(a1, a2, 1);
}
