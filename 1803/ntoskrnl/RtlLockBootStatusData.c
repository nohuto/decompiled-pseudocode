/*
 * XREFs of RtlLockBootStatusData @ 0x14060F700
 * Callers:
 *     PopBootStatSet @ 0x14060EF54 (PopBootStatSet.c)
 *     PoClearTransitionMarker @ 0x1406230BC (PoClearTransitionMarker.c)
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 *     PopBootStatGet @ 0x14064D048 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x14076C05C (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlInitializeBootStatDataCache @ 0x140184128 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1401845AC (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  int v1; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v7; // [rsp+A8h] [rbp+28h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE FileHandlea; // [rsp+B8h] [rbp+38h] BYREF

  SourceString = 0LL;
  v1 = 0;
  v7 = 0;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
      *FileHandle = BootStatFileHandle;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v7);
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v1 < 0 )
    {
      BootStatFileHandle = 0LL;
      BootStatFileHandleAcquired = 0;
      if ( FileHandle )
        *FileHandle = 0LL;
    }
    else
    {
      BootStatFileHandle = FileHandlea;
      BootStatFileHandleAcquired = 1;
      RtlInitializeBootStatDataCache();
      if ( FileHandle )
        *FileHandle = FileHandlea;
      else
        BootStatKeepHandleOpen = 1;
    }
    if ( v7 )
      ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  return v1;
}
