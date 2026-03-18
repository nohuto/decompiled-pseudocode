/*
 * XREFs of imp_VfWdfObjectAllocateContext @ 0x1C00D3D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        void *Handle,
        _WDF_OBJECT_ATTRIBUTES *ContextAttributes,
        void **Context)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, void *, _WDF_OBJECT_ATTRIBUTES *, void **))WdfVersion.Functions.pfnWdfObjectAllocateContext)(
           DriverGlobals,
           Handle,
           ContextAttributes,
           Context);
}
