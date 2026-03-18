/*
 * XREFs of imp_VfWdfControlDeviceInitSetShutdownNotification @ 0x1C00D14F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfControlDeviceInitSetShutdownNotification(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        void (__fastcall *Notification)(WDFDEVICE__ *),
        __int64 Flags)
{
  WdfVersion.Functions.pfnWdfControlDeviceInitSetShutdownNotification(DriverGlobals, DeviceInit, Notification, Flags);
}
