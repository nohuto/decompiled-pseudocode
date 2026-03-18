/*
 * XREFs of IopCreateRootDirectories @ 0x1408C45EC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x140568EDC (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x1408C46C8 (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
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
  return (int)IopCreateUmdfDirectory() >= 0;
}
