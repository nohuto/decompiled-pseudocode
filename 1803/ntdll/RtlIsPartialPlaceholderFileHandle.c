/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x1800F4750
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+60h] [rbp+18h] BYREF

  result = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *IsPartialPlaceholder = (FileInformation & 0x440000) != 0;
  }
  else
  {
    if ( result != -1073741811 )
      return result;
    *IsPartialPlaceholder = 0;
  }
  return 0;
}
