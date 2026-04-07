/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AEB0
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BFA0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18000DBA4 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B790 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  int v3; // edi
  int appended; // eax
  struct CBitmapSource *v7; // r8
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
  float v18; // xmm10_4
  float v19; // xmm2_4
  float v20; // xmm7_4
  float v21; // xmm9_4
  float v22; // xmm12_4
  float v23; // xmm11_4
  float v24; // xmm12_4
  double v25; // xmm0_8
  int v26; // eax
  __m128 v27; // xmm6
  __m128i v28; // xmm7
  float v29; // xmm7_4
  __m128i v30; // xmm1
  float v31; // xmm12_4
  __m128i v32; // xmm2
  __m128i v33; // xmm3
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
  int v45; // r15d
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rax
  _QWORD *v49; // rcx
  unsigned int v50; // edx
  unsigned int v51; // eax
  LONG *v52; // r9
  unsigned int v53; // r8d
  struct tagRECT *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // eax
  int v59; // eax
  int v60; // r14d
  int v61; // eax
  int v62; // r14d
  int v63; // eax
  int v64; // eax
  RECT v65; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v66; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-B0h]
  __m128 v68; // [rsp+58h] [rbp-A8h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-90h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x33Fu);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x230u);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    v3 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x234u);
      return (unsigned int)v3;
    }
  }
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    v9 = (__m128 *)*((_QWORD *)this + 9);
    v10 = 0LL;
    v11 = 0LL;
    v12 = *((_DWORD *)this + 4);
    v13 = *((_DWORD *)this + 5);
    v14 = (float)*((int *)this + 6);
    v15 = (float)*((int *)this + 7);
    if ( v9 )
    {
      v68 = v9[4];
      v11 = v68.m128_u64[1];
      v10 = v68.m128_u64[0];
    }
    v16 = (float)*(int *)(v8 + 24);
    v17 = (float)*(int *)(v8 + 28);
    if ( v16 > 0.0 && v17 > 0.0 )
    {
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
      v31 = v24 + v27.m128_f32[0];
      v32 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 84));
      v33 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 88));
      v34 = _mm_cvtsi32_si128(*(_DWORD *)(v8 + 92));
      v3 = 0;
      v35 = *((_DWORD *)this + 12) == 0x80000000;
      v36 = *((_BYTE *)this + 160);
      v37 = _mm_shuffle_ps(v27, v27, 225);
      v37.m128_f32[0] = v29;
      v38 = _mm_shuffle_ps(v37, v37, 198);
      v38.m128_f32[0] = v31;
      v39 = _mm_shuffle_ps(v38, v38, 39);
      v39.m128_f32[0] = v29 + v23;
      left = _mm_cvtepi32_ps(v30).m128_u32[0];
      top = _mm_cvtepi32_ps(v32).m128_u32[0];
      right = _mm_cvtepi32_ps(v33).m128_u32[0];
      bottom = _mm_cvtepi32_ps(v34).m128_u32[0];
      v68 = _mm_shuffle_ps(v39, v39, 57);
      v66 = v68;
      *(_QWORD *)&v65.left = __PAIR64__(top, left);
      *(_QWORD *)&v65.right = __PAIR64__(bottom, right);
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
      v55 = (struct tagRECT *)a2[12];
      if ( v55 )
      {
        if ( v44 )
          IntersectRect(&rc, &rc, a2[12]);
        else
          rc = *v55;
      }
      ClipRectAndSimilarRect(&rc.left, v66.m128_f32, (float *)&v65.left);
      bottom = v65.bottom;
      right = v65.right;
      top = v65.top;
      left = v65.left;
LABEL_24:
      if ( (float)(v66.m128_f32[2] - v66.m128_f32[0]) <= 0.0 || (float)(v66.m128_f32[3] - v66.m128_f32[1]) <= 0.0 )
        goto LABEL_36;
      v45 = -2147024362;
      if ( v36 )
      {
        v56 = *((unsigned int *)a2 + 6);
        v57 = v67;
        v68.m128_u64[0] = __PAIR64__(top, right);
        v58 = v56 + 1;
        v68.m128_u64[1] = __PAIR64__(bottom, left);
        if ( (int)v56 + 1 >= (unsigned int)v56 )
          v57 = v56 + 1;
        v3 = v58 < (unsigned int)v56 ? 0x80070216 : 0;
        if ( v58 >= (unsigned int)v56 )
        {
          if ( v57 > *((_DWORD *)a2 + 5) )
          {
            v59 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v68);
            v3 = v59;
            if ( v59 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xC0u);
          }
          else
          {
            (*a2)[v56] = (const RECT)v68;
            *((_DWORD *)a2 + 6) = v57;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x447u);
          goto LABEL_36;
        }
      }
      else
      {
        v46 = *((unsigned int *)a2 + 6);
        v47 = v46 + 1;
        if ( (int)v46 + 1 < (unsigned int)v46 )
        {
          v60 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v3 = -2147024362;
          goto LABEL_64;
        }
        if ( v47 <= *((_DWORD *)a2 + 5) )
        {
          (*a2)[v46] = v65;
          *((_DWORD *)a2 + 6) = v47;
          goto LABEL_30;
        }
        v61 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v65);
        v60 = v61;
        if ( v61 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0xC0u);
        v3 = v60;
        if ( v60 < 0 )
        {
LABEL_64:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x44Bu);
          goto LABEL_36;
        }
      }
LABEL_30:
      v48 = *((unsigned int *)a2 + 14);
      v49 = a2 + 4;
      v50 = v48 + 1;
      if ( (int)v48 + 1 < (unsigned int)v48 )
      {
        v62 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v3 = -2147024362;
      }
      else
      {
        if ( v50 <= *((_DWORD *)a2 + 13) )
        {
          *(__m128 *)(*v49 + 16 * v48) = v66;
          *((_DWORD *)a2 + 14) = v50;
LABEL_33:
          v51 = *((_DWORD *)a2 + 22);
          v52 = (LONG *)((char *)this + 68);
          v53 = v51 + 1;
          if ( v51 + 1 < v51 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
            v3 = -2147024362;
          }
          else
          {
            v3 = 0;
            if ( v53 <= *((_DWORD *)a2 + 21) )
            {
              *(&a2[8]->left + v51) = *v52;
              *((_DWORD *)a2 + 22) = v53;
              goto LABEL_36;
            }
            v64 = DynArrayImpl<0>::AddMultipleAndSet(a2 + 8, 4LL, 1LL, v52);
            v45 = v64;
            if ( v64 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0xC0u);
            v3 = v45;
            if ( v45 >= 0 )
              goto LABEL_36;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x44Fu);
LABEL_36:
          if ( v3 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x278u);
          return (unsigned int)v3;
        }
        v63 = DynArrayImpl<0>::AddMultipleAndSet(v49, 16LL, 1LL, &v66);
        v62 = v63;
        if ( v63 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0xC0u);
        v3 = v62;
        if ( v62 >= 0 )
          goto LABEL_33;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x44Eu);
      goto LABEL_36;
    }
  }
  return (unsigned int)v3;
}
