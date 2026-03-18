/*
 * XREFs of PopGetPolicyDeviceObject @ 0x1405D6AA4
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1405D67E8 (PopConnectToPolicyDevice.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateFile @ 0x14017E9E0 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

PDEVICE_OBJECT __fastcall PopGetPolicyDeviceObject(UNICODE_STRING *a1, _QWORD *a2)
{
  PDEVICE_OBJECT v2; // rdi
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+77h] BYREF

  v2 = 0LL;
  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0) >= 0 )
  {
    v4 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v5 = Object;
    if ( v4 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      v2 = RelatedDeviceObject;
      if ( RelatedDeviceObject )
      {
        ObfReferenceObject(RelatedDeviceObject);
        *a2 = v5;
        v5 = 0LL;
      }
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return v2;
}
