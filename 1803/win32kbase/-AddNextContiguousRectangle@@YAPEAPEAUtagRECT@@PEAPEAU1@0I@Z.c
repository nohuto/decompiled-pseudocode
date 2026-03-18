/*
 * XREFs of ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C01423F0
 * Callers:
 *     ?RemoveGaps@@YAXPEAUtagRECT@@I@Z @ 0x1C01426C8 (-RemoveGaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C0057618 (IntersectRect.c)
 */

struct tagRECT **__fastcall AddNextContiguousRectangle(struct tagRECT **a1, struct tagRECT **a2, int a3)
{
  struct tagRECT **v3; // rdi
  struct tagRECT **v4; // rbx
  struct tagRECT **v5; // rcx
  struct tagRECT *v6; // r12
  int **v7; // r13
  LONG top; // r11d
  LONG bottom; // r14d
  LONG left; // edi
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  int v13; // r9d
  int v14; // esi
  int v15; // ecx
  LONG v16; // eax
  __int32 v17; // r10d
  int v18; // r15d
  int v19; // r8d
  __m128i v20; // xmm0
  int **v21; // r14
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  struct tagRECT *v25; // rax
  __int64 v27; // [rsp+20h] [rbp-69h]
  __m128i v28; // [rsp+28h] [rbp-61h] BYREF
  LONG v29; // [rsp+38h] [rbp-51h]
  LONG v30; // [rsp+3Ch] [rbp-4Dh]
  int *v31; // [rsp+40h] [rbp-49h]
  __int64 *v32; // [rsp+48h] [rbp-41h]
  _QWORD *v33; // [rsp+50h] [rbp-39h]
  struct tagRECT **v34; // [rsp+58h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT **v36; // [rsp+68h] [rbp-21h]
  struct tagRECT **v37; // [rsp+70h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-9h]
  int v40[22]; // [rsp+88h] [rbp-1h] BYREF
  struct tagRECT **v41; // [rsp+F0h] [rbp+67h]
  int v43; // [rsp+100h] [rbp+77h] BYREF
  int v44; // [rsp+108h] [rbp+7Fh] BYREF

  v41 = a1;
  v34 = 0LL;
  v37 = 0LL;
  v3 = a1;
  v43 = -1;
  v4 = a2;
  v44 = -1;
  v35 = 0LL;
  v38 = 0LL;
  v5 = &a1[a3];
  v36 = v5;
  if ( v3 >= a2 )
  {
LABEL_32:
    v24 = 0;
    v23 = 0;
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
    v11 = (unsigned __int64)v36;
    v29 = top;
    v30 = bottom;
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
      v17 = v12->m128i_i32[1];
      LODWORD(v27) = v15;
      if ( v16 > top )
      {
        v18 = v17 - bottom;
        v19 = bottom - v17;
        HIDWORD(v27) = bottom - v17;
      }
      else
      {
        v18 = top - v16;
        v19 = top - v16;
        HIDWORD(v27) = top - v16;
      }
      if ( v17 >= bottom || v16 <= top )
      {
        if ( v12->m128i_i32[0] >= v6->right || v13 <= left )
        {
          v33 = &v37;
          v32 = &v38;
          v31 = &v44;
          goto LABEL_18;
        }
        v14 = 0;
        v15 = 0;
        LODWORD(v27) = 0;
      }
      else
      {
        v18 = 0;
        v19 = 0;
        HIDWORD(v27) = 0;
      }
      v33 = &v34;
      v31 = &v43;
      v32 = &v35;
LABEL_18:
      v28 = *v12;
      v20 = v28;
      v28.m128i_i32[2] += v15;
      v28.m128i_i32[3] += v19;
      v28.m128i_i32[1] += v19;
      v28.m128i_i32[0] = v15 + _mm_cvtsi128_si32(v20);
      v39 = (unsigned __int64)(v7 + 1);
      v21 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        goto LABEL_22;
      do
      {
        if ( (unsigned int)IntersectRect(v40, *v21, v28.m128i_i32) )
          break;
        ++v21;
      }
      while ( (unsigned __int64)v21 < v11 );
      if ( (unsigned __int64)v21 >= v11 )
      {
LABEL_22:
        if ( v18 + v14 < (unsigned int)*v31 )
        {
          *v31 = v18 + v14;
          *v32 = v27;
          *v33 = v7;
        }
      }
      v7 = (int **)v39;
      top = v29;
      bottom = v30;
    }
    while ( v39 < v11 );
    v4 = a2;
    v3 = v41;
    v5 = v36;
LABEL_26:
    v41 = ++v3;
  }
  while ( v3 < v4 );
  if ( v43 != -1 )
  {
    v4 = v34;
    v22 = v35;
    goto LABEL_31;
  }
  if ( v44 == -1 )
    goto LABEL_32;
  v4 = v37;
  v22 = v38;
LABEL_31:
  v23 = v22;
  v24 = HIDWORD(v22);
LABEL_33:
  if ( v23 || v24 )
  {
    v25 = *v4;
    v25->left += v23;
    v25->right += v23;
    v25->bottom += v24;
    v25->top += v24;
  }
  return v4;
}
