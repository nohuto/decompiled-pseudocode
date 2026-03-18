/*
 * XREFs of ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F28C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800347F0 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180067310 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18013C5B4 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$V@?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@AEBQEAVCVisual@@@Z @ 0x180188B7C (--$_Try_emplace@AEBQEAVCVisual@@$$V@-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShado.c)
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@_N@Z @ 0x180188E94 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@_N@Z.c)
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x180188F08 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUShadowIntermediates@1@@Z @ 0x180188F24 (-ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUShadowIntermediates@1@@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x18018A71C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x18018A8FC (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 *     ?SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z @ 0x18018AAB0 (-SetMask@ShadowIntermediates@CDropShadow@@QEAAJPEAV2@PEAVCSpriteVisualContent@@@Z.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18018AC70 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
 */

__int64 __fastcall CDropShadow::DrawAsDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        struct CDrawListCache *a6)
{
  unsigned int v10; // ebx
  char *v11; // rsi
  CVisual *v12; // r8
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CComposition *v16; // rcx
  __m128 width_low; // xmm2
  float v18; // xmm3_4
  bool IsRectangular; // al
  float v20; // xmm1_4
  float v21; // xmm3_4
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  float v29; // xmm2_4
  int updated; // eax
  float v31; // xmm3_4
  struct D2D_SIZE_F v32; // xmm0_8
  float v33; // xmm2_4
  float v34; // xmm1_4
  int v35; // eax
  int v36; // eax
  _BYTE v38[8]; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int32 v39; // [rsp+48h] [rbp-91h]
  struct CSpriteVisualContent *v40; // [rsp+50h] [rbp-89h] BYREF
  struct CVisual *CurrentVisual; // [rsp+58h] [rbp-81h] BYREF
  struct CDrawListCache *v42; // [rsp+60h] [rbp-79h]
  _BYTE v43[64]; // [rsp+70h] [rbp-69h] BYREF
  int v44; // [rsp+B0h] [rbp-29h]
  __int64 v45; // [rsp+C0h] [rbp-19h] BYREF
  float v46; // [rsp+C8h] [rbp-11h]
  float v47; // [rsp+CCh] [rbp-Dh]

  v42 = a6;
  v10 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v11 = (char *)this + 192;
  if ( CDropShadow::CanUseVisualBrushAsMaskBrush(this) )
  {
    v40 = 0LL;
    CVisual::GetContentAsSpriteNoRef(v12, &v40);
    std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::_Try_emplace<CVisual * const &,>(
      (_QWORD *)this + 9,
      (__int64)&v45,
      (const unsigned __int8 *)&CurrentVisual);
    v11 = (char *)(v45 + 24);
    if ( *(struct CSpriteVisualContent **)(v45 + 56) != v40 )
    {
      v13 = CDropShadow::ShadowIntermediates::SetMask((CDropShadow::ShadowIntermediates *)(v45 + 24), this, v40);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2C1u);
        goto LABEL_45;
      }
    }
    if ( !*((_QWORD *)v11 + 4) )
      goto LABEL_45;
    v12 = CurrentVisual;
  }
  if ( CDropShadow::CanUseFastShadow(this, a3, v12, 0) )
  {
    v14 = CDropShadow::ConfigureFastShadow(this, a2, (const struct CDropShadow::ShadowIntermediates *)v11);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x2CFu);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(struct CDropShadow *, struct CDrawingContext *, struct D2D_SIZE_F *, __int64, __int64, struct CDrawListCache *))(*(_QWORD *)CDropShadow::s_pFastShadow + 232LL))(
              CDropShadow::s_pFastShadow,
              a2,
              a3,
              a4,
              a5,
              v42);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2D1u);
    }
  }
  else
  {
    CDropShadow::ReleaseFastShadowIfInUse(this);
    v16 = (CComposition *)*((_QWORD *)this + 2);
    if ( *((_DWORD *)v16 + 298) )
    {
      if ( CComposition::IsOverdrawHeatMapEnabled(v16) )
        *((_BYTE *)this + 241) = !CDropShadow::CanUseFastShadow(this, a3, CurrentVisual, 1);
    }
    else
    {
      v38[0] = 0;
      if ( this == CDropShadow::s_pFastShadow )
      {
        width_low = (__m128)LODWORD(FLOAT_65_0);
        v18 = FLOAT_65_0;
      }
      else
      {
        IsRectangular = CDropShadow::IsRectangular(this, CurrentVisual);
        v20 = *((float *)this + 38) + *((float *)this + 38);
        if ( IsRectangular )
        {
          width_low = (__m128)LODWORD(a3->width);
          width_low.m128_f32[0] = fminf(width_low.m128_f32[0], v20 + 1.0);
          v21 = fminf(a3->height, v20 + 1.0);
        }
        else
        {
          v40 = (struct CSpriteVisualContent *)*a3;
          width_low = (__m128)(unsigned int)v40;
          v21 = *((float *)&v40 + 1);
        }
        v18 = v21 + v20;
        width_low.m128_f32[0] = width_low.m128_f32[0] + v20;
      }
      v39 = width_low.m128_u32[0];
      if ( (width_low.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v23 = (int)width_low.m128_f32[0];
        width_low.m128_f32[0] = (float)(int)width_low.m128_f32[0] - width_low.m128_f32[0];
        width_low = _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5));
        v39 = width_low.m128_u32[0];
        v22 = v23 - width_low.m128_i32[0];
      }
      else
      {
        *(float *)&v39 = width_low.m128_f32[0] + 6291456.25;
        v22 = (int)(v39 << 10) >> 11;
      }
      *(float *)&v39 = v18;
      *(float *)&v40 = (float)v22;
      if ( (LODWORD(v18) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        width_low.m128_f32[0] = (float)(int)v18 - v18;
        v39 = _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        v24 = (int)v18 - v39;
      }
      else
      {
        *(float *)&v39 = v18 + 6291456.25;
        v24 = (int)(v39 << 10) >> 11;
      }
      v25 = *((_QWORD *)v11 + 4);
      *((float *)&v40 + 1) = (float)v24;
      if ( v25 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, _BYTE *))(*(_QWORD *)v25 + 272LL))(
                v25,
                a2,
                v38)
          || v38[0] )
        {
          goto LABEL_45;
        }
        v26 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct CSpriteVisualContent **))(**((_QWORD **)v11 + 4) + 288LL))(
                *((_QWORD *)v11 + 4),
                a2,
                &v40);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x308u);
          goto LABEL_45;
        }
      }
      v27 = *((_QWORD *)v11 + 1);
      if ( v27 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v27 + 120LL))(
                v27,
                0LL,
                0LL,
                &v45);
        v10 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x30Fu);
          goto LABEL_45;
        }
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v40 - (float)(v46 - *(float *)&v45))) & _xmm) > 0.015625
          || (v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v40 + 1)
                                                              - (float)(v47 - *((float *)&v45 + 1)))) & _xmm),
              v29 > 0.015625) )
        {
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)v11);
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)v11 + 1);
        }
      }
      updated = CDropShadow::UpdateShadowIntermediates(
                  this,
                  a2,
                  (const struct D2D_SIZE_F *)&v40,
                  (struct CDropShadow::ShadowIntermediates *)v11);
      v10 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x318u);
        goto LABEL_45;
      }
    }
    v31 = *((float *)this + 38);
    v32 = *a3;
    v44 = 0;
    v40 = (struct CSpriteVisualContent *)v32;
    v33 = *((float *)this + 41) - v31;
    *((float *)&v40 + 1) = v32.height + (float)(v31 + v31);
    v34 = *((float *)this + 40) - v31;
    *(float *)&v40 = v32.width + (float)(v31 + v31);
    CMILMatrix::SetTranslation((CMILMatrix *)v43, v34, v33, *((float *)this + 42));
    v35 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v43, 1, 1);
    v10 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x32Bu);
    }
    else
    {
      v36 = CSpriteVisualContent::DrawAsDrawList(this, a2, (struct D2D_SIZE_F *)&v40, a4, a5, v42);
      v10 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x32Eu);
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
LABEL_45:
  *((_BYTE *)this + 241) = 0;
  return v10;
}
