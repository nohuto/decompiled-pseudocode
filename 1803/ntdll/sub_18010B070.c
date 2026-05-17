/*
 * XREFs of sub_18010B070 @ 0x18010B070
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryMutant @ 0x18009D450 (ZwQueryMutant.c)
 */

__int64 __fastcall sub_18010B070(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
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
