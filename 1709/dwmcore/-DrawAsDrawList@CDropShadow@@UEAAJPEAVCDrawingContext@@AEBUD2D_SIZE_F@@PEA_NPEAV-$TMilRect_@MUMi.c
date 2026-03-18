/*
 * XREFs of ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180022710 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041BF8 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005987C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18011A5C8 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ??A?$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@5@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@@std@@QEAAAEAUShadowIntermediates@CDropShadow@@AEBQEAVCVisual@@@Z @ 0x18015F5D4 (--A-$unordered_map@PEAVCVisual@@UShadowIntermediates@CDropShadow@@U-$hash@PEAVCVisual@@@std@@U-$.c)
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18015F6C0 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@PEAVCVisual@@@Z.c)
 *     ?CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ @ 0x18015F720 (-CanUseVisualBrushAsMaskBrush@CDropShadow@@AEBA_NXZ.c)
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18015F73C (-ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z @ 0x180160D38 (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z @ 0x180160E0C (-IsRectangular@CDropShadow@@AEBA_NPEAVCVisual@@@Z.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x180160F94 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180161300 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInte.c)
 */

__int64 __fastcall CDropShadow::DrawAsDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r12
  struct CVisual *v10; // r15
  struct CDropShadow::ShadowIntermediates *v11; // rsi
  __int64 *v12; // rax
  struct CResource *v13; // r12
  signed int v14; // eax
  unsigned int v15; // ebx
  signed int v16; // eax
  signed int v17; // eax
  __m128 width_low; // xmm2
  float v19; // xmm3_4
  bool IsRectangular; // al
  float v21; // xmm1_4
  float height; // xmm3_4
  int v23; // eax
  int v24; // eax
  float v25; // xmm7_4
  int v26; // eax
  __int64 v27; // rcx
  float v28; // xmm6_4
  signed int v29; // eax
  float v30; // xmm1_4
  signed int updated; // eax
  float v32; // xmm3_4
  struct D2D_SIZE_F v33; // xmm0_8
  float v34; // xmm2_4
  float v35; // xmm1_4
  signed int v36; // eax
  signed int v37; // eax
  float v40; // [rsp+48h] [rbp-A9h]
  float v41; // [rsp+48h] [rbp-A9h]
  struct D2D_SIZE_F v42; // [rsp+50h] [rbp-A1h] BYREF
  __int64 v43; // [rsp+58h] [rbp-99h]
  __int64 v44; // [rsp+60h] [rbp-91h]
  _BYTE v45[64]; // [rsp+68h] [rbp-89h] BYREF
  int v46; // [rsp+A8h] [rbp-49h]
  CVisual *CurrentVisual; // [rsp+B8h] [rbp-39h] BYREF
  float v48; // [rsp+C0h] [rbp-31h]
  float v49; // [rsp+C4h] [rbp-2Dh]

  v44 = a5;
  v7 = a4;
  v43 = a6;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v10 = CurrentVisual;
  v11 = (CDropShadow *)((char *)this + 200);
  if ( CDropShadow::CanUseVisualBrushAsMaskBrush(this) )
  {
    v42 = 0LL;
    CVisual::GetContentAsSpriteNoRef(CurrentVisual, (struct CSpriteVisualContent **)&v42);
    v12 = std::unordered_map<CVisual *,CDropShadow::ShadowIntermediates>::operator[](
            (__int64 **)this + 10,
            (__int64 *)&CurrentVisual);
    v13 = (struct CResource *)v42;
    v11 = (struct CDropShadow::ShadowIntermediates *)v12;
    if ( *v12 != v42 )
    {
      CResource::UnRegisterNotifierInternal(this, (struct CResource *)*v12);
      *(_QWORD *)v11 = 0LL;
      v14 = CResource::RegisterNotifier(this, v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x344u);
        return v15;
      }
      *(_QWORD *)v11 = v13;
      CDropShadow::InvalidateShadowIntermediate(this, 1, v11);
    }
    v7 = a4;
  }
  if ( CDropShadow::CanUseFastShadow(this, a3, v10) )
  {
    v16 = CDropShadow::ConfigureFastShadow(this, a2);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x34Du);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(struct CDropShadow *, struct CDrawingContext *, struct D2D_SIZE_F *, __int64, __int64, __int64))(*(_QWORD *)CDropShadow::s_pFastShadow + 232LL))(
              CDropShadow::s_pFastShadow,
              a2,
              a3,
              v7,
              v44,
              v43);
      v15 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x34Fu);
    }
  }
  else
  {
    CDropShadow::ReleaseFastShadowIfInUse(this);
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1168LL) )
      goto LABEL_33;
    if ( this == CDropShadow::s_pFastShadow )
    {
      width_low = (__m128)LODWORD(FLOAT_65_0);
      v19 = FLOAT_65_0;
    }
    else
    {
      IsRectangular = CDropShadow::IsRectangular(this, v10);
      v21 = *((float *)this + 40) + *((float *)this + 40);
      if ( IsRectangular )
      {
        width_low = (__m128)LODWORD(a3->width);
        width_low.m128_f32[0] = fminf(width_low.m128_f32[0], v21 + 1.0);
        height = fminf(a3->height, v21 + 1.0);
      }
      else
      {
        v42 = *a3;
        width_low = (__m128)LODWORD(v42.width);
        height = v42.height;
      }
      v19 = height + v21;
      width_low.m128_f32[0] = width_low.m128_f32[0] + v21;
    }
    if ( (width_low.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v24 = (int)width_low.m128_f32[0];
      width_low.m128_f32[0] = (float)(int)width_low.m128_f32[0] - width_low.m128_f32[0];
      width_low = _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5));
      v23 = v24 - width_low.m128_i32[0];
    }
    else
    {
      v40 = width_low.m128_f32[0] + 6291456.25;
      v23 = (int)(LODWORD(v40) << 10) >> 11;
    }
    v25 = (float)v23;
    v42.width = (float)v23;
    if ( (LODWORD(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      width_low.m128_f32[0] = (float)(int)v19 - v19;
      v26 = (int)v19 - _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v41 = v19 + 6291456.25;
      v26 = (int)(LODWORD(v41) << 10) >> 11;
    }
    v27 = *((_QWORD *)v11 + 2);
    v28 = (float)v26;
    v42.height = (float)v26;
    if ( v27 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, CVisual **))(*(_QWORD *)v27 + 120LL))(
              v27,
              0LL,
              0LL,
              &CurrentVisual);
      v15 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x380u);
        return v15;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v25 - (float)(v48 - *(float *)&CurrentVisual))) & _xmm) > 0.015625
        || (v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - (float)(v49 - *((float *)&CurrentVisual + 1)))) & _xmm),
            v30 > 0.015625) )
      {
        CDropShadow::InvalidateShadowIntermediate(this, 1, v11);
      }
    }
    updated = CDropShadow::UpdateShadowIntermediates(this, a2, &v42, v11);
    v15 = updated;
    if ( updated >= 0 )
    {
LABEL_33:
      v32 = *((float *)this + 40);
      v33 = *a3;
      v46 = 0;
      v42 = v33;
      v34 = *((float *)this + 43) - v32;
      v42.height = v33.height + (float)(v32 + v32);
      v35 = *((float *)this + 42) - v32;
      v42.width = v33.width + (float)(v32 + v32);
      CMILMatrix::SetTranslation((CMILMatrix *)v45, v35, v34, *((float *)this + 44));
      v36 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v45, 1, 1);
      v15 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x398u);
      }
      else
      {
        v37 = CSpriteVisualContent::DrawAsDrawList(this, a2, &v42, v7, v44, (struct CDrawListCache *)v43);
        v15 = v37;
        if ( v37 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37, 0x39Bu);
        CDrawingContext::PopTransformInternal(a2, 1);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x389u);
    }
  }
  return v15;
}
