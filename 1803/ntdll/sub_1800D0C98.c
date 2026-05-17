/*
 * XREFs of sub_1800D0C98 @ 0x1800D0C98
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

__int64 sub_1800D0C98()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+28h] [rbp-50h]
  unsigned int v2; // [rsp+38h] [rbp-40h]

  qword_18015BF98 = 0LL;
  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    qword_18015BFA0 = v1;
    qword_18015BF90 = v2;
    return 0LL;
  }
  return result;
}
