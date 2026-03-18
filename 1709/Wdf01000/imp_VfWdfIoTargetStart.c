/*
 * XREFs of imp_VfWdfIoTargetStart @ 0x1C00D3B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoTargetStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *))WdfVersion.Functions.pfnWdfIoTargetStart)(
           DriverGlobals,
           IoTarget);
}
