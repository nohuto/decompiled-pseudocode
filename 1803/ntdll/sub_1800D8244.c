/*
 * XREFs of sub_1800D8244 @ 0x1800D8244
 * Callers:
 *     sub_180005150 @ 0x180005150 (sub_180005150.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 *     sub_1801095D4 @ 0x1801095D4 (sub_1801095D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D8244(_WORD *a1, __int64 a2, __int64 a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
