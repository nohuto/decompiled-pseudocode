/*
 * XREFs of MiFindEmptyAddressRangeDownTree @ 0x14056E3C0
 * Callers:
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiFindEmptyAddressRangeDown @ 0x14056E304 (MiFindEmptyAddressRangeDown.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14011113C (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDownTree(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v7; // rdx
  __int64 *v8; // r10
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 k; // r10
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rdx
  _BYTE *i; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r11
  unsigned __int64 j; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v31; // rax
  __int64 v32; // r10
  _BYTE v33[24]; // [rsp+20h] [rbp-68h] BYREF
  int v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  char v36; // [rsp+40h] [rbp-48h]
  char v37; // [rsp+41h] [rbp-47h]
  unsigned __int64 v38; // [rsp+98h] [rbp+10h]

  v7 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = a1;
  v9 = a4 >> 12;
  v38 = v7 >> 12;
  if ( a5 >= a6 || a6 - a5 + 1 < v7 )
    return 3221225495LL;
  v10 = a3 >> 12;
  v11 = ~(a3 - 1) & (a6 - v7);
  v12 = v11 >> 12;
  if ( v9 )
  {
    v12 = ~(v10 - 1) & MiHonorRangeStraddleRequirement(v12, v7 >> 12, v9, 1);
    v11 = v12 << 12;
  }
  if ( v11 < a5 )
    return 3221225495LL;
  v13 = *v8;
  if ( *v8 )
  {
    k = 0LL;
    do
    {
      v15 = (_BYTE *)v13;
      v13 = *(_QWORD *)(v13 + 8);
    }
    while ( v13 );
    v16 = v38;
    for ( i = v15; ; i = v20 )
    {
      if ( v15 )
      {
        k = (unsigned __int64)v15;
        i = v33;
        v15 = 0LL;
        v36 = (a6 + 1) >> 44;
        v34 = (a6 + 1) >> 12;
      }
      else
      {
        v18 = *(_QWORD *)k;
        v19 = k;
        if ( *(_QWORD *)k )
        {
          k = *(_QWORD *)k;
          for ( j = *(_QWORD *)(v18 + 8); j; j = *(_QWORD *)(j + 8) )
            k = j;
        }
        else
        {
          for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)(k + 8) == v19 )
              break;
            v19 = k;
          }
        }
      }
      if ( k )
      {
        v20 = (_BYTE *)k;
        v21 = a5 >> 12;
        if ( (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) + 1 >= a5 >> 12 )
          v21 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) + 1;
        else
          v20 = v33;
        v22 = v21 + v10 - 1;
      }
      else
      {
        v35 = 0;
        v20 = v33;
        v37 = 0;
        v22 = v10 + (a5 >> 12) - 1;
      }
      v23 = ~(v10 - 1) & v22;
      if ( v9 )
        v23 = MiHonorRangeStraddleRequirement(v23, v16, v9, 0);
      if ( v23 <= v12 )
      {
        v25 = (unsigned __int8)i[32];
        v26 = *((unsigned int *)i + 6);
        v27 = a6 >> 12;
        v28 = v26 | (v25 << 32);
        if ( v28 <= a6 >> 12 )
          v27 = v28;
        if ( v27 > v23 && v16 <= v27 - v23 )
          break;
      }
      if ( v20 == v33 )
        return 3221225495LL;
    }
    v29 = ~(v10 - 1) & (v27 - v16);
    if ( v9 )
    {
      v31 = MiHonorRangeStraddleRequirement(v29, v16, v9, 1);
      v29 = v32 & v31;
    }
    *a7 = v29 << 12;
    return 0LL;
  }
  else
  {
    *a7 = v11;
    return 0LL;
  }
}
