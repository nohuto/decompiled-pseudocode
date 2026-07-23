/*
 * XREFs of sub_180047564 @ 0x180047564
 * Callers:
 *     sub_1800474C8 @ 0x1800474C8 (sub_1800474C8.c)
 * Callees:
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800D7B0C @ 0x1800D7B0C (sub_1800D7B0C.c)
 */

__int64 __fastcall sub_180047564(const void **a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  PVOID v7; // rax

  v2 = 0;
  if ( a2 > *((unsigned __int16 *)a1 + 1) )
  {
    if ( a2 > 0xFFFE )
      return (unsigned int)-1073741562;
    v5 = (a2 + 63) & 0xFFFFFFC0;
    if ( v5 > 0xFFFE )
      v5 = 65534;
    if ( a1[1] == a1 + 2 )
    {
      v7 = sub_180043FE0(v5);
      v6 = (__int64)v7;
      if ( !v7 )
        return (unsigned int)-1073741801;
      if ( *(_WORD *)a1 )
        memmove(v7, a1[1], *(unsigned __int16 *)a1);
    }
    else
    {
      v6 = sub_1800D7B0C(v5);
    }
    if ( v6 )
    {
      a1[1] = (const void *)v6;
      *((_WORD *)a1 + 1) = v5;
      return v2;
    }
    return (unsigned int)-1073741801;
  }
  return v2;
}
