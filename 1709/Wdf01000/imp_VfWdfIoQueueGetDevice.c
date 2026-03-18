/*
 * XREFs of imp_VfWdfIoQueueGetDevice @ 0x1C00D2F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  return WdfVersion.Functions.pfnWdfIoQueueGetDevice(DriverGlobals, Queue);
}
