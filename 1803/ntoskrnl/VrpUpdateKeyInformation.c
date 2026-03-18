/*
 * XREFs of VrpUpdateKeyInformation @ 0x14070CDAC
 * Callers:
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14070B0E8 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  char *v8; // r12
  unsigned int *v9; // r14
  unsigned int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rcx
  _WORD *v15; // r8
  __m128i *v16; // rsi
  void *v17; // r15
  unsigned int v18; // r8d
  unsigned int *v19; // r11
  __int64 v20; // rax
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  unsigned __int64 v24; // rcx
  _WORD *v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // r12
  int v28; // eax
  int *v30; // [rsp+20h] [rbp-48h]
  __m128i v31; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !a1 )
  {
    v18 = 16;
    v17 = a2 + 4;
    v19 = 0LL;
    v20 = 3LL;
    goto LABEL_19;
  }
  v11 = a1 - 1;
  if ( !v11 )
  {
    v20 = 5LL;
    v9 = (unsigned int *)(a2 + 3);
    v19 = (unsigned int *)(a2 + 4);
    v17 = a2 + 6;
    v18 = 24;
LABEL_19:
    v30 = &a2[v20];
    v21 = _mm_cvtsi128_si32(*a5);
    v31 = *a5;
    v22 = v21;
    v23 = 0;
    v24 = v22 >> 1;
    v31.m128i_i16[0] = 0;
    if ( v24 )
    {
      v25 = (_WORD *)(v31.m128i_i64[1] - 2 + 2 * v24);
      do
      {
        if ( *v25 == 92 )
          break;
        v23 += 2;
        --v25;
        --v24;
      }
      while ( v24 );
      v31.m128i_i16[0] = v23;
    }
    v31.m128i_i16[1] = v23;
    v16 = &v31;
    v31.m128i_i64[1] += 2 * v24;
LABEL_25:
    if ( a2 )
    {
      if ( v9 )
      {
        v27 = *v9;
        *a4 = 24;
        v8 = (char *)a2 + v27;
        v10 = v16->m128i_u16[0] + 24;
        *a4 = v10;
        v28 = *v19;
        if ( *v19 )
        {
          v10 = (v10 + 7) & 0xFFFFFFF8;
          *a4 = v10;
          v28 = *v19;
        }
        v26 = v10 + v28;
        goto LABEL_33;
      }
    }
    else if ( v9 )
    {
      *a4 += v16->m128i_u16[0];
      v26 = *a4;
LABEL_34:
      if ( a3 < v18 )
        return (unsigned int)-1073741789;
      if ( a3 >= v26 )
      {
        if ( v9 && *v19 )
        {
          memmove((char *)a2 + v10, v8, *v19);
          *v9 = v10;
        }
        memmove(v17, (const void *)v16->m128i_i64[1], v16->m128i_u16[0]);
        *v30 = v16->m128i_u16[0];
      }
      else
      {
        return (unsigned int)-2147483643;
      }
      return v6;
    }
    v26 = (_DWORD)v17 + v16->m128i_u16[0] - (_DWORD)a2;
LABEL_33:
    *a4 = v26;
    goto LABEL_34;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v16 = a5;
    v17 = a2 + 1;
    v30 = a2;
    v18 = 4;
    v19 = 0LL;
    goto LABEL_25;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 4 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v14 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v14 )
  {
    v15 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v14);
    do
    {
      if ( *v15 == 92 )
        break;
      --v15;
      --v14;
    }
    while ( v14 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v14;
  return v6;
}
