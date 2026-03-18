/*
 * XREFs of sub_1405E31F0 @ 0x1405E31F0
 * Callers:
 *     sub_1405D49A0 @ 0x1405D49A0 (sub_1405D49A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     IoGetDeviceObjectPointer @ 0x140496520 (IoGetDeviceObjectPointer.c)
 *     PnpGetSystemPdoList @ 0x1405E3298 (PnpGetSystemPdoList.c)
 *     sub_1405E3D3C @ 0x1405E3D3C (sub_1405E3D3C.c)
 */

__int64 __fastcall sub_1405E31F0(__int64 a1)
{
  void *v2; // rbx
  NTSTATUS DeviceObjectPointer; // edi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  FileObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
    v2 = (void *)sub_1405E3D3C(DeviceObject);
  if ( FileObject )
    ObfDereferenceObject(FileObject);
  if ( DeviceObjectPointer >= 0 )
  {
    if ( !v2 )
      return (unsigned int)-1073741632;
    DeviceObjectPointer = PnpGetSystemPdoList(v2, a1);
  }
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)DeviceObjectPointer;
}
