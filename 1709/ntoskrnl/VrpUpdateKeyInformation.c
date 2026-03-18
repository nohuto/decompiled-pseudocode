/*
 * XREFs of VrpUpdateKeyInformation @ 0x1406A8714
 * Callers:
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406A6A5C (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned __int8 a6)
{
  unsigned int v6; // ebx
  char *v8; // r12
  unsigned int *v9; // rsi
  _DWORD *v10; // r14
  unsigned int v11; // r15d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned __int64 v15; // rcx
  _WORD *v16; // r8
  __m128i *v17; // rdi
  void *v18; // rbp
  unsigned int v19; // r8d
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  _WORD *v25; // rdi
  __int64 v26; // r12
  int v27; // eax
  int *v29; // [rsp+20h] [rbp-48h]
  __m128i v30; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !a1 )
  {
    v20 = 3LL;
    v18 = a2 + 4;
    v19 = 16;
    goto LABEL_19;
  }
  v12 = a1 - 1;
  if ( !v12 )
  {
    v20 = 5LL;
    v9 = (unsigned int *)(a2 + 3);
    v10 = a2 + 4;
    v18 = a2 + 6;
    v19 = 24;
LABEL_19:
    v29 = &a2[v20];
    v21 = _mm_cvtsi128_si32(*a5);
    v30 = *a5;
    v22 = v21;
    v23 = 0;
    v24 = v22 >> 1;
    v30.m128i_i16[0] = 0;
    if ( v24 )
    {
      v25 = (_WORD *)(v30.m128i_i64[1] - 2 + 2 * v24);
      do
      {
        if ( *v25 == 92 )
          break;
        v23 += 2;
        --v25;
        --v24;
      }
      while ( v24 );
      v30.m128i_i16[0] = v23;
    }
    v30.m128i_i16[1] = v23;
    v17 = &v30;
    v30.m128i_i64[1] += 2 * v24;
LABEL_25:
    if ( a2 )
    {
      if ( v9 )
      {
        v26 = *v9;
        *a4 = 24;
        v8 = (char *)a2 + v26;
        v27 = v17->m128i_u16[0] + 24;
        *a4 = v27;
        if ( *v10 )
          *a4 = (v27 + 7) & 0xFFFFFFF8;
        v11 = *a4;
        *a4 += *v10;
        goto LABEL_33;
      }
    }
    else if ( v9 )
    {
      *a4 += v17->m128i_u16[0];
LABEL_33:
      if ( a3 < v19 )
        return (unsigned int)-1073741789;
      if ( a3 >= *a4 )
      {
        if ( v9 && *v10 )
        {
          memmove((char *)a2 + v11, v8, (unsigned int)*v10);
          *v9 = v11;
        }
        memmove(v18, (const void *)v17->m128i_i64[1], v17->m128i_u16[0]);
        *v29 = v17->m128i_u16[0];
      }
      else
      {
        return (unsigned int)-2147483643;
      }
      return v6;
    }
    *a4 = (_DWORD)v18 + v17->m128i_u16[0] - (_DWORD)a2;
    goto LABEL_33;
  }
  v13 = v12 - 2;
  if ( !v13 )
  {
    v17 = a5;
    v18 = a2 + 1;
    v29 = a2;
    v19 = 4;
    goto LABEL_25;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 4 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v15 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v15 )
  {
    v16 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v15);
    do
    {
      if ( *v16 == 92 )
        break;
      --v16;
      --v15;
    }
    while ( v15 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v15;
  return v6;
}
