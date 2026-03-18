/*
 * XREFs of ?GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z @ 0x1801B57DC
 * Callers:
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8 (-GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

float __fastcall CProjectedShadow::GetOpacity(CProjectedShadow *this, struct CDrawingContext *a2)
{
  __int64 v2; // rax
  CVisual *v5; // rbx
  __m128 v6; // xmm0
  struct D2D_VECTOR_4F v8; // [rsp+20h] [rbp-88h] BYREF
  struct D2D_VECTOR_4F v9; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v10[96]; // [rsp+40h] [rbp-68h] BYREF

  v2 = *((_QWORD *)this + 9);
  v8.w = 1.0;
  v5 = *(CVisual **)(v2 + 56);
  CVisual::GetRelativeOffset(v5, &v8.x, &v8.y, &v8.z);
  CProjectedShadow::GetVisualToAnotherVisual(v10, a2, v5, *(_QWORD *)(*((_QWORD *)this + 10) + 56LL));
  v6 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v10, &v9, &v8));
  return fmaxf(
           0.050000001,
           1.0
         - (float)((float)(*(float *)(*((_QWORD *)this + 9) + 88LL) * 0.0099999998)
                 * _mm_shuffle_ps(v6, v6, 170).m128_f32[0]));
}
