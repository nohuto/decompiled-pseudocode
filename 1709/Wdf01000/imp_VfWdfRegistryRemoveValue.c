/*
 * XREFs of imp_VfWdfRegistryRemoveValue @ 0x1C00D4430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRegistryRemoveValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryRemoveValue)(
           DriverGlobals,
           Key,
           ValueName);
}
