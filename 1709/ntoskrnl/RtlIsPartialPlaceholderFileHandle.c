/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x140725700
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 */

NTSTATUS __cdecl RtlIsPartialPlaceholderFileHandle(HANDLE FileHandle, PBOOLEAN IsPartialPlaceholder)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+60h] [rbp+18h] BYREF

  result = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *IsPartialPlaceholder = (FileInformation & 0x440000) != 0;
    return 0;
  }
  return result;
}
