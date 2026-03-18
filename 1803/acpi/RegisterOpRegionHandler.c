/*
 * XREFs of RegisterOpRegionHandler @ 0x1C0080CF0
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C00091E8 (OSConvertDeviceHandleToNSHANDLE.c)
 *     RegisterOperationRegionHandler @ 0x1C0080D54 (RegisterOperationRegionHandler.c)
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
  int v7; // ebx
  int v11; // eax

  v7 = (int)Handler;
  if ( !DeviceObject )
    return -1073741811;
  v11 = OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return RegisterOperationRegionHandler(
           v11,
           AccessType,
           RegionSpace,
           v7,
           (__int64)Context,
           (__int64)OperationRegionObject);
}
