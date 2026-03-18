/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x140725700
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall RtlIsPartialPlaceholderFileHandle(void *a1, bool *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  int FileInformation; // [rsp+60h] [rbp+18h] BYREF

  result = NtQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *a2 = (FileInformation & 0x440000) != 0;
    return 0;
  }
  return result;
}
