/*
 * XREFs of RegisterCDROMNotify @ 0x1C011896C
 * Callers:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C01187EC (xxxRegisterForDeviceClassNotifications.c)
 *     xxxRemoteReconnect @ 0x1C0139E30 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

NTSTATUS RegisterCDROMNotify()
{
  NTSTATUS result; // eax

  result = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      return IoRegisterPlugPlayNotification(
               EventCategoryDeviceInterfaceChange,
               1u,
               &GUID_DEVINTERFACE_CDROM,
               gpWin32kDriverObject,
               DeviceClassCDROMNotify,
               0LL,
               (PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  }
  return result;
}
