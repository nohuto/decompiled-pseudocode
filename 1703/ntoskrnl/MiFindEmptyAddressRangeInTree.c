/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x140447274
 * Callers:
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v22; // rcx

  v6 = (unsigned __int64)(a2 + 4095) >> 12;
  v7 = a3 >> 12;
  if ( a4 > a5 )
    return 3221225495LL;
  v8 = *a1;
  v9 = ~(v7 - 1);
  v10 = v9 & (v7 + (a4 >> 12) - 1);
  if ( !v8 )
  {
LABEL_26:
    *a6 = v10 << 12;
    return 0LL;
  }
  v11 = a5 >> 12;
  if ( v10 > a5 >> 12 || v6 > v11 - v10 + 1 )
    return 3221225495LL;
  do
  {
    v12 = (unsigned __int64)v8;
    v8 = (_QWORD *)*v8;
  }
  while ( v8 );
  v13 = v12;
  v14 = *(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32);
  if ( v14 > v10 && v6 <= v14 - v10 )
    goto LABEL_26;
  while ( 1 )
  {
    v15 = *(_QWORD **)(v12 + 8);
    v16 = v12;
    if ( v15 )
    {
      do
      {
        v12 = (unsigned __int64)v15;
        v15 = (_QWORD *)*v15;
      }
      while ( v15 );
    }
    else
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 || *(_QWORD *)v12 == v16 )
          break;
        v16 = v12;
      }
    }
    v17 = *(unsigned __int8 *)(v13 + 33);
    if ( !v12 )
      break;
    v18 = v7 + ((v17 << 32) | *(unsigned int *)(v13 + 28));
    if ( (v9 & (v18 - 1)) < v10 )
    {
      if ( (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) <= v10 )
        goto LABEL_15;
      v19 = v10;
    }
    else
    {
      v19 = v9 & v18;
    }
    if ( v19 >= v11 )
      return 3221225495LL;
    v20 = *(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32);
    if ( v20 > v19 && v6 <= v20 - v19 && v6 <= v11 - v19 )
    {
      *a6 = v19 << 12;
      return 0LL;
    }
LABEL_15:
    v13 = v12;
  }
  if ( v11 >= 0x7FFFFFFF0LL )
    v11 = 0x7FFFFFFF0LL;
  v22 = v9 & (v7 + (*(unsigned int *)(v13 + 28) | (unsigned __int64)(v17 << 32)));
  if ( v11 <= v22 || v6 > v11 - v22 )
    return 3221225495LL;
  *a6 = v22 << 12;
  return 0LL;
}
