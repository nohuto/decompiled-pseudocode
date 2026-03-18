/*
 * XREFs of ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00E2768
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     STR_DIV @ 0x1C00E2CC4 (STR_DIV.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall vInitStrDDAClip(struct _RECTL *a1, struct _RECTL *a2, struct _RECTL *a3, struct _RECTL *a4)
{
  LONG top; // r12d
  LONG left; // ecx
  LONG v8; // r9d
  struct _RECTL *v9; // r14
  LONG v10; // edx
  struct _RECTL *v11; // rdi
  int v12; // r9d
  LONG *v13; // r10
  int v14; // esi
  int v15; // r8d
  int v16; // ecx
  int v17; // r15d
  LONG v18; // r11d
  LONG v19; // edx
  int v20; // eax
  LONG v21; // ebx
  LONG right; // eax
  int v23; // r9d
  _DWORD *v24; // r10
  int v25; // esi
  int v26; // r8d
  int v27; // ecx
  int v28; // r14d
  LONG v29; // r11d
  LONG v30; // edx
  int v31; // edi
  int v32; // eax
  LONG v33; // ebx
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  int v39; // eax
  LONG bottom; // eax
  LONG v41; // eax
  struct _RECTL *v42; // [rsp+28h] [rbp-49h]
  int v43; // [rsp+30h] [rbp-41h] BYREF
  int v44; // [rsp+34h] [rbp-3Dh]
  LONG v45; // [rsp+40h] [rbp-31h]
  __m128i v46; // [rsp+48h] [rbp-29h] BYREF
  struct _RECTL v47; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v48[3]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v49[12]; // [rsp+74h] [rbp+3h] BYREF
  int v50; // [rsp+80h] [rbp+Fh]
  int v51; // [rsp+84h] [rbp+13h]

  top = a2->top;
  left = a2->left;
  v8 = a3->left;
  v9 = a2;
  v10 = a3->top;
  v11 = a3;
  v42 = a4;
  v45 = left;
  if ( __PAIR64__(top, left) )
  {
    v39 = a1->left - left;
    *(_QWORD *)&v49[4] = 0LL;
    v48[0] = v39;
    v48[1] = a1->top - top;
    v48[2] = a1->right - left;
    bottom = a1->bottom;
    a1 = (struct _RECTL *)v48;
    *(_QWORD *)v49 = (unsigned int)(bottom - top);
    v50 = v9->right - left;
    v41 = v9->bottom;
    v9 = (struct _RECTL *)&v49[4];
    v51 = v41 - top;
    a4 = v42;
  }
  if ( v8 || v10 )
  {
    v11 = (struct _RECTL *)&v46;
    v46 = *(__m128i *)a3;
    v37 = v46;
    v46.m128i_i32[2] -= v8;
    v46.m128i_i32[1] -= v10;
    v46.m128i_i32[3] -= v10;
    v46.m128i_i32[0] = _mm_cvtsi128_si32(v37) - v8;
    v47 = *v42;
    v38 = (__m128i)v47;
    v47.right -= v8;
    v47.top -= v10;
    v47.bottom -= v10;
    v47.left = _mm_cvtsi128_si32(v38) - v8;
    a4 = &v47;
    v42 = &v47;
  }
  ERECTL::operator*=(a4, v11);
  STR_DIV(&v43, (unsigned int)(v11->right - v11->left), (unsigned int)v9->right);
  v14 = v43;
  v15 = v43;
  v16 = v44 + ((v12 - 1) >> 1);
  if ( v16 >= v12 )
  {
    v15 = v43 + 1;
    v16 -= v12;
  }
  v17 = 0;
  *v13 = -1;
  v18 = 0;
  v13[2] = -1;
  v19 = 0;
  if ( a1->right > 0 )
  {
    do
    {
      v16 += v44;
      v20 = v15 - v17;
      v21 = v18;
      v17 = v15;
      v18 += v20;
      v15 += v14;
      if ( v16 >= v12 )
      {
        ++v15;
        v16 -= v12;
      }
      if ( *v13 == -1 && v42->left <= v18 && v42->left >= v21 )
        *v13 = v19;
      right = v42->right;
      if ( right <= v18 && right >= v21 )
        v13[2] = v19;
      ++v19;
    }
    while ( v19 < a1->right );
    if ( *v13 != -1 )
    {
      if ( v13[2] == -1 )
        v13[2] = v19;
      goto LABEL_16;
    }
  }
  *v13 = 0;
  if ( v13[2] != -1 )
  {
LABEL_16:
    ++v13[2];
    goto LABEL_17;
  }
  v13[2] = 0;
LABEL_17:
  STR_DIV(&v43, (unsigned int)(v11->bottom - v11->top), (unsigned int)v9->bottom);
  v25 = v43;
  v26 = v43;
  v27 = v44 + ((v23 - 1) >> 1);
  if ( v27 >= v23 )
  {
    v26 = v43 + 1;
    v27 -= v23;
  }
  v24[1] = -1;
  v28 = 0;
  v24[3] = -1;
  v29 = 0;
  v30 = 0;
  if ( a1->bottom > 0 )
  {
    v31 = -1;
    do
    {
      v27 += v44;
      v32 = v26 - v28;
      v33 = v29;
      v28 = v26;
      v29 += v32;
      v26 += v25;
      if ( v27 >= v23 )
      {
        ++v26;
        v27 -= v23;
      }
      if ( v31 == -1 )
      {
        v36 = v42->top;
        if ( v36 >= v33 && v36 <= v29 )
        {
          v31 = v30;
          v24[1] = v30;
        }
      }
      v34 = v42->bottom;
      if ( v34 <= v29 && v34 >= v33 )
        v24[3] = v30;
      ++v30;
    }
    while ( v30 < a1->bottom );
  }
  if ( v24[1] == -1 )
  {
    v24[1] = 0;
    if ( v24[3] == -1 )
    {
      v24[3] = 0;
      goto LABEL_30;
    }
  }
  else if ( v24[3] == -1 )
  {
    v24[3] = v30;
  }
  ++v24[3];
LABEL_30:
  v35 = v45;
  *v24 += v45;
  v24[2] += v35;
  v24[1] += top;
  v24[3] += top;
}
