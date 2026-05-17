/*
 * XREFs of sub_1801043C8 @ 0x1801043C8
 * Callers:
 *     sub_1801042E8 @ 0x1801042E8 (sub_1801042E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 */

__int64 sub_1801043C8()
{
  __int64 result; // rax
  int v1; // [rsp+78h] [rbp+3Fh]
  int v2; // [rsp+7Ch] [rbp+43h]

  result = ZwOpenKey();
  if ( (int)result >= 0 )
  {
    result = ZwQueryValueKey();
    if ( (int)result >= 0 && v1 == 4 )
    {
      if ( v2 )
        dword_18015D040 |= 0x10u;
      else
        dword_18015D040 |= 8u;
    }
  }
  return result;
}
