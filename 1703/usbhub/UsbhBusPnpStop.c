/*
 * XREFs of UsbhBusPnpStop @ 0x1C0042590
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableHardReset @ 0x1C0046808 (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3);
}
