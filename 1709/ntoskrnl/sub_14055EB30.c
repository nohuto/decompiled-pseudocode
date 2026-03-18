/*
 * XREFs of sub_14055EB30 @ 0x14055EB30
 * Callers:
 *     sub_14054EB00 @ 0x14054EB00 (sub_14054EB00.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpGetSystemPdoList @ 0x14055EBD8 (PnpGetSystemPdoList.c)
 *     IoGetDeviceObjectPointer @ 0x140560DB0 (IoGetDeviceObjectPointer.c)
 *     sub_140560EA4 @ 0x140560EA4 (sub_140560EA4.c)
 */

__int64 __fastcall sub_14055EB30(__int64 a1)
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
    v2 = (void *)sub_140560EA4(DeviceObject);
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
