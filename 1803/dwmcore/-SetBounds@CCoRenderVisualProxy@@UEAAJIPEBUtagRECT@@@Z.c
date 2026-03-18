/*
 * XREFs of ?SetBounds@CCoRenderVisualProxy@@UEAAJIPEBUtagRECT@@@Z @ 0x18014B520
 * Callers:
 *     <none>
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     ?GetContentAsCoRenderContentNoRef@CVisual@@QEBA_NPEAPEAVCCoRenderContent@@@Z @ 0x18013CCD8 (-GetContentAsCoRenderContentNoRef@CVisual@@QEBA_NPEAPEAVCCoRenderContent@@@Z.c)
 *     ?SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014B8F0 (-SetDirty@CCoRenderVisualProxy@@AEAAJIPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetBounds@CCoRenderContent@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD76C (-SetBounds@CCoRenderContent@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 */

__int64 __fastcall CCoRenderVisualProxy::SetBounds(CCoRenderVisualProxy *this, unsigned int a2, struct tagRECT *a3)
{
  __int64 v3; // rsi
  int v5; // r14d
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // r11
  signed __int64 v12; // r9
  char *v13; // r10
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __m128i v18; // xmm0
  unsigned __int32 v19; // xmm0_4
  __m128i v20; // xmm0
  void *v21; // rax
  int v22; // ecx
  CVisual *v23; // rcx
  unsigned __int32 v24; // xmm0_4
  unsigned __int32 v25; // xmm1_4
  unsigned int v27; // [rsp+20h] [rbp-50h]
  struct CCoRenderContent *v28; // [rsp+30h] [rbp-40h] BYREF
  void *Buf1[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h]
  int v31; // [rsp+50h] [rbp-20h]
  __m128 v32; // [rsp+58h] [rbp-18h] BYREF

  v28 = (struct CCoRenderContent *)a3;
  v3 = a2;
  v30 = 0LL;
  v31 = 0;
  v5 = 0x7FFFFFFF;
  v6 = 0x80000000;
  v7 = 0x7FFFFFFF;
  v8 = 0x80000000;
  *(_OWORD *)Buf1 = 0LL;
  v9 = DynArrayImpl<0>::Grow((__int64)Buf1, 0x10u, a2, 1, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 487;
    goto LABEL_25;
  }
  v31 = v3;
  if ( (_DWORD)v3 )
  {
    v11 = v3;
    v12 = (char *)Buf1[0] - (char *)v28;
    v13 = (char *)v28 + 4;
    do
    {
      v14 = v5;
      v15 = v7;
      v16 = v6;
      v17 = v8;
      *(float *)&v13[v12 - 4] = (float)*((int *)v13 - 1);
      v5 = *((_DWORD *)v13 - 1);
      if ( v5 >= v14 )
        v5 = v14;
      *(float *)&v13[v12] = (float)*(int *)v13;
      v7 = *(_DWORD *)v13;
      v18 = _mm_cvtsi32_si128(*((_DWORD *)v13 + 1));
      v13 += 16;
      v19 = _mm_cvtepi32_ps(v18).m128_u32[0];
      if ( v7 >= v15 )
        v7 = v15;
      *(_DWORD *)&v13[v12 - 12] = v19;
      v6 = *((_DWORD *)v13 - 3);
      v20 = _mm_cvtsi32_si128(*((_DWORD *)v13 - 2));
      if ( v6 <= v16 )
        v6 = v16;
      *(_DWORD *)&v13[v12 - 8] = _mm_cvtepi32_ps(v20).m128_u32[0];
      v8 = *((_DWORD *)v13 - 2);
      if ( v8 <= v17 )
        v8 = v17;
      --v11;
    }
    while ( v11 );
  }
  else
  {
    v5 = 0;
    v7 = 0;
    v6 = 0;
    v8 = 0;
  }
  v9 = CCoRenderVisualProxy::SetDirty(this, (unsigned int)v3, Buf1[0]);
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 532;
    goto LABEL_25;
  }
  if ( (_DWORD)v3 == *((_DWORD *)this + 14) && !memcmp_0(Buf1[0], *((const void **)this + 4), 16 * v3) )
    goto LABEL_26;
  v9 = CCoRenderVisualProxy::SetDirty(this, *((unsigned int *)this + 14), *((_QWORD *)this + 4));
  v10 = v9;
  if ( v9 < 0 )
  {
    v27 = 539;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v27);
    goto LABEL_26;
  }
  v21 = (void *)*((_QWORD *)this + 4);
  *((void **)this + 4) = Buf1[0];
  v22 = *((_DWORD *)this + 13);
  Buf1[0] = v21;
  *((_DWORD *)this + 13) = HIDWORD(v30);
  LODWORD(v21) = *((_DWORD *)this + 14);
  *((_DWORD *)this + 14) = v3;
  HIDWORD(v30) = v22;
  v23 = (CVisual *)*((_QWORD *)this + 3);
  v31 = (int)v21;
  if ( CVisual::GetContentAsCoRenderContentNoRef(v23, &v28) )
  {
    v32.m128_f32[0] = (float)v5;
    v32.m128_f32[1] = (float)v7;
    v32.m128_f32[2] = (float)v6;
    v32.m128_f32[3] = (float)v8;
    v24 = _mm_shuffle_ps(v32, v32, 85).m128_u32[0];
    v25 = _mm_shuffle_ps(v32, v32, 170).m128_u32[0];
    v32.m128_i32[3] = _mm_shuffle_ps(v32, v32, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v32.m128_u64 + 4) = __PAIR64__(v25, v24);
    if ( (unsigned __int8)CCoRenderContent::SetBounds(v28, &v32) )
      CVisual::PropagateFlags(*((_QWORD *)this + 3), 1u, 0);
  }
  else
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x224u);
  }
LABEL_26:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)Buf1);
  return v10;
}
