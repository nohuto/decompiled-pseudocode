/*
 * XREFs of sub_18010E964 @ 0x18010E964
 * Callers:
 *     sub_18010E7D8 @ 0x18010E7D8 (sub_18010E7D8.c)
 * Callees:
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

__int64 __fastcall sub_18010E964(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax

  if ( !a3 || !a5 )
    return 3221225485LL;
  *a5 = 2;
  result = ZwOpenKey();
  if ( (int)result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey();
  return result;
}
