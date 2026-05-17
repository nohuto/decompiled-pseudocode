/*
 * XREFs of sub_18005CE48 @ 0x18005CE48
 * Callers:
 *     sub_180059D2C @ 0x180059D2C (sub_180059D2C.c)
 *     sub_1800D0858 @ 0x1800D0858 (sub_1800D0858.c)
 * Callees:
 *     ZwCreateEvent @ 0x18009B3C0 (ZwCreateEvent.c)
 */

__int64 sub_18005CE48()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  v1 = 0;
  result = ZwCreateEvent(&qword_18015C1E8, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&qword_18015C220, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
