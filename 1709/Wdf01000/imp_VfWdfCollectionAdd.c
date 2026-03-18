/*
 * XREFs of imp_VfWdfCollectionAdd @ 0x1C00D12A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        void *Object)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOLLECTION__ *, void *))WdfVersion.Functions.pfnWdfCollectionAdd)(
           DriverGlobals,
           Collection,
           Object);
}
