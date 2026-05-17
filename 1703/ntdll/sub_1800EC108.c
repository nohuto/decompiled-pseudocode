/*
 * XREFs of sub_1800EC108 @ 0x1800EC108
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EC108(_WORD *a1, __int64 a2, __int64 a3)
{
  signed int v4; // r9d
  __int64 v7; // rcx
  _WORD *i; // rax
  __int64 v9; // r8
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rbx
  __int16 v14; // ax

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_9;
  v7 = a2;
  for ( i = a1; v7; --v7 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v4 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = a2 - v7;
  else
LABEL_9:
    v9 = 0LL;
  if ( v4 >= 0 )
  {
    v10 = &a1[v9];
    v4 = 0;
    v11 = a2 - v9;
    if ( a2 == v9 )
      goto LABEL_17;
    v12 = 2147483646LL;
    v13 = a3 - (_QWORD)v10;
    do
    {
      if ( !v12 )
        break;
      v14 = *(_WORD *)((char *)v10 + v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_17:
      --v10;
      v4 = -2147483643;
    }
    *v10 = 0;
  }
  return (unsigned int)v4;
}
