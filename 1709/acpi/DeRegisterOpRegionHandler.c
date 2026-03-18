/*
 * XREFs of DeRegisterOpRegionHandler @ 0x1C00A39C0
 * Callers:
 *     <none>
 * Callees:
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C0002A1C (OSConvertDeviceHandleToNSHANDLE.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00A3A64 (UnRegisterOperationRegionHandler.c)
 */

NTSTATUS __stdcall DeRegisterOpRegionHandler(PDEVICE_OBJECT DeviceObject, PVOID OperationRegionObject)
{
  __int64 v4; // rax

  if ( !DeviceObject )
    return -1073741811;
  v4 = OSConvertDeviceHandleToNSHANDLE((ULONG_PTR)DeviceObject);
  return UnRegisterOperationRegionHandler(v4, OperationRegionObject);
}
