/*
 * XREFs of RtlIsPlaceholderFileHandle @ 0x1800F83E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 *     sub_1800F84A0 @ 0x1800F84A0 (sub_1800F84A0.c)
 */

NTSTATUS __fastcall RtlIsPlaceholderFileHandle(void *a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-18h] BYREF
  unsigned int FileInformation; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+64h] [rbp+1Ch]

  result = ZwQueryInformationFile(a1, &IoStatusBlock, &FileInformation, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *a2 = sub_1800F84A0(FileInformation, v6);
    return 0;
  }
  return result;
}
