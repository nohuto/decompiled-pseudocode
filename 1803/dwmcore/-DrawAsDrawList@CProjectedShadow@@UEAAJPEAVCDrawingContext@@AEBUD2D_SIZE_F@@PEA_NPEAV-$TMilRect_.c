/*
 * XREFs of ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009C9E0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801A0A10 (-RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0EF4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801A1888 (-RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A1BC8 (-UpdateShadowIntermediates@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B44B0 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801B5C1C (-GetShadowPath@CProjectedShadow@@AEBA-AW4ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z.c)
 *     ?IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z @ 0x1801B63A8 (-IsValid@CProjectedShadow@@AEAA_NPEBVCVisualTree@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B6640 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::DrawAsDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  const struct CVisualTree *v7; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rcx
  float v15; // xmm6_4
  float v16; // xmm7_4
  int ShadowPath; // ebp
  __m128 width_low; // xmm2
  float v19; // xmm3_4
  __int64 v20; // rax
  float v21; // xmm1_4
  __m128 v22; // xmm3
  int v23; // eax
  int v24; // eax
  int v25; // eax
  struct D2D_SIZE_F v26; // r8
  CProjectedShadowReceiver *v27; // rcx
  int refreshed; // eax
  int updated; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  float v35; // [rsp+30h] [rbp-88h]
  float v36; // [rsp+30h] [rbp-88h]
  struct D2D_SIZE_F v37; // [rsp+38h] [rbp-80h] BYREF
  struct CDrawListCache *v38; // [rsp+40h] [rbp-78h]

  v7 = (const struct CVisualTree *)*((_QWORD *)a2 + 816);
  v38 = a6;
  v11 = 0;
  v12 = *(_QWORD *)(*((_QWORD *)this + 9) + 56LL);
  v13 = *(_QWORD *)(*((_QWORD *)this + 10) + 56LL);
  if ( CProjectedShadow::IsValid(this, v7) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 9) + 56LL);
    v15 = *(float *)(v14 + 132);
    v16 = *(float *)(v14 + 136);
    if ( v13 != v12
      && !*(_DWORD *)(*((_QWORD *)this + 2) + 1192LL)
      && CProjectedShadow::IsCasterInBetweenLightAndReceiver(this, a2) )
    {
      ShadowPath = CProjectedShadow::GetShadowPath(this, a2);
      if ( ShadowPath )
      {
        v20 = *((_QWORD *)this + 9);
        if ( ShadowPath == 1 )
        {
          width_low = (__m128)LODWORD(a3->width);
          v21 = *(float *)(v20 + 92) + *(float *)(v20 + 92);
          width_low.m128_f32[0] = fminf(width_low.m128_f32[0], v21 + 1.0) + v21;
          v19 = fminf(a3->height, v21 + 1.0) + v21;
        }
        else
        {
          v22 = (__m128)*(unsigned int *)(v20 + 92);
          v22.m128_f32[0] = v22.m128_f32[0] + v22.m128_f32[0];
          width_low = v22;
          v19 = v22.m128_f32[0] + v16;
          width_low.m128_f32[0] = width_low.m128_f32[0] + v15;
        }
      }
      else
      {
        if ( !CProjectedShadow::s_pFastShadowCaster )
          CProjectedShadow::CreateFastShadow((struct CComposition **)this, a2);
        width_low = (__m128)LODWORD(FLOAT_65_0);
        v19 = FLOAT_65_0;
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
        v35 = width_low.m128_f32[0] + 6291456.25;
        v23 = (int)(LODWORD(v35) << 10) >> 11;
      }
      v37.width = (float)v23;
      if ( (LODWORD(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        width_low.m128_f32[0] = (float)(int)v19 - v19;
        v25 = (int)v19 - _mm_cmple_ss(width_low, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v36 = v19 + 6291456.25;
        v25 = (int)(LODWORD(v36) << 10) >> 11;
      }
      v26 = *a3;
      v27 = (CProjectedShadowReceiver *)*((_QWORD *)this + 10);
      v37.height = (float)v25;
      refreshed = CProjectedShadowReceiver::RefreshMaskContent(v27, a2, v26);
      v11 = refreshed;
      if ( refreshed < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0xDAu);
        return v11;
      }
      updated = CProjectedShadowReceiver::UpdateShadowIntermediates(
                  *((CRenderTargetImageSource ***)this + 10),
                  (struct IRenderTarget **)a2,
                  a3);
      v11 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xDFu);
        return v11;
      }
      if ( !ShadowPath )
        goto LABEL_27;
      v30 = CProjectedShadowCaster::RefreshMaskContent(*((CProjectedShadowCaster **)this + 9), a2, v37);
      v11 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xE7u);
        return v11;
      }
      v31 = CProjectedShadowCaster::UpdateShadowIntermediates(*((CProjectedShadowCaster **)this + 9), a2, &v37);
      v11 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0xECu);
        return v11;
      }
      v32 = CProjectedShadow::UpdateShadowIntermediates(this, a2, a3);
      v11 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0xF1u);
      }
      else
      {
LABEL_27:
        v33 = CSpriteVisualContent::DrawAsDrawList(this, a2, a3, a4, a5, v38);
        v11 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xF4u);
      }
    }
  }
  return v11;
}
