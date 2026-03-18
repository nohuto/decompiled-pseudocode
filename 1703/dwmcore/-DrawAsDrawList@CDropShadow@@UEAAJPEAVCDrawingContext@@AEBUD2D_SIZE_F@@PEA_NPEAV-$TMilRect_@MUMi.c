/*
 * XREFs of ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x1800112AC (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008CCE0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800A1C68 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180170A30 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180170A8C (-ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z @ 0x180171D9C (-InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z.c)
 *     ?IsRectangular@CDropShadow@@AEBA_NXZ @ 0x180171E38 (-IsRectangular@CDropShadow@@AEBA_NXZ.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x180171E98 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 *     ?UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180172120 (-UpdateShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDropShadow::DrawAsDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        __int64 a5,
        CDrawListCache *a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __m128 width_low; // xmm2
  float v14; // xmm3_4
  bool IsRectangular; // al
  float v16; // xmm1_4
  float height; // xmm3_4
  int v18; // eax
  int v19; // eax
  float v20; // xmm7_4
  int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm6_4
  int v24; // eax
  float v25; // xmm1_4
  int updated; // eax
  float v27; // xmm3_4
  struct D2D_SIZE_F v28; // xmm0_8
  float v29; // xmm2_4
  float v30; // xmm1_4
  int v31; // eax
  int v32; // eax
  float v34; // [rsp+48h] [rbp-99h]
  float v35; // [rsp+48h] [rbp-99h]
  struct D2D_SIZE_F v36; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v37[64]; // [rsp+58h] [rbp-89h] BYREF
  int v38; // [rsp+98h] [rbp-49h]
  float v39[4]; // [rsp+A8h] [rbp-39h] BYREF

  if ( CDropShadow::CanUseFastShadow(this, a3) )
  {
    v10 = CDropShadow::ConfigureFastShadow(this, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2D6u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(struct CDropShadow *, struct CDrawingContext *, struct D2D_SIZE_F *, __int64, __int64, CDrawListCache *))(*(_QWORD *)CDropShadow::s_pFastShadow + 216LL))(
              CDropShadow::s_pFastShadow,
              a2,
              a3,
              a4,
              a5,
              a6);
      v11 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2D8u);
    }
  }
  else
  {
    CDropShadow::ReleaseFastShadowIfInUse(this);
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1232LL) )
      goto LABEL_27;
    if ( this == CDropShadow::s_pFastShadow )
    {
      width_low = (__m128)LODWORD(FLOAT_65_0);
      v14 = FLOAT_65_0;
    }
    else
    {
      IsRectangular = CDropShadow::IsRectangular(this);
      v16 = *((float *)this + 24) + *((float *)this + 24);
      if ( IsRectangular )
      {
        width_low = (__m128)LODWORD(a3->width);
        width_low.m128_f32[0] = fminf(width_low.m128_f32[0], v16 + 1.0);
        height = fminf(a3->height, v16 + 1.0);
      }
      else
      {
        v36 = *a3;
        width_low = (__m128)LODWORD(v36.width);
        height = v36.height;
      }
      v14 = height + v16;
      width_low.m128_f32[0] = width_low.m128_f32[0] + v16;
    }
    if ( (width_low.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v19 = (int)width_low.m128_f32[0];
      width_low.m128_f32[0] = (float)(int)width_low.m128_f32[0] - width_low.m128_f32[0];
      width_low = _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5));
      v18 = v19 - width_low.m128_i32[0];
    }
    else
    {
      v34 = width_low.m128_f32[0] + 6291456.25;
      v18 = (int)(LODWORD(v34) << 10) >> 11;
    }
    v20 = (float)v18;
    v36.width = (float)v18;
    if ( (LODWORD(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      width_low.m128_f32[0] = (float)(int)v14 - v14;
      v21 = (int)v14 - _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v35 = v14 + 6291456.25;
      v21 = (int)(LODWORD(v35) << 10) >> 11;
    }
    v22 = *((_QWORD *)this + 19);
    v23 = (float)v21;
    v36.height = (float)v21;
    if ( v22 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)v22 + 112LL))(v22, 0LL, 0LL, v39);
      v11 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x309u);
        return v11;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - (float)(v39[2] - v39[0]))) & _xmm) > 0.015625
        || (v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23 - (float)(v39[3] - v39[1]))) & _xmm), v25 > 0.015625) )
      {
        CDropShadow::InvalidateShadowIntermediate(this, 1);
      }
    }
    updated = CDropShadow::UpdateShadowIntermediates(this, a2, &v36);
    v11 = updated;
    if ( updated >= 0 )
    {
LABEL_27:
      v27 = *((float *)this + 24);
      v28 = *a3;
      v38 = 0;
      v36 = v28;
      v29 = *((float *)this + 27) - v27;
      v36.height = v28.height + (float)(v27 + v27);
      v30 = *((float *)this + 26) - v27;
      v36.width = v28.width + (float)(v27 + v27);
      CMILMatrix::SetTranslation((CMILMatrix *)v37, v30, v29, *((float *)this + 28));
      v31 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v37, 1, 1);
      v11 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x321u);
      }
      else
      {
        v32 = CSpriteVisualContent::DrawAsDrawList(this, a2, &v36, a4, a5, a6);
        v11 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x324u);
        CDrawingContext::PopTransformInternal(a2, 1);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x312u);
    }
  }
  return v11;
}
