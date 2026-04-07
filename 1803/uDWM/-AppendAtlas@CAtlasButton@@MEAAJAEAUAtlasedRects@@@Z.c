/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B90
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180005684 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FE50 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  int v3; // edi
  int appended; // eax
  struct CBitmapSource *v7; // r8
  int *v8; // r14
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
  float v30; // xmm0_4
  float v31; // xmm2_4
  bool v32; // zf
  float v33; // xmm3_4
  __m128 v34; // xmm6
  float v35; // xmm4_4
  __m128 v36; // xmm6
  float v37; // xmm5_4
  char v38; // r14
  __m128 v39; // xmm6
  char v40; // r15
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  _QWORD *v44; // rcx
  unsigned int v45; // edx
  unsigned int v46; // eax
  LONG *v47; // r9
  unsigned int v48; // r8d
  struct tagRECT *v50; // rax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  RECT v55; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v56; // [rsp+40h] [rbp-C0h] BYREF
  __m128 v57; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x26Cu);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x230u);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v3 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x234u);
      return (unsigned int)v3;
    }
  }
  v8 = (int *)*((_QWORD *)this + 18);
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
    v57 = v9[4];
    v11 = v57.m128_u64[1];
    v10 = v57.m128_u64[0];
  }
  v16 = (float)v8[6];
  v17 = (float)v8[7];
  if ( v16 <= 0.0 || v17 <= 0.0 )
    return (unsigned int)v3;
  v18 = (float)(int)v10 + (float)v12;
  v19 = v14 - (float)((int)v10 + HIDWORD(v10));
  v20 = v15 - (float)((int)v11 + HIDWORD(v11));
  v21 = (float)(int)v11 + (float)v13;
  if ( v19 <= 0.0 )
    v19 = 0.0;
  if ( v20 <= 0.0 )
    v20 = 0.0;
  v22 = fminf(1.0, fminf(v19 / v16, v20 / v17));
  v23 = v22 * v17;
  v24 = v22 * v16;
  v25 = floor_0((float)((float)(v19 - v24) * 0.5) + 0.5);
  v27 = 0LL;
  v26 = *((_DWORD *)this + 38);
  v27.m128_f32[0] = (float)(int)v25 + v18;
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
  v30 = v27.m128_f32[0] + v24;
  v31 = (float)v8[20];
  v3 = 0;
  v32 = *((_DWORD *)this + 12) == 0x80000000;
  v33 = (float)v8[21];
  v34 = _mm_shuffle_ps(v27, v27, 225);
  v35 = (float)v8[22];
  v34.m128_f32[0] = v29;
  *(float *)&v55.left = v31;
  v36 = _mm_shuffle_ps(v34, v34, 198);
  v37 = (float)v8[23];
  v38 = *((_BYTE *)this + 160);
  v36.m128_f32[0] = v30;
  *(_QWORD *)&v55.top = __PAIR64__(LODWORD(v35), LODWORD(v33));
  v39 = _mm_shuffle_ps(v36, v36, 39);
  v39.m128_f32[0] = v29 + v23;
  v57 = _mm_shuffle_ps(v39, v39, 57);
  v56 = v57;
  *(float *)&v55.bottom = v37;
  if ( v32
    && *((_DWORD *)this + 13) == 0x80000000
    && *((_DWORD *)this + 14) == 0x7FFFFFFF
    && *((_DWORD *)this + 15) == 0x7FFFFFFF )
  {
    v40 = 0;
    if ( !a2[12] )
      goto LABEL_24;
  }
  else
  {
    v40 = 1;
  }
  rc = (struct tagRECT)*((_OWORD *)this + 3);
  OffsetRect(&rc, v12, v13);
  v50 = (struct tagRECT *)a2[12];
  if ( v50 )
  {
    if ( v40 )
      IntersectRect(&rc, &rc, a2[12]);
    else
      rc = *v50;
  }
  ClipRectAndSimilarRect(&rc.left, v56.m128_f32, (float *)&v55.left);
  v37 = *(float *)&v55.bottom;
  v35 = *(float *)&v55.right;
  v33 = *(float *)&v55.top;
  v31 = *(float *)&v55.left;
LABEL_24:
  if ( (float)(v56.m128_f32[2] - v56.m128_f32[0]) <= 0.0 || (float)(v56.m128_f32[3] - v56.m128_f32[1]) <= 0.0 )
  {
LABEL_36:
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x278u);
    return (unsigned int)v3;
  }
  v41 = *((unsigned int *)a2 + 6);
  v42 = v41 + 1;
  if ( v38 )
  {
    v57.m128_u64[0] = __PAIR64__(LODWORD(v33), LODWORD(v35));
    v57.m128_u64[1] = __PAIR64__(LODWORD(v37), LODWORD(v31));
    v3 = v42 < (unsigned int)v41 ? 0x80070216 : 0;
    if ( v42 >= (unsigned int)v41 )
    {
      if ( v42 > *((_DWORD *)a2 + 5) )
      {
        v51 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v57);
        v3 = v51;
        if ( v51 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xC0u);
      }
      else
      {
        (*a2)[v41] = (const RECT)v57;
        *((_DWORD *)a2 + 6) = v42;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x369u);
      goto LABEL_36;
    }
  }
  else
  {
    if ( v42 < (unsigned int)v41 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v3 = -2147024362;
      goto LABEL_62;
    }
    if ( v42 <= *((_DWORD *)a2 + 5) )
    {
      (*a2)[v41] = v55;
      *((_DWORD *)a2 + 6) = v42;
      goto LABEL_30;
    }
    v52 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v55);
    v3 = v52;
    if ( v52 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xC0u);
    if ( v3 < 0 )
    {
LABEL_62:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x36Du);
      goto LABEL_36;
    }
  }
LABEL_30:
  v43 = *((unsigned int *)a2 + 14);
  v44 = a2 + 4;
  v45 = v43 + 1;
  if ( (int)v43 + 1 < (unsigned int)v43 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
    goto LABEL_67;
  }
  if ( v45 > *((_DWORD *)a2 + 13) )
  {
    v53 = DynArrayImpl<0>::AddMultipleAndSet(v44, 16LL, 1LL, &v56);
    v3 = v53;
    if ( v53 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xC0u);
    if ( v3 >= 0 )
      goto LABEL_33;
LABEL_67:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x370u);
    goto LABEL_36;
  }
  *(__m128 *)(*v44 + 16 * v43) = v56;
  *((_DWORD *)a2 + 14) = v45;
LABEL_33:
  v46 = *((_DWORD *)a2 + 22);
  v47 = (LONG *)((char *)this + 68);
  v48 = v46 + 1;
  if ( v46 + 1 < v46 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v3 = -2147024362;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x371u);
    goto LABEL_36;
  }
  if ( v48 <= *((_DWORD *)a2 + 21) )
  {
    v3 = 0;
    *(&a2[8]->left + v46) = *v47;
    *((_DWORD *)a2 + 22) = v48;
    goto LABEL_36;
  }
  v54 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v47);
  v3 = v54;
  if ( v54 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xC0u);
  if ( v3 < 0 )
    goto LABEL_72;
  return (unsigned int)v3;
}
