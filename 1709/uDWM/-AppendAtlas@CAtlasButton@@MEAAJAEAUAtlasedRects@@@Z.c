/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800244E0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18000BB0C (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FC00 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct tagRECT *v2; // r8
  int v3; // edi
  int appended; // eax
  struct tagRECT *v7; // r8
  __int64 v8; // r14
  __m128 *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // r12d
  int v13; // r13d
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm11_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm10_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm14_4
  double v25; // xmm0_8
  int v26; // eax
  __m128 v27; // xmm6
  __m128i v28; // xmm7
  float v29; // xmm7_4
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  float v33; // xmm0_4
  __m128i v34; // xmm4
  bool v35; // zf
  char v36; // r14
  __m128 v37; // xmm6
  __m128 v38; // xmm6
  __m128 v39; // xmm6
  unsigned __int32 left; // xmm1_4
  unsigned __int32 top; // xmm2_4
  unsigned __int32 right; // xmm3_4
  unsigned __int32 bottom; // xmm4_4
  char v44; // r15
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // rax
  _QWORD *v48; // rcx
  unsigned int v49; // edx
  unsigned int v50; // eax
  LONG *v51; // r9
  unsigned int v52; // r8d
  struct tagRECT *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  RECT v62; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v63; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  __m128 v65; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-98h] BYREF

  v2 = (struct tagRECT *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x33Fu);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x230u);
    return (unsigned int)v3;
  }
  v7 = (struct tagRECT *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v3 = CAtlasedImage::AppendAtlasNineGrid((struct tagRECT *)this, (struct AtlasedRects *)a2, v7);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x234u);
      return (unsigned int)v3;
    }
  }
  v8 = *((_QWORD *)this + 18);
  if ( !v8 )
    return (unsigned int)v3;
  v9 = (__m128 *)*((_QWORD *)this + 9);
  v10 = 0LL;
  v11 = 0LL;
  v12 = *((_DWORD *)this + 4);
  v13 = *((_DWORD *)this + 5);
  v14 = (float)*((int *)this + 6);
  v15 = (float)*((int *)this + 7);
  if ( v9 )
  {
    v65 = v9[4];
    v11 = v65.m128_u64[1];
    v10 = v65.m128_u64[0];
  }
  v16 = (float)*(int *)(v8 + 24);
  if ( v16 <= 0.0 )
    return (unsigned int)v3;
  v17 = (float)*(int *)(v8 + 28);
  if ( v17 <= 0.0 )
    return (unsigned int)v3;
  v18 = (float)v12 + (float)(int)v10;
  v19 = v14 - (float)((int)v10 + HIDWORD(v10));
  v20 = v15 - (float)((int)v11 + HIDWORD(v11));
  v21 = (float)v13 + (float)(int)v11;
  if ( v19 <= 0.0 )
    v19 = 0.0;
  if ( v20 <= 0.0 )
    v20 = 0.0;
  v22 = fminf(1.0, fminf(v19 / v16, v20 / v17));
  v23 = v22 * v17;
  v24 = v22 * v16;
  v25 = floor_0((float)((float)(v19 - v24) * 0.5) + 0.5);
  v26 = *((_DWORD *)this + 38);
  v27 = (__m128)COERCE_UNSIGNED_INT((float)(int)v25);
  v27.m128_f32[0] = v27.m128_f32[0] + v18;
  if ( v26 )
  {
    if ( v26 == 2 )
    {
      v29 = (float)(v20 + v21) - (float)((float)*((int *)this + 39) + v23);
      goto LABEL_19;
    }
    v28 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v20 - v23) * 0.5) + 0.5));
  }
  else
  {
    v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 39));
  }
  v29 = _mm_cvtepi32_ps(v28).m128_f32[0] + v21;
LABEL_19:
  v30 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 80));
  v31 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 84));
  v32 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 88));
  v33 = v27.m128_f32[0] + v24;
  v34 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 92));
  v3 = 0;
  v35 = *((_DWORD *)this + 12) == 0x80000000;
  v36 = *((_BYTE *)this + 160);
  v37 = _mm_shuffle_ps(v27, v27, 225);
  v37.m128_f32[0] = v29;
  v38 = _mm_shuffle_ps(v37, v37, 198);
  v38.m128_f32[0] = v33;
  v39 = _mm_shuffle_ps(v38, v38, 39);
  v39.m128_f32[0] = v23 + v29;
  left = _mm_cvtepi32_ps(v30).m128_u32[0];
  top = _mm_cvtepi32_ps(v31).m128_u32[0];
  right = _mm_cvtepi32_ps(v32).m128_u32[0];
  bottom = _mm_cvtepi32_ps(v34).m128_u32[0];
  v65 = _mm_shuffle_ps(v39, v39, 57);
  v63 = v65;
  *(_QWORD *)&v62.left = __PAIR64__(top, left);
  *(_QWORD *)&v62.right = __PAIR64__(bottom, right);
  if ( v35
    && *((_DWORD *)this + 13) == 0x80000000
    && *((_DWORD *)this + 14) == 0x7FFFFFFF
    && *((_DWORD *)this + 15) == 0x7FFFFFFF )
  {
    v44 = 0;
    if ( !a2[12] )
      goto LABEL_24;
  }
  else
  {
    v44 = 1;
  }
  rc = (struct tagRECT)*((_OWORD *)this + 3);
  OffsetRect(&rc, v12, v13);
  v54 = (struct tagRECT *)a2[12];
  if ( v54 )
  {
    if ( v44 )
      IntersectRect(&rc, &rc, a2[12]);
    else
      rc = *v54;
  }
  ClipRectAndSimilarRect(&rc.left, v63.m128_f32, (float *)&v62.left);
  bottom = v62.bottom;
  right = v62.right;
  top = v62.top;
  left = v62.left;
LABEL_24:
  if ( (float)(v63.m128_f32[2] - v63.m128_f32[0]) <= 0.0 || (float)(v63.m128_f32[3] - v63.m128_f32[1]) <= 0.0 )
  {
LABEL_36:
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x278u);
    return (unsigned int)v3;
  }
  if ( v36 )
  {
    v55 = *((unsigned int *)a2 + 6);
    v56 = v64;
    v65.m128_u64[0] = __PAIR64__(top, right);
    v57 = v55 + 1;
    v65.m128_u64[1] = __PAIR64__(bottom, left);
    if ( (int)v55 + 1 >= (unsigned int)v55 )
      v56 = v55 + 1;
    v3 = v57 < (unsigned int)v55 ? 0x80070216 : 0;
    if ( v57 >= (unsigned int)v55 )
    {
      if ( v56 > *((_DWORD *)a2 + 5) )
      {
        v58 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 0x10u, 1, &v65);
        v3 = v58;
        if ( v58 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0xC0u);
      }
      else
      {
        (*a2)[v55] = (const RECT)v65;
        *((_DWORD *)a2 + 6) = v56;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x447u);
      goto LABEL_36;
    }
  }
  else
  {
    v45 = *((unsigned int *)a2 + 6);
    v46 = v45 + 1;
    if ( (int)v45 + 1 < (unsigned int)v45 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
      goto LABEL_64;
    }
    if ( v46 <= *((_DWORD *)a2 + 5) )
    {
      (*a2)[v45] = v62;
      *((_DWORD *)a2 + 6) = v46;
      goto LABEL_30;
    }
    v59 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 0x10u, 1, &v62);
    v3 = v59;
    if ( v59 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC0u);
    if ( v3 < 0 )
    {
LABEL_64:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x44Bu);
      goto LABEL_36;
    }
  }
LABEL_30:
  v47 = *((unsigned int *)a2 + 14);
  v48 = a2 + 4;
  v49 = v47 + 1;
  if ( (int)v47 + 1 < (unsigned int)v47 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
    goto LABEL_69;
  }
  if ( v49 > *((_DWORD *)a2 + 13) )
  {
    v60 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v48, 0x10u, 1, &v63);
    v3 = v60;
    if ( v60 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0xC0u);
    if ( v3 >= 0 )
      goto LABEL_33;
LABEL_69:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x44Eu);
    goto LABEL_36;
  }
  *(__m128 *)(*v48 + 16 * v47) = v63;
  *((_DWORD *)a2 + 14) = v49;
LABEL_33:
  v50 = *((_DWORD *)a2 + 22);
  v51 = (LONG *)((char *)this + 68);
  v52 = v50 + 1;
  if ( v50 + 1 < v50 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_74:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x44Fu);
    goto LABEL_36;
  }
  if ( v52 <= *((_DWORD *)a2 + 21) )
  {
    v3 = 0;
    *(&a2[8]->left + v50) = *v51;
    *((_DWORD *)a2 + 22) = v52;
    goto LABEL_36;
  }
  v61 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(a2 + 8), 4u, 1, v51);
  v3 = v61;
  if ( v61 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0xC0u);
  if ( v3 < 0 )
    goto LABEL_74;
  return (unsigned int)v3;
}
