/*
 * XREFs of sub_1800F2824 @ 0x1800F2824
 * Callers:
 *     sub_1800F2B6C @ 0x1800F2B6C (sub_1800F2B6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall sub_1800F2824(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( result >= 0 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
