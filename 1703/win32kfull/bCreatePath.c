/*
 * XREFs of bCreatePath @ 0x1C0237C24
 * Callers:
 *     vtfdQueryFontData @ 0x1C0238470 (vtfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bCreatePath(char *a1, char *a2, __int64 a3, PATHOBJ *a4, int a5)
{
  __int64 v5; // r15
  char *v8; // rdi
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  float v12; // xmm6_4
  int v13; // r9d
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm7_4
  int v17; // r10d
  __int64 v18; // rbx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // r14d
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  char *v32; // rdi
  int *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  __m128i v37; // xmm0
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r11
  int v41; // r10d
  unsigned __int64 v42; // rdx
  float v43; // xmm3_4
  float v44; // xmm0_4
  int v45; // r9d
  int v46; // r8d
  __int64 v47; // rcx
  FIX *p_y; // rax
  int v49; // eax
  char *v50; // rdi
  int v51; // eax
  char *v52; // rdi
  unsigned int v54; // [rsp+28h] [rbp-A1h]
  int v55; // [rsp+28h] [rbp-A1h]
  int v56; // [rsp+28h] [rbp-A1h]
  int v57; // [rsp+2Ch] [rbp-9Dh]
  int v59; // [rsp+38h] [rbp-91h]
  int v60; // [rsp+3Ch] [rbp-8Dh]
  int v61; // [rsp+40h] [rbp-89h]
  int v62; // [rsp+44h] [rbp-85h]
  int v63; // [rsp+48h] [rbp-81h]
  int v64; // [rsp+4Ch] [rbp-7Dh]
  __int64 v65; // [rsp+58h] [rbp-71h]
  int v66; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v67[9]; // [rsp+64h] [rbp-65h]
  POINTFIX ptfx; // [rsp+88h] [rbp-41h] BYREF
  POINTFIX pptfx; // [rsp+90h] [rbp-39h] BYREF

  LODWORD(v5) = 0;
  v8 = a1;
  v9 = 1;
  v54 = 1;
  if ( a1 == a2 )
    return v9;
  v10 = *(_DWORD *)(a3 + 120);
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(float *)(a3 + 16);
  v13 = v10 & 2;
  v14 = *(float *)(a3 + 20);
  v15 = *(float *)(a3 + 24);
  v16 = *(float *)(a3 + 28);
  v17 = *(__int16 *)(v11 + 62);
  v18 = *(_QWORD *)(a3 + 80);
  v61 = v10 & 1;
  v19 = v10 & 4;
  v64 = (__int16)v17;
  v63 = v13;
  v62 = v19;
  v20 = (v10 & 0xFF0) - 16;
  if ( !v20 )
  {
    v28 = a5 - 16;
    goto LABEL_20;
  }
  v21 = v20 - 16;
  if ( !v21 )
  {
    v28 = a5 - 16;
    v27 = *(_DWORD *)(a3 + 32) - 16;
    goto LABEL_21;
  }
  v22 = v21 - 32;
  if ( !v22 )
  {
    v28 = -16;
    v27 = *(_DWORD *)(a3 + 32) - 16;
    goto LABEL_21;
  }
  v23 = v22 - 64;
  if ( !v23 )
  {
    v28 = -16;
LABEL_20:
    v27 = -16 - *(_DWORD *)(a3 + 36);
    goto LABEL_21;
  }
  v24 = v23 - 128;
  if ( !v24 )
  {
    v28 = -16 - *(_DWORD *)(a3 + 36);
    goto LABEL_15;
  }
  v25 = v24 - 256;
  if ( !v25 )
  {
    v27 = -16;
    v28 = -16 - *(_DWORD *)(a3 + 36);
    goto LABEL_21;
  }
  v26 = v25 - 512;
  if ( !v26 )
  {
    v28 = *(_DWORD *)(a3 + 32) - 16;
LABEL_15:
    v27 = a5 - 16;
    goto LABEL_21;
  }
  if ( v26 == 1024 )
  {
    v27 = -16;
    v28 = *(_DWORD *)(a3 + 32) - 16;
  }
  else
  {
    v27 = v60;
    v28 = v59;
  }
LABEL_21:
  v29 = *(__int16 *)(v11 + 60);
  v66 = 0;
  v67[0] = -v29;
  if ( v8 <= a2 )
  {
    while ( v8 != a2 && *v8 != (char)0x80 )
    {
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_32;
      v30 = *v8;
      if ( (_DWORD)v5 )
      {
        v31 = (unsigned int)(v5 - 1);
        v32 = v8 + 1;
        v67[2 * (unsigned int)v5 - 1] = v67[2 * v31 - 1] + v30;
        if ( v32 == a2 )
          return 0LL;
        v67[2 * (unsigned int)v5] = v67[2 * v31] + *v32;
      }
      else
      {
        v32 = v8 + 1;
        v66 = v30;
        if ( v32 == a2 )
          return 0LL;
        v67[0] = *v32;
      }
      LODWORD(v5) = v5 + 1;
      v8 = v32 + 1;
LABEL_63:
      if ( v8 > a2 )
        return v54;
      v19 = v62;
      v13 = v63;
      v17 = v64;
    }
    if ( (unsigned int)v5 > 1 )
    {
LABEL_32:
      v5 = (unsigned int)(v5 - 1);
      v65 = (unsigned int)v5;
      v57 = v67[2 * v5 - 1];
      if ( v13 )
      {
        v33 = &v66;
        v34 = (unsigned int)(v5 + 1);
        do
        {
          *v33 += (v17 - v33[1]) >> 1;
          v33 += 2;
          --v34;
        }
        while ( v34 );
      }
      if ( v19 )
      {
        v35 = 0LL;
        v36 = (unsigned int)(v5 + 1);
        do
        {
          v37 = _mm_cvtsi32_si128(v67[v35 - 1]);
          v35 += 2LL;
          v38 = (int)(float)(_mm_cvtepi32_ps(v37).m128_f32[0] * v12);
          v39 = (int)(float)((float)*(int *)((char *)&v65 + v35 * 4 + 4) * v16);
          if ( v39 > v27 )
            v39 = v27;
          v67[v35 + 8] = v39;
          if ( v38 > v28 )
            v38 = v28;
          v67[v35 + 7] = v38;
          --v36;
        }
        while ( v36 );
      }
      else
      {
        v40 = (unsigned int)(v5 + 1);
        v41 = *(_DWORD *)(a3 + 120) & 0xFF0;
        v42 = 0LL;
        do
        {
          v43 = (float)v67[v42 / 4 - 1];
          v44 = (float)(int)v67[v42 / 4];
          v45 = (int)(float)(v43 * v12) + (int)(float)(v44 * v15);
          *(FIX *)((char *)&ptfx.x + v42) = v45;
          v46 = (int)(float)(v43 * v14) + (int)(float)(v44 * v16);
          *(FIX *)((char *)&ptfx.y + v42) = v46;
          if ( v41 )
          {
            if ( v46 > v27 )
              v46 = v27;
            *(FIX *)((char *)&ptfx.y + v42) = v46;
            if ( v45 > v28 )
              v45 = v28;
            *(FIX *)((char *)&ptfx.x + v42) = v45;
          }
          v42 += 8LL;
          --v40;
        }
        while ( v40 );
      }
      v55 = PATHOBJ_bMoveTo(a4, ptfx) & v54;
      v54 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v55;
      if ( v61 )
      {
        v47 = (unsigned int)(v5 + 1);
        p_y = &ptfx.y;
        do
        {
          *(p_y - 1) += v18;
          *p_y += HIDWORD(v18);
          p_y += 2;
          --v47;
        }
        while ( v47 );
        v56 = PATHOBJ_bMoveTo(a4, ptfx) & v54;
        v54 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v56;
      }
      if ( v8 != a2 && *v8 != (char)0x80 )
      {
        v66 = v57;
        v49 = v67[2 * v65];
LABEL_62:
        LODWORD(v5) = 1;
        v67[0] = v49;
        goto LABEL_63;
      }
      v67[2 * v5 - 1] = v57;
    }
    v50 = v8 + 1;
    if ( v50 == a2 )
      return 0LL;
    v51 = *v50;
    v52 = v50 + 1;
    v66 = v67[2 * (unsigned int)v5 - 1] + v51;
    if ( v52 == a2 )
      return 0LL;
    v49 = v67[2 * (unsigned int)v5] + *v52;
    v8 = v52 + 1;
    goto LABEL_62;
  }
  return v9;
}
