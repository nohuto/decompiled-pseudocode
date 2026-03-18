/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801981FC
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180197F1C (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801980F8 (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180198470 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *a1,
        __int64 a2,
        struct D2D_RECT_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_RECT_F *a5)
{
  float v9; // xmm6_4
  int MaskBounds; // eax
  int v11; // ebx
  float left; // xmm1_4
  float top; // xmm2_4
  float right; // xmm3_4
  float v15; // xmm4_4
  struct D2D_RECT_F v16; // xmm7
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  struct D2D_RECT_F v20; // [rsp+38h] [rbp-A1h] BYREF
  struct D2D_RECT_F v21; // [rsp+48h] [rbp-91h] BYREF
  struct D2D_RECT_F v22; // [rsp+58h] [rbp-81h] BYREF
  float v23[4]; // [rsp+68h] [rbp-71h] BYREF
  struct D2D_RECT_F v24; // [rsp+78h] [rbp-61h] BYREF
  int v25[4]; // [rsp+88h] [rbp-51h] BYREF

  v9 = *(float *)(*((_QWORD *)a1 + 65) + 152LL);
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v11 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, MaskBounds, 0x1B3u);
  }
  else
  {
    left = v21.left;
    top = v21.top;
    right = v21.right;
    v20 = v21;
    if ( !IsEmpty(&v20) )
    {
      v20.left = left - v9;
      v20.top = top - v9;
      v20.right = right + v9;
      v20.bottom = v15 + v9;
    }
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v21.left, (float *)v25);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v20.left, v23);
    v22 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      a2,
      (struct Windows::Foundation::Numerics::float4x4 *)&v22,
      v23,
      &v20.left,
      (__int64)&v24);
    v22 = v20;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      &v22,
      (__int64)v25,
      (__int64)&v20,
      &v24);
    v16 = v20;
    LODWORD(v17) = _mm_shuffle_ps((__m128)v20, (__m128)v20, 85).m128_u32[0];
    LODWORD(v18) = _mm_shuffle_ps((__m128)v20, (__m128)v20, 170).m128_u32[0];
    LODWORD(v19) = _mm_shuffle_ps((__m128)v20, (__m128)v20, 255).m128_u32[0];
    v20.top = v17;
    v20.right = v18;
    v20.bottom = v19;
    *a4 = v16;
    if ( !IsEmpty(&v20) )
    {
      v16.left = v16.left - v9;
      v17 = v17 - v9;
      v18 = v18 + v9;
      v19 = v19 + v9;
    }
    *(_QWORD *)&v20.left = *(_QWORD *)(*((_QWORD *)a1 + 65) + 160LL);
    v21.left = v16.left + v20.left;
    v21.top = v17 + v20.top;
    v21.right = v18 + v20.left;
    v21.bottom = v19 + v20.top;
    *a5 = v21;
  }
  if ( v11 < 0 )
  {
    *a4 = *a3;
    *a5 = *a3;
  }
}
