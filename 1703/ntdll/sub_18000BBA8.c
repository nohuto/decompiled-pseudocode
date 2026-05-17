/*
 * XREFs of sub_18000BBA8 @ 0x18000BBA8
 * Callers:
 *     sub_18000BBF4 @ 0x18000BBF4 (sub_18000BBF4.c)
 *     sub_1800D7B28 @ 0x1800D7B28 (sub_1800D7B28.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 */

__int64 sub_18000BBA8()
{
  __int64 result; // rax
  char v1; // [rsp+20h] [rbp-18h]
  int v2; // [rsp+20h] [rbp-18h]

  v1 = 0;
  result = ZwCreateEvent(&qword_18015B1C8, 2031619LL, 0LL, 1LL, v1);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = 0;
    return ZwCreateEvent(&qword_18015B200, 2031619LL, 0LL, 1LL, v2);
  }
  return result;
}
