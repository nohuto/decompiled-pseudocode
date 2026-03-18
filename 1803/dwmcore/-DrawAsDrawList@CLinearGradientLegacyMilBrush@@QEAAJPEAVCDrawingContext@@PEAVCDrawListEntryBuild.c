/*
 * XREFs of ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B309C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18008112C (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800C38EC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B2F0C (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B34C4 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::DrawAsDrawList(
        CLinearGradientLegacyMilBrush *this,
        struct CDrawingContext *a2,
        CMILRefCountBase **a3,
        char a4,
        const struct MilRectF *a5)
{
  float v6; // xmm0_4
  float v8; // xmm1_4
  int GradientColor; // eax
  int v10; // ebx
  D3DVALUE v11; // xmm0_4
  D3DVALUE v12; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  int v15; // eax
  __int64 v16; // rdi
  CResource *v17; // rcx
  const __m128i *v18; // rbx
  CResource *v19; // rcx
  __m128 v20; // xmm1
  CResource *v21; // rcx
  __m128 v22; // xmm1
  CResource *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  CGeometryOnlyDrawListBrush *v28; // rcx
  float v29; // xmm0_4
  CGeometryOnlyDrawListBrush *v30; // rax
  int DrawList; // eax
  int v32; // r9d
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  struct _D3DCOLORVALUE v35; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  __int128 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+78h] [rbp-88h]
  CGeometryOnlyDrawListBrush *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  struct CGeometryOnlyDrawListBrush *v43[2]; // [rsp+90h] [rbp-70h] BYREF
  char v44; // [rsp+A0h] [rbp-60h]
  struct CDrawingContext *v45; // [rsp+B0h] [rbp-50h] BYREF
  float v46; // [rsp+B8h] [rbp-48h]
  float v47; // [rsp+BCh] [rbp-44h]
  int v48; // [rsp+C0h] [rbp-40h]
  __int128 v49; // [rsp+C4h] [rbp-3Ch]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  __int64 v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  __int64 v53; // [rsp+F0h] [rbp-10h]
  int v54; // [rsp+F8h] [rbp-8h]
  char v55; // [rsp+FCh] [rbp-4h]
  bool v56; // [rsp+FDh] [rbp-3h]
  char v57; // [rsp+FEh] [rbp-2h]

  v45 = a2;
  v48 = 0;
  v50 = 0LL;
  v6 = *((float *)a5 + 3) - *((float *)a5 + 1);
  v8 = *((float *)a5 + 2) - *(float *)a5;
  v51 = 0LL;
  v47 = v6;
  v49 = _xmm;
  v52 = 0LL;
  v46 = v8;
  v36 = 0LL;
  v39 = 0LL;
  v53 = 0LL;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v56 = a4 == 0;
  v37 = 0LL;
  v38 = 0;
  v40 = 0LL;
  v41 = 0;
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(
                    (__int64)this,
                    (CGradientColorData *)&v36);
  v10 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GradientColor, 0x33u);
    goto LABEL_21;
  }
  *(_OWORD *)v43 = *(_OWORD *)a5;
  if ( operator!=((float *)this + 18, (float *)v43) || memcmp_0((char *)this + 176, (char *)this + 88, 0x58uLL) )
  {
    v11 = *((double *)this + 18);
    v12 = *((double *)this + 19);
    v35.r = v11;
    v13 = *((double *)this + 20);
    v35.g = v12;
    v14 = *((double *)this + 21);
    *(float *)v43 = v13;
    *((float *)v43 + 1) = v14;
    v15 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush(this);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3Bu);
      goto LABEL_21;
    }
    CResource::SetPropertyImpl(
      *((CResource **)this + 33),
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_StartPoint,
      &v35);
    CResource::SetPropertyImpl(
      *((CResource **)this + 33),
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_EndPoint,
      (struct _D3DCOLORVALUE *)v43);
    v16 = v39;
    v17 = (CResource *)*((_QWORD *)this + 34);
    LODWORD(v42[0]) = *(_DWORD *)v39;
    CResource::SetPropertyImpl(
      v17,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      (struct _D3DCOLORVALUE *)v42);
    v18 = (const __m128i *)v36;
    v19 = (CResource *)*((_QWORD *)this + 34);
    v20 = (__m128)_mm_loadu_si128((const __m128i *)v36);
    LODWORD(v42[0]) = v20.m128_i32[0];
    HIDWORD(v42[1]) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    HIDWORD(v42[0]) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    LODWORD(v42[1]) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    CResource::SetPropertyImpl(
      v19,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      (struct _D3DCOLORVALUE *)v42);
    v21 = (CResource *)*((_QWORD *)this + 35);
    LODWORD(v42[0]) = *(_DWORD *)(v16 + 4);
    CResource::SetPropertyImpl(
      v21,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      (struct _D3DCOLORVALUE *)v42);
    v22 = (__m128)_mm_loadu_si128(v18 + 1);
    v23 = (CResource *)*((_QWORD *)this + 35);
    LODWORD(v42[0]) = v22.m128_i32[0];
    HIDWORD(v42[1]) = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    HIDWORD(v42[0]) = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    LODWORD(v42[1]) = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    CResource::SetPropertyImpl(
      v23,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      (struct _D3DCOLORVALUE *)v42);
    v24 = *(_OWORD *)((char *)this + 104);
    *(_OWORD *)v43 = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 72) = *(_OWORD *)v43;
    *((_OWORD *)this + 11) = *(_OWORD *)((char *)this + 88);
    v25 = *(_OWORD *)((char *)this + 120);
    *((_OWORD *)this + 12) = v24;
    v26 = *(_OWORD *)((char *)this + 136);
    *((_OWORD *)this + 13) = v25;
    v27 = *(_OWORD *)((char *)this + 152);
    *((_OWORD *)this + 14) = v26;
    *(_QWORD *)&v26 = *((_QWORD *)this + 21);
    *((_OWORD *)this + 15) = v27;
    *((_QWORD *)this + 32) = v26;
  }
  v42[0] = 0LL;
  v43[0] = (struct CGeometryOnlyDrawListBrush *)v42;
  v43[1] = 0LL;
  v44 = 1;
  v10 = CGeometryOnlyDrawListBrush::Create(&v43[1]);
  if ( v44 )
  {
    v28 = *(CGeometryOnlyDrawListBrush **)v43[0];
    *(_QWORD *)v43[0] = v43[1];
    if ( v28 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v28, 1);
  }
  if ( v10 < 0 )
  {
    v34 = 84;
    v32 = v10;
  }
  else
  {
    v29 = v47;
    v30 = v42[0];
    v43[0] = 0LL;
    *(float *)&v43[1] = v46;
    *((_BYTE *)v42[0] + 52) = 1;
    *((_DWORD *)v30 + 12) = 50529027;
    *((float *)&v43[1] + 1) = v29;
    *((_OWORD *)v30 + 2) = *(_OWORD *)v43;
    DrawList = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext **))(**((_QWORD **)this + 33) + 296LL))(
                 *((_QWORD *)this + 33),
                 &v45);
    v10 = DrawList;
    if ( DrawList < 0 )
    {
      v34 = 91;
    }
    else
    {
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v45, a3, v42[0], 0LL);
      v10 = DrawList;
      if ( DrawList >= 0 )
        goto LABEL_17;
      v34 = 92;
    }
    v32 = DrawList;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, v34);
LABEL_17:
  if ( v42[0] )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v42[0], 1);
LABEL_21:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v39);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v36);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v45);
  return (unsigned int)v10;
}
