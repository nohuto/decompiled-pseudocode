/*
 * XREFs of imp_VfWdfRegistryRemoveKey @ 0x1C00D4410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRegistryRemoveKey(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *))WdfVersion.Functions.pfnWdfRegistryRemoveKey)(
           DriverGlobals,
           Key);
}
