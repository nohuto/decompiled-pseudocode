/*
 * XREFs of imp_VfWdfUsbTargetPipeIsOutEndpoint @ 0x1C00D55D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeIsOutEndpoint(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *Pipe)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeIsOutEndpoint)(
           DriverGlobals,
           Pipe);
}
