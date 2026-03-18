/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801800A0
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18001BEC4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     RoundIntermediateSize @ 0x18001C068 (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18015FA94 (-ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  struct D2D_SIZE_F SurfaceSize; // rax
  __int64 v8; // xmm0_8
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm7
  __m128 v13; // xmm6
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  float v17; // xmm2_4
  float v18; // xmm3_4
  __int128 v19; // [rsp+28h] [rbp-49h] BYREF
  float v20[10]; // [rsp+38h] [rbp-39h] BYREF
  float v21[6]; // [rsp+60h] [rbp-11h] BYREF

  v3 = *((_QWORD *)a2 + 3);
  v5 = *(_QWORD *)a3;
  if ( *(_BYTE *)(v3 + 28) )
  {
    SurfaceSize = CBrushRenderingGraph::GetSurfaceSize(*(struct IImageSource **)v3);
    v21[1] = 0.0;
    v21[2] = 0.0;
    *(struct D2D_SIZE_F *)&v19 = SurfaceSize;
    v21[3] = SurfaceSize.height;
    v21[0] = SurfaceSize.width;
    v21[4] = 0.0 - (float)(SurfaceSize.width * 0.0);
    v21[5] = 0.0 - (float)(SurfaceSize.height * 0.0);
    Matrix3x3::operator*((float *)(v3 + 32), v20, v21);
  }
  else if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 40) + 8LL))(*(_QWORD *)(v3 + 40)) != 1
         || (int)CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
                   *(CSurfaceDrawListBrush **)(v3 + 40),
                   (struct Matrix3x3 *)v20) < 0 )
  {
    v8 = *((_QWORD *)a2 + 1);
    goto LABEL_7;
  }
  v8 = **(_QWORD **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)v20, (struct D2D_VECTOR_2F)&v19);
LABEL_7:
  *((_QWORD *)a3 + 4) = v8;
  v9 = (__m128)*((unsigned int *)a3 + 6);
  v10 = (__m128)*((unsigned int *)a3 + 7);
  v9.m128_f32[0] = fmaxf(v9.m128_f32[0], fminf(*((float *)a2 + 2), *((float *)a3 + 8)) * *((float *)a2 + 4));
  v10.m128_f32[0] = fmaxf(v10.m128_f32[0], fminf(*((float *)a2 + 3), *((float *)a3 + 9)) * *((float *)a2 + 5));
  *((_QWORD *)a3 + 3) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
  v11 = (__m128)*((unsigned int *)a3 + 6);
  v12 = (__m128)*((unsigned int *)a2 + 1);
  v12.m128_f32[0] = v12.m128_f32[0] * *((float *)a3 + 7);
  v11.m128_f32[0] = RoundIntermediateSize(v11.m128_f32[0] * *(float *)a2);
  v13 = v11;
  v14 = v12;
  v14.m128_f32[0] = RoundIntermediateSize(v12.m128_f32[0]);
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)a3 + 1) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  v15 = (__m128)*((unsigned int *)a3 + 2);
  v16 = (__m128)*((unsigned int *)a3 + 3);
  v15.m128_f32[0] = v15.m128_f32[0] / *(float *)a2;
  v16.m128_f32[0] = v16.m128_f32[0] / *((float *)a2 + 1);
  *((_QWORD *)a3 + 2) = _mm_unpacklo_ps(v15, v16).m128_u64[0];
  v16.m128_i32[0] = *((_DWORD *)a3 + 3);
  DWORD2(v19) = *((_DWORD *)a3 + 2);
  HIDWORD(v19) = v16.m128_i32[0];
  *(_OWORD *)(v5 + 68) = v19;
  v17 = *((float *)a3 + 6) / *((float *)a3 + 2);
  v18 = *((float *)a3 + 7) / *((float *)a3 + 3);
  if ( v5 != -32 )
  {
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 0;
    *(_DWORD *)(v5 + 52) = 0;
    *(float *)(v5 + 32) = v17;
    *(float *)(v5 + 48) = v18;
    *(float *)(v5 + 56) = 0.0 - (float)(v17 * 0.0);
    *(float *)(v5 + 60) = 0.0 - (float)(v18 * 0.0);
    *(_DWORD *)(v5 + 64) = 1065353216;
  }
}
