/*
 * XREFs of sub_18000A47C @ 0x18000A47C
 * Callers:
 *     sub_18000A310 @ 0x18000A310 (sub_18000A310.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A47C(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  _WORD *v5; // rax
  __int64 result; // rax
  __int64 v7; // r8
  _WORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  __int16 v12; // r8
  _WORD *v13; // rax

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
    v9 = 256 - v7;
    if ( 256 != v7 )
    {
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
    }
    v13 = v8 - 1;
    if ( v9 )
      v13 = v8;
    *v13 = 0;
    return v9 == 0 ? 0x80000005 : 0;
  }
  return result;
}
