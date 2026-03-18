/*
 * XREFs of GetPointerDeviceKey @ 0x1C0013BD0
 * Callers:
 *     RetrieveCalibrationData @ 0x1C0013720 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01B3D04 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C001405C (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C0014118 (GetDeviceObjectPointer.c)
 */

_BOOL8 __fastcall GetPointerDeviceKey(int a1, void **a2, int a3)
{
  NTSTATUS DeviceObjectPointer; // ebx
  PVOID v6; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+20h]

  DeviceObject = 0LL;
  DeviceObjectPointer = GetDeviceObjectPointer(a1, 2, a3, (unsigned int)&Handle, (__int64)&v6, (__int64)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = GetPointerDevicePDO((PDEVICE_OBJECT)Object);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
    ObfDereferenceObject(Object);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(DeviceObject);
    ZwClose(Handle);
  }
  return DeviceObjectPointer >= 0;
}
