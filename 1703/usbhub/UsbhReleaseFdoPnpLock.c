/*
 * XREFs of UsbhReleaseFdoPnpLock @ 0x1C00097A8
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0004680 (UsbhFdoSystemPowerState.c)
 *     UsbhEtwRundown @ 0x1C0008014 (UsbhEtwRundown.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0009700 (Usbh_FDO_WaitPnpStop_CB.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C003FB5C (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C003FC28 (UsbhInstallMsOsExtendedProperties.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C0047BC0 (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhReleaseApiLock @ 0x1C004A710 (UsbhReleaseApiLock.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004BC50 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004BCF0 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_PnpRemove @ 0x1C004BFF4 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
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
