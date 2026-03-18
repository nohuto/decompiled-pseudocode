/*
 * XREFs of sub_14045EFBC @ 0x14045EFBC
 * Callers:
 *     sub_1404E4FF0 @ 0x1404E4FF0 (sub_1404E4FF0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpGetSystemPdoList @ 0x14045F064 (PnpGetSystemPdoList.c)
 *     sub_1404628A8 @ 0x1404628A8 (sub_1404628A8.c)
 *     IoGetDeviceObjectPointer @ 0x1404630E0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall sub_14045EFBC(__int64 a1)
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
    v2 = (void *)sub_1404628A8(DeviceObject);
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
