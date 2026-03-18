/*
 * XREFs of ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x180129890
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800BDAEC (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     ?GetContentAsCoRenderContentNoRef@CVisual@@QEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x18011A950 (-GetContentAsCoRenderContentNoRef@CVisual@@QEBA_NPEAPEAVCCoRenderContent@@@Z.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180129C38 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetBounds(CCoRenderVisualProxy *this, unsigned int a2, struct tagRECT *a3)
{
  __int64 v3; // rsi
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  signed int v8; // eax
  unsigned int v9; // ebx
  const void *v10; // r14
  signed __int64 v11; // rax
  __int64 v12; // r8
  unsigned int *v13; // rcx
  signed int v14; // edx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  int v18; // ecx
  int v19; // eax
  CVisual *v20; // rcx
  unsigned __int32 v21; // xmm0_4
  unsigned __int32 v22; // xmm1_4
  __m128 *v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+30h] [rbp-50h]
  struct CCoRenderContent *v27; // [rsp+38h] [rbp-48h] BYREF
  void *Buf1[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  int v30; // [rsp+58h] [rbp-28h]
  __m128 v31; // [rsp+60h] [rbp-20h] BYREF

  v27 = (struct CCoRenderContent *)a3;
  v3 = a2;
  v29 = 0LL;
  v30 = 0;
  v5 = 0x7FFFFFFF;
  v6 = 0x80000000;
  v7 = 0x7FFFFFFF;
  *(_OWORD *)Buf1 = 0LL;
  v8 = DynArrayImpl<0>::Grow((__int64)Buf1, 0x10u, a2, 1, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v25 = 487;
    goto LABEL_26;
  }
  v10 = Buf1[0];
  v30 = v3;
  if ( (_DWORD)v3 )
  {
    v11 = (char *)Buf1[0] - (char *)v27;
    v12 = v3;
    v13 = (unsigned int *)((char *)v27 + 4);
    v14 = 0x80000000;
    do
    {
      *(float *)((char *)v13 + v11 - 4) = (float)(int)*(v13 - 1);
      v15 = _mm_cvtsi32_si128(*v13);
      if ( (int)*(v13 - 1) < v5 )
        v5 = *(v13 - 1);
      *(unsigned int *)((char *)v13 + v11) = _mm_cvtepi32_ps(v15).m128_u32[0];
      v16 = _mm_cvtsi32_si128(v13[1]);
      if ( (int)*v13 < v7 )
        v7 = *v13;
      *(unsigned int *)((char *)v13 + v11 + 4) = _mm_cvtepi32_ps(v16).m128_u32[0];
      v17 = _mm_cvtsi32_si128(v13[2]);
      if ( (int)v13[1] > v6 )
        v6 = v13[1];
      *(unsigned int *)((char *)v13 + v11 + 8) = _mm_cvtepi32_ps(v17).m128_u32[0];
      if ( (int)v13[2] > v14 )
        v14 = v13[2];
      v13 += 4;
      --v12;
    }
    while ( v12 );
    v26 = v14;
  }
  else
  {
    v5 = 0;
    v7 = 0;
    v6 = 0;
    v26 = 0;
  }
  v8 = CCoRenderVisualProxy::SetDirty(this, (unsigned int)v3, v10);
  v9 = v8;
  if ( v8 < 0 )
  {
    v25 = 532;
    goto LABEL_26;
  }
  if ( (_DWORD)v3 == *((_DWORD *)this + 14) && !memcmp_0(v10, *((const void **)this + 4), 16 * v3) )
    goto LABEL_27;
  v8 = CCoRenderVisualProxy::SetDirty(this, *((unsigned int *)this + 14), *((_QWORD *)this + 4));
  v9 = v8;
  if ( v8 < 0 )
  {
    v25 = 539;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v25);
    goto LABEL_27;
  }
  v18 = *((_DWORD *)this + 13);
  Buf1[0] = *((void **)this + 4);
  *((_DWORD *)this + 13) = HIDWORD(v29);
  v19 = *((_DWORD *)this + 14);
  *((_DWORD *)this + 14) = v3;
  *((_QWORD *)this + 4) = v10;
  HIDWORD(v29) = v18;
  v20 = (CVisual *)*((_QWORD *)this + 3);
  v30 = v19;
  if ( CVisual::GetContentAsCoRenderContentNoRef(v20, &v27) )
  {
    v31.m128_f32[0] = (float)v5;
    v31.m128_f32[1] = (float)v7;
    v31.m128_f32[2] = (float)v6;
    v31.m128_f32[3] = (float)v26;
    v21 = _mm_shuffle_ps(v31, v31, 85).m128_u32[0];
    v22 = _mm_shuffle_ps(v31, v31, 170).m128_u32[0];
    v31.m128_i32[3] = _mm_shuffle_ps(v31, v31, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v31.m128_u64 + 4) = __PAIR64__(v22, v21);
    if ( operator!=((float *)v27 + 18, v31.m128_f32) )
    {
      *v23 = v31;
      CVisual::PropagateFlags(*((_QWORD *)this + 3), 1u, 0);
    }
  }
  else
  {
    v9 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x224u);
  }
LABEL_27:
  DynArrayImpl<1>::~DynArrayImpl<1>(Buf1);
  return v9;
}
