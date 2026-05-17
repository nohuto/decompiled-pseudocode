/*
 * XREFs of sub_18006337C @ 0x18006337C
 * Callers:
 *     sub_180060B10 @ 0x180060B10 (sub_180060B10.c)
 *     sub_180062330 @ 0x180062330 (sub_180062330.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_1800633D4 @ 0x1800633D4 (sub_1800633D4.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18006337C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  int v6; // edx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v2 = (unsigned __int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 88);
  result = *v2;
  if ( (v4 & 1) != 0 && result )
    result ^= (unsigned __int64)v2;
  v6 = v4 & 1;
  while ( result )
  {
    v7 = *(_QWORD *)(result + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 < v7 )
    {
      v8 = *(_QWORD *)result;
    }
    else
    {
      if ( a2 <= v7 )
        return result;
      v8 = *(_QWORD *)(result + 8);
    }
    if ( v6 && v8 )
      result ^= v8;
    else
      result = v8;
  }
  return result;
}
