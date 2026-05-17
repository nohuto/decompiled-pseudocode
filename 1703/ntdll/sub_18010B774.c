/*
 * XREFs of sub_18010B774 @ 0x18010B774
 * Callers:
 *     sub_18010B5E8 @ 0x18010B5E8 (sub_18010B5E8.c)
 * Callees:
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 */

__int64 __fastcall sub_18010B774(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
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
