/*
 * XREFs of ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B619C
 * Callers:
 *     ?CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B4450 (-CanUseRectOptimization@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8 (-GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

bool __fastcall CProjectedShadow::IsShadowAxisAlignedRectToReceiver(CProjectedShadow *this, struct CDrawingContext *a2)
{
  CVisual *v4; // rdi
  CVisual *v5; // r14
  __int64 v6; // rax
  struct D2D_VECTOR_4F v7; // xmm7
  struct D2D_VECTOR_4F v8; // xmm6
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm2_4
  bool result; // al
  __int64 v14; // [rsp+28h] [rbp-A9h]
  float v15; // [rsp+38h] [rbp-99h] BYREF
  float v16; // [rsp+3Ch] [rbp-95h] BYREF
  struct D2D_VECTOR_4F v17; // [rsp+40h] [rbp-91h] BYREF
  struct D2D_VECTOR_4F v18; // [rsp+50h] [rbp-81h] BYREF
  struct D2D_VECTOR_4F v19; // [rsp+60h] [rbp-71h] BYREF
  struct D2D_VECTOR_4F v20; // [rsp+70h] [rbp-61h] BYREF
  struct D2D_VECTOR_4F v21; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v22[112]; // [rsp+98h] [rbp-39h] BYREF
  FLOAT v23; // [rsp+138h] [rbp+67h] BYREF
  FLOAT v24; // [rsp+148h] [rbp+77h] BYREF
  FLOAT v25; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = *(CVisual **)(*((_QWORD *)this + 9) + 56LL);
  v5 = *(CVisual **)(*((_QWORD *)this + 10) + 56LL);
  CVisual::GetRelativeOffset(v4, &v25, &v24, &v23);
  CVisual::GetEffectiveSize(v4, &v16, &v15);
  v6 = *((_QWORD *)this + 11);
  v20.x = v25;
  v14 = *(_QWORD *)(v6 + 80);
  v20.y = v24;
  v20.z = v23;
  v19.x = v25;
  v19.y = v15 + v24;
  v19.z = v23;
  v17.x = v16 + v25;
  v17.y = v15 + v24;
  v17.z = v23;
  v18.x = v16 + v25;
  v18.y = v24;
  v18.z = v23;
  v20.w = 1.0;
  v19.w = 1.0;
  v17.w = 1.0;
  v18.w = 1.0;
  CProjectedShadow::ProjectOntoAndLocalize(v22, a2, v4, v5, v14);
  v7 = (struct D2D_VECTOR_4F)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector(
                                                                (CMILMatrix *)v22,
                                                                &v21,
                                                                &v20));
  v20 = v7;
  v8 = (struct D2D_VECTOR_4F)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector(
                                                                (CMILMatrix *)v22,
                                                                &v21,
                                                                &v19));
  v19 = v8;
  v17 = *CMILMatrix::Transform4DVector((CMILMatrix *)v22, &v21, &v17);
  v18 = *CMILMatrix::Transform4DVector((CMILMatrix *)v22, &v21, &v18);
  CVisual::GetRelativeOffset(v5, &v25, &v24, &v23);
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7.x - v8.x)) & _xmm);
  result = 0;
  if ( v9 <= 0.0000011920929 )
  {
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19.y - v17.y)) & _xmm);
    if ( v10 <= 0.0000011920929 )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17.x - v18.x)) & _xmm);
      if ( v11 <= 0.0000011920929 )
      {
        v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v18.y - v20.y)) & _xmm);
        if ( v12 <= 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
