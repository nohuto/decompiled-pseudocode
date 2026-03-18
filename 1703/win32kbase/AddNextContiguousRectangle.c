/*
 * XREFs of AddNextContiguousRectangle @ 0x1C013E33C
 * Callers:
 *     RemoveGaps @ 0x1C013E610 (RemoveGaps.c)
 * Callees:
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 */

int **__fastcall AddNextContiguousRectangle(int **a1, int **a2, int a3)
{
  int **v3; // rdi
  int **v4; // rbx
  unsigned __int64 v5; // rcx
  int *v6; // r12
  int **v7; // r13
  int v8; // r10d
  int v9; // r11d
  int v10; // edi
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  int v13; // r9d
  int v14; // esi
  int v15; // ecx
  __int32 v16; // eax
  int v17; // r14d
  int v18; // r8d
  __m128i v19; // xmm0
  int **v20; // r15
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-69h]
  __m128i v27; // [rsp+28h] [rbp-61h] BYREF
  int v28; // [rsp+38h] [rbp-51h]
  int v29; // [rsp+3Ch] [rbp-4Dh]
  int *v30; // [rsp+40h] [rbp-49h]
  __int64 *v31; // [rsp+48h] [rbp-41h]
  int ***v32; // [rsp+50h] [rbp-39h]
  int **v33; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-21h]
  int **v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-9h]
  int v39[22]; // [rsp+88h] [rbp-1h] BYREF
  int **v40; // [rsp+F0h] [rbp+67h]
  int v42; // [rsp+100h] [rbp+77h] BYREF
  int v43; // [rsp+108h] [rbp+7Fh] BYREF

  v40 = a1;
  v33 = 0LL;
  v36 = 0LL;
  v3 = a1;
  v42 = -1;
  v4 = a2;
  v43 = -1;
  v34 = 0LL;
  v37 = 0LL;
  v5 = (unsigned __int64)&a1[a3];
  v35 = v5;
  if ( v3 >= a2 )
  {
LABEL_32:
    v23 = 0;
    v22 = 0;
    goto LABEL_33;
  }
  do
  {
    v6 = *v3;
    v7 = v4;
    if ( (unsigned __int64)v4 >= v5 )
      goto LABEL_26;
    v8 = v6[1];
    v9 = v6[3];
    v10 = *v6;
    v11 = v35;
    v28 = v8;
    v29 = v9;
    do
    {
      v12 = (__m128i *)*v7;
      v13 = (*v7)[2];
      if ( v13 > v10 )
      {
        v14 = v12->m128i_i32[0] - v6[2];
        v15 = v6[2] - v12->m128i_i32[0];
      }
      else
      {
        v14 = v10 - v13;
        v15 = v10 - v13;
      }
      v16 = v12->m128i_i32[3];
      LODWORD(v26) = v15;
      if ( v16 > v8 )
      {
        v17 = v12->m128i_i32[1] - v9;
        v18 = v9 - v12->m128i_i32[1];
        HIDWORD(v26) = v18;
      }
      else
      {
        v17 = v8 - v16;
        v18 = v8 - v16;
        HIDWORD(v26) = v8 - v16;
      }
      if ( v12->m128i_i32[1] >= v9 || v16 <= v8 )
      {
        if ( v12->m128i_i32[0] >= v6[2] || v13 <= v10 )
        {
          v32 = &v36;
          v31 = &v37;
          v30 = &v43;
          goto LABEL_18;
        }
        v14 = 0;
        v15 = 0;
        LODWORD(v26) = 0;
      }
      else
      {
        v17 = 0;
        v18 = 0;
        HIDWORD(v26) = 0;
      }
      v32 = &v33;
      v30 = &v42;
      v31 = &v34;
LABEL_18:
      v27 = *v12;
      v19 = v27;
      v27.m128i_i32[2] += v15;
      v27.m128i_i32[3] += v18;
      v27.m128i_i32[1] += v18;
      v27.m128i_i32[0] = v15 + _mm_cvtsi128_si32(v19);
      v38 = (unsigned __int64)(v7 + 1);
      v20 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        goto LABEL_22;
      do
      {
        if ( (unsigned int)IntersectRect(v39, *v20, v27.m128i_i32) )
          break;
        ++v20;
      }
      while ( (unsigned __int64)v20 < v11 );
      if ( (unsigned __int64)v20 >= v11 )
      {
LABEL_22:
        if ( v17 + v14 < (unsigned int)*v30 )
        {
          *v30 = v17 + v14;
          *v31 = v26;
          *v32 = v7;
        }
      }
      v7 = (int **)v38;
      v8 = v28;
      v9 = v29;
    }
    while ( v38 < v11 );
    v4 = a2;
    v3 = v40;
    v5 = v35;
LABEL_26:
    v40 = ++v3;
  }
  while ( v3 < v4 );
  if ( v42 != -1 )
  {
    v4 = v33;
    v21 = v34;
    goto LABEL_31;
  }
  if ( v43 == -1 )
    goto LABEL_32;
  v4 = v36;
  v21 = v37;
LABEL_31:
  v22 = v21;
  v23 = HIDWORD(v21);
LABEL_33:
  if ( v22 || v23 )
  {
    v24 = *v4;
    *v24 += v22;
    v24[2] += v22;
    v24[3] += v23;
    v24[1] += v23;
  }
  return v4;
}
