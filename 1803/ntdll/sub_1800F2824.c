/*
 * XREFs of sub_1800F2824 @ 0x1800F2824
 * Callers:
 *     sub_1800F2B6C @ 0x1800F2B6C (sub_1800F2B6C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

__int64 __fastcall sub_1800F2824(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp-20h]

  result = ZwQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = v4;
    return 0LL;
  }
  return result;
}
