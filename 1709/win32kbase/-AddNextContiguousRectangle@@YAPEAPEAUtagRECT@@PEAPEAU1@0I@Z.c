/*
 * XREFs of ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C013D798
 * Callers:
 *     ?RemoveGaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DA6C (-RemoveGaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C005C860 (IntersectRect.c)
 */

struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  struct tagRECT **v3; // rdi
  struct tagRECT **v4; // rbx
  struct tagRECT **v5; // rcx
  struct tagRECT *v6; // r12
  int **v7; // r13
  LONG top; // r10d
  LONG bottom; // r11d
  LONG left; // edi
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  int v13; // r9d
  int v14; // esi
  int v15; // ecx
  LONG v16; // eax
  __int32 v17; // r14d
  __int32 v18; // r8d
  __m128i v19; // xmm0
  int **v20; // r15
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  struct tagRECT *v24; // rax
  __int64 v26; // [rsp+20h] [rbp-69h]
  __m128i v27; // [rsp+28h] [rbp-61h] BYREF
  LONG v28; // [rsp+38h] [rbp-51h]
  LONG v29; // [rsp+3Ch] [rbp-4Dh]
  int *v30; // [rsp+40h] [rbp-49h]
  __int64 *v31; // [rsp+48h] [rbp-41h]
  _QWORD *v32; // [rsp+50h] [rbp-39h]
  struct tagRECT **v33; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT **v35; // [rsp+68h] [rbp-21h]
  struct tagRECT **v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-9h]
  int v39[22]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT **v40; // [rsp+F0h] [rbp+67h]
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
  v5 = &a1[a3];
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
    v7 = (int **)v4;
    if ( v4 >= v5 )
      goto LABEL_26;
    top = v6->top;
    bottom = v6->bottom;
    left = v6->left;
    v11 = (unsigned __int64)v35;
    v28 = top;
    v29 = bottom;
    do
    {
      v12 = (__m128i *)*v7;
      v13 = (*v7)[2];
      if ( v13 > left )
      {
        v14 = v12->m128i_i32[0] - v6->right;
        v15 = v6->right - v12->m128i_i32[0];
      }
      else
      {
        v14 = left - v13;
        v15 = left - v13;
      }
      v16 = v12->m128i_i32[3];
      LODWORD(v26) = v15;
      if ( v16 > top )
      {
        v17 = v12->m128i_i32[1] - bottom;
        v18 = bottom - v12->m128i_i32[1];
        HIDWORD(v26) = v18;
      }
      else
      {
        v17 = top - v16;
        v18 = top - v16;
        HIDWORD(v26) = top - v16;
      }
      if ( v12->m128i_i32[1] >= bottom || v16 <= top )
      {
        if ( v12->m128i_i32[0] >= v6->right || v13 <= left )
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
      top = v28;
      bottom = v29;
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
    v24->left += v22;
    v24->right += v22;
    v24->bottom += v23;
    v24->top += v23;
  }
  return v4;
}
