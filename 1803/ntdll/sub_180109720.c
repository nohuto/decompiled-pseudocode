/*
 * XREFs of sub_180109720 @ 0x180109720
 * Callers:
 *     sub_1801095D4 @ 0x1801095D4 (sub_1801095D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180109720(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax
  _WORD *v8; // rax

  if ( a4 <= 0x7FFFFFFE )
  {
    v5 = a3 - (_QWORD)a1;
    v6 = 256LL;
    do
    {
      if ( !(v6 + a4 - 256) )
        break;
      v7 = *(_WORD *)((char *)a1 + v5);
      if ( !v7 )
        break;
      *a1++ = v7;
      --v6;
    }
    while ( v6 );
    v8 = a1 - 1;
    if ( v6 )
      v8 = a1;
    *v8 = 0;
    return v6 == 0 ? 0x8007007A : 0;
  }
  else
  {
    result = 2147942487LL;
    *a1 = 0;
  }
  return result;
}
