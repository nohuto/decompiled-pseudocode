/*
 * XREFs of sub_1800DE93C @ 0x1800DE93C
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_1800DE93C(char *a1)
{
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-48h] BYREF
  _BYTE FileInformation[40]; // [rsp+40h] [rbp-38h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return -1073741816;
  else
    return ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
}
