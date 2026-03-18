/*
 * XREFs of RegisterOpRegionHandler @ 0x1C00A0DB0
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0009384 (OSConvertDeviceHandleToNSHANDLE.c)
 *     RegisterOperationRegionHandler @ 0x1C0092DAC (RegisterOperationRegionHandler.c)
 */

NTSTATUS __stdcall RegisterOpRegionHandler(
        PDEVICE_OBJECT DeviceObject,
        ULONG AccessType,
        ULONG RegionSpace,
        PACPI_OP_REGION_HANDLER Handler,
        PVOID Context,
        ULONG Flags,
        PVOID *OperationRegionObject)
{
  __int64 v11; // rax

  if ( !DeviceObject )
    return -1073741811;
  v11 = OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return RegisterOperationRegionHandler(
           v11,
           AccessType,
           RegionSpace,
           (__int64)Handler,
           (__int64)Context,
           (unsigned int **)OperationRegionObject);
}
