/*
 * XREFs of sub_18010672C @ 0x18010672C
 * Callers:
 *     sub_1801065D4 @ 0x1801065D4 (sub_1801065D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010672C(_WORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // r10
  __int16 v9; // ax

  if ( a4 <= 0x7FFFFFFE )
  {
    v7 = 256LL;
    v6 = 0;
    v8 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v7 + a4 - 256) )
        break;
      v9 = *(_WORD *)((char *)a1 + v8);
      if ( !v9 )
        break;
      *a1++ = v9;
      --v7;
    }
    while ( v7 );
    if ( !v7 )
    {
      --a1;
      v6 = -2147024774;
    }
  }
  else
  {
    v6 = -2147024809;
  }
  *a1 = 0;
  return v6;
}
