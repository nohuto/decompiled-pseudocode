/*
 * XREFs of sub_180095AC4 @ 0x180095AC4
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

__int64 sub_180095AC4()
{
  __int64 result; // rax
  _BYTE v1[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v2; // [rsp+28h] [rbp-50h]
  unsigned int v3; // [rsp+38h] [rbp-40h]

  qword_18015AF70 = 0LL;
  result = ZwQuerySystemInformation(0LL, v1, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_18015AF78 = v2;
    qword_18015AF68 = v3;
    return 0LL;
  }
  return result;
}
