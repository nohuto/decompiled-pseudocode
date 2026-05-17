/*
 * XREFs of sub_180047A60 @ 0x180047A60
 * Callers:
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 * Callees:
 *     sub_180047A28 @ 0x180047A28 (sub_180047A28.c)
 */

_DWORD *__fastcall sub_180047A60(unsigned __int64 *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v8; // r8
  int v10; // r11d

  v4 = 0LL;
  if ( !a3 )
    return 0LL;
  v8 = 2LL;
  while ( *a2 < (int)v4 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( !sub_180047A28(a1, (unsigned __int64)&a2[v8], v8 * 4) || v10 + 1 >= a3 )
      return 0LL;
  }
  if ( a2[1] < (int)v4 )
    return a2;
  return (_DWORD *)v4;
}
