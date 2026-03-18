/*
 * XREFs of imp_VfWdfDeviceResumeIdleActual @ 0x1C00D1F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleActual(DriverGlobals, Device, Tag, Line, File);
}
