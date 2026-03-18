/*
 * XREFs of CmpSendBootDeviceUsageNotification @ 0x140694FC4
 * Callers:
 *     CmpInitializeSystemHivesLoad @ 0x1405E18B4 (CmpInitializeSystemHivesLoad.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateFile @ 0x14017E360 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 */

__int64 __fastcall CmpSendBootDeviceUsageNotification(char a1)
{
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+17h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF

  FileHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\BootDevice");
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateFile(&FileHandle, 0x180u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x40u, 0LL, 0);
  if ( v2 >= 0 )
  {
    v2 = ObReferenceObjectByHandle(FileHandle, 0x180u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    if ( v2 >= 0 )
    {
      v2 = PiPagePathSetState((struct _FILE_OBJECT *)Object, a1 == 0);
      if ( v2 >= 0 )
        v2 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
