/*
 * XREFs of sub_180054D28 @ 0x180054D28
 * Callers:
 *     sub_180054BB0 @ 0x180054BB0 (sub_180054BB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180054D28(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r10
  __int16 v12; // r8

  v4 = 256LL;
  v5 = a1;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 256 - v4;
  else
    v7 = 0LL;
  if ( v4 )
  {
    v8 = &a1[v7];
    result = 0LL;
    v9 = 256 - v7;
    if ( 256 == v7 )
      goto LABEL_16;
    v10 = 2147483646LL;
    v11 = a3 - (_QWORD)v8;
    do
    {
      if ( !v10 )
        break;
      v12 = *(_WORD *)((char *)v8 + v11);
      if ( !v12 )
        break;
      *v8 = v12;
      --v10;
      ++v8;
      --v9;
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_16:
      --v8;
      result = 2147483653LL;
    }
    *v8 = 0;
  }
  return result;
}
