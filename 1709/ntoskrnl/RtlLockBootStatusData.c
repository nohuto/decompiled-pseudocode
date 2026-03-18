/*
 * XREFs of RtlLockBootStatusData @ 0x1405ACB30
 * Callers:
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 *     PopBootStatGet @ 0x1405AC1B8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x1405AC38C (PopBootStatSet.c)
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 *     PopBootStatCheckIntegrity @ 0x140707F20 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140708180 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitializeBootStatDataCache @ 0x140134704 (RtlInitializeBootStatDataCache.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     ZwOpenFile @ 0x14017DF20 (ZwOpenFile.c)
 */

NTSTATUS __stdcall RtlLockBootStatusData(PHANDLE FileHandle)
{
  int v1; // edi
  HANDLE FileHandlea; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  wchar_t Dst[264]; // [rsp+90h] [rbp-70h] BYREF

  v1 = 0;
  if ( BootStatFileHandleAcquired )
  {
    if ( FileHandle )
      *FileHandle = BootStatFileHandle;
  }
  else
  {
    wcscpy_s(Dst, 0x101uLL, L"\\SystemRoot\\bootstat.dat");
    RtlInitUnicodeString(&DestinationString, Dst);
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
  }
  return v1;
}
