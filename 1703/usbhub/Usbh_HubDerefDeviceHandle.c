/*
 * XREFs of Usbh_HubDerefDeviceHandle @ 0x1C0025C70
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00071B0 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0017FD8 (UsbhGetHubDeviceInformation.c)
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 *     UsbhInitializeTtHub @ 0x1C0025BA4 (UsbhInitializeTtHub.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C003DAD4 (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Usbh_HubDerefDeviceHandle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *result; // rax

  result = FdoExt(a1);
  if ( *((_QWORD *)result + 559) )
    return (_DWORD *)(*((__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))result + 559))(
                       *((_QWORD *)result + 529),
                       a2,
                       a3,
                       a4);
  return result;
}
