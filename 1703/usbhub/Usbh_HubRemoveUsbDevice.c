/*
 * XREFs of Usbh_HubRemoveUsbDevice @ 0x1C0044EF0
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00071B0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubRemoveUsbDevice(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 535) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD))result + 535))(
                       *((_QWORD *)result + 529),
                       a2,
                       0LL);
  return result;
}
