/*
 * XREFs of IopCreateRootDirectories @ 0x140820A80
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     NtCreateDirectoryObject @ 0x1404423E4 (NtCreateDirectoryObject.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 */

char IopCreateRootDirectories()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE DirectoryHandle; // [rsp+70h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  ObCloseHandle(DirectoryHandle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  ObCloseHandle(DirectoryHandle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  ObCloseHandle(DirectoryHandle, 0);
  return 1;
}
