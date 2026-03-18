/*
 * XREFs of bCreatePath @ 0x1C0239184
 * Callers:
 *     vtfdQueryFontData @ 0x1C02399E0 (vtfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall bCreatePath(char *a1, char *a2, __int64 a3, PATHOBJ *a4, int a5)
{
  __int64 v5; // r15
  char *v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm7_4
  __int64 v15; // rbx
  int v16; // r11d
  int v17; // r10d
  int v18; // esi
  int v19; // r14d
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  char *v26; // rdi
  int *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r11
  int v34; // r10d
  unsigned __int64 v35; // rdx
  float v36; // xmm3_4
  float v37; // xmm0_4
  int v38; // r9d
  int v39; // r8d
  __int64 v40; // rcx
  FIX *p_y; // rax
  int v42; // eax
  char *v43; // rdi
  int v44; // eax
  char *v45; // rdi
  unsigned int v47; // [rsp+28h] [rbp-A1h]
  int v48; // [rsp+28h] [rbp-A1h]
  int v49; // [rsp+28h] [rbp-A1h]
  int v50; // [rsp+2Ch] [rbp-9Dh]
  int v51; // [rsp+30h] [rbp-99h]
  int v52; // [rsp+34h] [rbp-95h]
  int v54; // [rsp+40h] [rbp-89h]
  int v55; // [rsp+44h] [rbp-85h]
  __int64 v56; // [rsp+48h] [rbp-81h]
  __int64 v57; // [rsp+58h] [rbp-71h]
  int v58; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v59[9]; // [rsp+64h] [rbp-65h]
  POINTFIX ptfx; // [rsp+88h] [rbp-41h] BYREF
  POINTFIX pptfx; // [rsp+90h] [rbp-39h] BYREF

  LODWORD(v5) = 0;
  v8 = a1;
  v9 = 1;
  v47 = 1;
  if ( a1 == a2 )
    return v9;
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(float *)(a3 + 16);
  v12 = *(float *)(a3 + 20);
  v13 = *(float *)(a3 + 24);
  v14 = *(float *)(a3 + 28);
  v15 = *(_QWORD *)(a3 + 80);
  v54 = *(__int16 *)(v10 + 62);
  v55 = *(_DWORD *)(a3 + 120) & 1;
  v16 = *(_DWORD *)(a3 + 120) & 2;
  v17 = *(_DWORD *)(a3 + 120) & 4;
  v50 = v16;
  v52 = v17;
  switch ( *(_DWORD *)(a3 + 120) & 0xFF0 )
  {
    case 16:
      v19 = a5 - 16;
      goto LABEL_20;
    case 32:
      v19 = a5 - 16;
      v18 = *(_DWORD *)(a3 + 32) - 16;
      break;
    case 64:
      v19 = -16;
      v18 = *(_DWORD *)(a3 + 32) - 16;
      break;
    case 128:
      v19 = -16;
LABEL_20:
      v18 = -16 - *(_DWORD *)(a3 + 36);
      break;
    case 256:
      v19 = -16 - *(_DWORD *)(a3 + 36);
      goto LABEL_15;
    case 512:
      v18 = -16;
      v19 = -16 - *(_DWORD *)(a3 + 36);
      break;
    case 1024:
      v19 = *(_DWORD *)(a3 + 32) - 16;
LABEL_15:
      v18 = a5 - 16;
      break;
    case 2048:
      v18 = -16;
      v19 = *(_DWORD *)(a3 + 32) - 16;
      break;
    default:
      v19 = *(_DWORD *)(a3 + 120) & 2;
      v18 = v19;
      break;
  }
  v20 = *(__int16 *)(v10 + 60);
  v58 = 0;
  v59[0] = -v20;
  if ( v8 <= a2 )
  {
    while ( 1 )
    {
      v21 = (unsigned int)v5;
      v22 = (unsigned int)v5;
      v23 = (unsigned int)v5;
      if ( v8 == a2 || *v8 == (char)0x80 )
        break;
      if ( (unsigned int)v5 >= 5 )
        goto LABEL_32;
      v24 = *v8;
      if ( (_DWORD)v5 )
      {
        v25 = (unsigned int)(v5 - 1);
        v26 = v8 + 1;
        v59[2 * (unsigned int)v5 - 1] = v59[2 * v25 - 1] + v24;
        if ( v26 == a2 )
          return 0LL;
        v59[2 * (unsigned int)v5] = v59[2 * v25] + *v26;
      }
      else
      {
        v26 = v8 + 1;
        v58 = v24;
        if ( v26 == a2 )
          return 0LL;
        v59[0] = *v26;
      }
      LODWORD(v5) = v5 + 1;
      v8 = v26 + 1;
LABEL_64:
      if ( v8 > a2 )
        return v47;
      v17 = v52;
      v16 = v50;
    }
    if ( (unsigned int)v5 > 1 )
    {
LABEL_32:
      v5 = (unsigned int)(v5 - 1);
      v57 = (unsigned int)v5;
      v51 = v59[2 * v5 - 1];
      if ( v16 )
      {
        v27 = &v58;
        v28 = v23;
        do
        {
          *v27 += (v54 - v27[1]) >> 1;
          v27 += 2;
          --v28;
        }
        while ( v28 );
        v17 = v52;
      }
      if ( v17 )
      {
        v29 = 0LL;
        v56 = v22;
        do
        {
          v30 = _mm_cvtsi32_si128(v59[v29 - 1]);
          v29 += 2LL;
          v31 = (int)(float)(_mm_cvtepi32_ps(v30).m128_f32[0] * v11);
          v32 = (int)(float)((float)*(int *)((char *)&v57 + v29 * 4 + 4) * v14);
          if ( v32 > v18 )
            v32 = v18;
          v59[v29 + 8] = v32;
          if ( v31 > v19 )
            v31 = v19;
          v59[v29 + 7] = v31;
          --v22;
        }
        while ( v22 );
      }
      else
      {
        v33 = v21;
        v34 = *(_DWORD *)(a3 + 120) & 0xFF0;
        v56 = v21;
        v35 = 0LL;
        do
        {
          v36 = (float)v59[v35 / 4 - 1];
          v37 = (float)(int)v59[v35 / 4];
          v38 = (int)(float)(v36 * v11) + (int)(float)(v37 * v13);
          *(FIX *)((char *)&ptfx.x + v35) = v38;
          v39 = (int)(float)(v36 * v12) + (int)(float)(v37 * v14);
          *(FIX *)((char *)&ptfx.y + v35) = v39;
          if ( v34 )
          {
            if ( v39 > v18 )
              v39 = v18;
            *(FIX *)((char *)&ptfx.y + v35) = v39;
            if ( v38 > v19 )
              v38 = v19;
            *(FIX *)((char *)&ptfx.x + v35) = v38;
          }
          v35 += 8LL;
          --v33;
        }
        while ( v33 );
      }
      v48 = PATHOBJ_bMoveTo(a4, ptfx) & v47;
      v47 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v48;
      if ( v55 )
      {
        v40 = v56;
        p_y = &ptfx.y;
        do
        {
          *(p_y - 1) += v15;
          *p_y += HIDWORD(v15);
          p_y += 2;
          --v40;
        }
        while ( v40 );
        v49 = PATHOBJ_bMoveTo(a4, ptfx) & v47;
        v47 = PATHOBJ_bPolyLineTo(a4, &pptfx, v5) & v49;
      }
      if ( v8 != a2 && *v8 != (char)0x80 )
      {
        v58 = v51;
        v42 = v59[2 * v57];
LABEL_63:
        LODWORD(v5) = 1;
        v59[0] = v42;
        goto LABEL_64;
      }
      v59[2 * v5 - 1] = v51;
    }
    v43 = v8 + 1;
    if ( v43 == a2 )
      return 0LL;
    v44 = *v43;
    v45 = v43 + 1;
    v58 = v59[2 * (unsigned int)v5 - 1] + v44;
    if ( v45 == a2 )
      return 0LL;
    v42 = v59[2 * (unsigned int)v5] + *v45;
    v8 = v45 + 1;
    goto LABEL_63;
  }
  return v9;
}
