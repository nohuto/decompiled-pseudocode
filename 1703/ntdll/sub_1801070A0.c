/*
 * XREFs of sub_1801070A0 @ 0x1801070A0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryMutant @ 0x1800A7BF0 (ZwQueryMutant.c)
 */

__int64 __fastcall sub_1801070A0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax

  *a4 = 0;
  if ( a3 < 0x18 )
    return 3221225507LL;
  result = ZwQueryMutant();
  if ( (int)result < 0 || (result = ZwQueryMutant(), (int)result < 0) )
    *a4 = 0;
  else
    *a4 += 16;
  return result;
}
