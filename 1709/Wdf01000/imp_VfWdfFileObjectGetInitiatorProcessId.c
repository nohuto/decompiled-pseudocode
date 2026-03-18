/*
 * XREFs of imp_VfWdfFileObjectGetInitiatorProcessId @ 0x1C00D2BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfFileObjectGetInitiatorProcessId(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFFILEOBJECT__ *))WdfVersion.Functions.pfnWdfFileObjectGetInitiatorProcessId)(
           DriverGlobals,
           FileObject);
}
