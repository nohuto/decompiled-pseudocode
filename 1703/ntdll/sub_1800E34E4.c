/*
 * XREFs of sub_1800E34E4 @ 0x1800E34E4
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationFile @ 0x1800A5520 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_1800E34E4(char *a1)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _BYTE FileInformation[40]; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  else
    return ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
