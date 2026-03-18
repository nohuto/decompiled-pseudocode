/*
 * XREFs of RtlIsPlaceholderFileHandle @ 0x1406EEBD0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     RtlpIsPlaceholder @ 0x1406EEC98 (RtlpIsPlaceholder.c)
 */

NTSTATUS __fastcall RtlIsPlaceholderFileHandle(void *a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  unsigned int FileInformation; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+64h] [rbp+1Ch]

  result = NtQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *a2 = RtlpIsPlaceholder(FileInformation, v6);
    return 0;
  }
  return result;
}
