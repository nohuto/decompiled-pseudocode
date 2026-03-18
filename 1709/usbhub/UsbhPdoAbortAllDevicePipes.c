/*
 * XREFs of UsbhPdoAbortAllDevicePipes @ 0x1C0001084
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0024C40 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhPdoAbortAllDevicePipes(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax

  result = UsbhRefPdoDeviceHandle(a1, a2, a2, 1148346977LL);
  v5 = result;
  if ( result )
  {
    v6 = FdoExt(a1);
    if ( *(_QWORD *)(v6 + 4512) )
      (*(void (__fastcall **)(_QWORD, __int64))(v6 + 4512))(*(_QWORD *)(v6 + 4232), v5);
    return UsbhDerefPdoDeviceHandle(a1, v5, a2, 1148346977LL);
  }
  return result;
}
