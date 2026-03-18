/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C00087D8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0040928 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00409F4 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0048A44 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C004B580 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004CAC0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004CB60 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004CE64 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseFdoPnpLock(__int64 a1, __int64 a2)
{
  struct _KSEMAPHORE *v3; // rbx

  v3 = (struct _KSEMAPHORE *)FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 48) = 1734964085;
  v3[41].Header.WaitListHead.Blink = 0LL;
  return KeReleaseSemaphore(v3 + 155, 16, 1, 0);
}
