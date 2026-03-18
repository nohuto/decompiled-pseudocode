/*
 * XREFs of imp_VfWdfIoResourceListUpdateDescriptor @ 0x1C00D3560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListUpdateDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
