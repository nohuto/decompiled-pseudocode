/*
 * XREFs of imp_WdfIoResourceListInsertDescriptor @ 0x1C0083850
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceListInsertDescriptor @ 0x1C008332C (FxIoResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfIoResourceListInsertDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        unsigned int Index)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
