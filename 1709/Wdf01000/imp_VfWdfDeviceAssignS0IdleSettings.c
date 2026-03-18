/*
 * XREFs of imp_VfWdfDeviceAssignS0IdleSettings @ 0x1C00D1760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *))WdfVersion.Functions.pfnWdfDeviceAssignS0IdleSettings)(
           DriverGlobals,
           Device,
           Settings);
}
