/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x14056C780
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14011113C (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  _QWORD **v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbp
  _QWORD *v14; // rax
  unsigned __int64 i; // r10
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _QWORD **v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  unsigned __int64 v25; // r10

  v7 = a3 >> 12;
  v8 = (unsigned __int64)(a2 + 4095) >> 12;
  v9 = a1;
  v10 = a4 >> 12;
  v11 = ~((a3 >> 12) - 1);
  v12 = v11 & ((a3 >> 12) + (a5 >> 12) - 1);
  if ( a4 >> 12 )
    v12 = MiHonorRangeStraddleRequirement(v12, (unsigned __int64)(a2 + 4095) >> 12, v10, 0);
  v13 = a6 >> 12;
  if ( v12 > a6 >> 12 || v8 > v13 - v12 + 1 )
    return 3221225495LL;
  v14 = *v9;
  if ( !*v9 )
    goto LABEL_39;
  do
  {
    i = (unsigned __int64)v14;
    v14 = (_QWORD *)*v14;
  }
  while ( v14 );
  v16 = i;
  v17 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
  if ( v17 > v12 && v8 <= v17 - v12 )
  {
LABEL_39:
    *a7 = v12 << 12;
    return 0LL;
  }
  while ( 1 )
  {
    v18 = *(_QWORD ***)(i + 8);
    v19 = i;
    if ( v18 )
    {
      v23 = *v18;
      for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)i == v19 )
          break;
        v19 = i;
      }
    }
    if ( !i )
      break;
    v20 = v7 + (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32));
    if ( (v11 & (v20 - 1)) < v12 )
    {
      if ( (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) <= v12 )
        goto LABEL_18;
      v21 = v12;
    }
    else
    {
      v21 = v11 & v20;
    }
    if ( v10 )
      v21 = MiHonorRangeStraddleRequirement(v21, v8, v10, 0);
    if ( v21 >= v13 )
      return 3221225495LL;
    v22 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
    if ( v22 > v21 && v8 <= v22 - v21 && v8 <= v13 - v21 )
      goto LABEL_28;
LABEL_18:
    v16 = i;
  }
  v25 = 0x7FFFFFFF0LL;
  if ( v13 < 0x7FFFFFFF0LL )
    v25 = a6 >> 12;
  v21 = v11 & (v7 + (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)));
  if ( v21 < v12 )
    v21 = v12;
  if ( v10 )
    v21 = MiHonorRangeStraddleRequirement(v21, v8, v10, 0);
  if ( v25 > v21 && v8 <= v25 - v21 )
  {
LABEL_28:
    *a7 = v21 << 12;
    return 0LL;
  }
  return 3221225495LL;
}
