/*
 * XREFs of UsbhCheck4GlobalErrata @ 0x1C001B924
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C001F8A8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhApplyDeviceFix @ 0x1C0053444 (UsbhApplyDeviceFix.c)
 */

_DWORD *__fastcall UsbhCheck4GlobalErrata(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  FdoExt(a1);
  result = PdoExt(a2);
  if ( dword_1C0069634 )
    result = (_DWORD *)UsbhApplyDeviceFix(a1, a2, 3LL);
  if ( dword_1C0069638 )
  {
    FdoExt(a1);
    result = PdoExt(a2);
    result[356] |= 0x2000u;
  }
  return result;
}
