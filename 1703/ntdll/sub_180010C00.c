/*
 * XREFs of sub_180010C00 @ 0x180010C00
 * Callers:
 *     sub_18001094C @ 0x18001094C (sub_18001094C.c)
 * Callees:
 *     sub_180010B8C @ 0x180010B8C (sub_180010B8C.c)
 */

_DWORD *__fastcall sub_180010C00(unsigned __int64 *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v8; // r8
  int v10; // r11d

  v4 = 0LL;
  if ( !a3 )
    return 0LL;
  v8 = 2LL;
  while ( *a2 >= 0x80000000 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( !sub_180010B8C(a1, (unsigned __int64)&a2[v8], v8 * 4) || v10 + 1 >= a3 )
      return 0LL;
  }
  if ( a2[1] >= 0x80000000 )
    return a2;
  return (_DWORD *)v4;
}
