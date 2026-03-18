/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001BCA4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001BF48 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     RoundIntermediateSize @ 0x18001C068 (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  struct D2D_SIZE_F SurfaceSize; // rax
  float v7; // xmm7_4
  __int128 v8; // xmm8
  __m128 v9; // xmm6
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  int v13; // xmm3_4
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  struct D2D_SIZE_F v17; // [rsp+28h] [rbp-E0h]
  __int128 v18; // [rsp+28h] [rbp-E0h]
  _BYTE v19[36]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v20[36]; // [rsp+5Ch] [rbp-ACh] BYREF
  _DWORD v21[3]; // [rsp+80h] [rbp-88h] BYREF
  float v22; // [rsp+8Ch] [rbp-7Ch]
  float v23; // [rsp+90h] [rbp-78h]
  float v24; // [rsp+94h] [rbp-74h]
  _DWORD v25[10]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-48h] BYREF
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D4h] [rbp-34h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  SurfaceSize = CBrushRenderingGraph::GetSurfaceSize(*(struct IImageSource **)v2);
  v7 = *(float *)(v2 + 76) - *(float *)(v2 + 68);
  v8 = *(unsigned int *)(v2 + 80);
  *(float *)&v8 = *(float *)&v8 - *(float *)(v2 + 72);
  v17 = SurfaceSize;
  v9 = (__m128)COERCE_UNSIGNED_INT64(RoundIntermediateSize());
  v10.m128_u64[1] = *((_QWORD *)&v8 + 1);
  *(double *)v10.m128_u64 = RoundIntermediateSize();
  v21[1] = 0;
  v21[2] = 0;
  v25[1] = 0;
  v25[2] = 0;
  *((_QWORD *)a2 + 1) = _mm_unpacklo_ps(v9, v10).m128_u64[0];
  v11 = (__m128)*((unsigned int *)a2 + 2);
  v12 = (__m128)*((unsigned int *)a2 + 3);
  v11.m128_f32[0] = v11.m128_f32[0] / v7;
  v12.m128_f32[0] = v12.m128_f32[0] / *(float *)&v8;
  *((_QWORD *)a2 + 2) = _mm_unpacklo_ps(v11, v12).m128_u64[0];
  v12.m128_f32[0] = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  v13 = *(_DWORD *)(v2 + 68) ^ _xmm;
  v22 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  v21[0] = v12.m128_i32[0];
  v27 = v13;
  v25[0] = LODWORD(v17.width);
  v23 = 0.0 - (float)(v12.m128_f32[0] * 0.0);
  v28 = *(_DWORD *)(v2 + 72) ^ _xmm;
  v25[3] = LODWORD(v17.height);
  v24 = 0.0 - (float)(v22 * 0.0);
  v26 = _xmm;
  *(float *)&v25[4] = 0.0 - (float)(v17.width * 0.0);
  *(float *)&v25[5] = 0.0 - (float)(v17.height * 0.0);
  v14 = Matrix3x3::operator*(v2 + 32, v19, v25);
  v15 = Matrix3x3::operator*(v14, v25, &v26);
  v16 = Matrix3x3::operator*(v15, v20, v21);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)v16;
  *(_QWORD *)&v18 = 0LL;
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(v16 + 16);
  *(_DWORD *)(v4 + 64) = *(_DWORD *)(v16 + 32);
  *((_QWORD *)&v18 + 1) = *((_QWORD *)a2 + 1);
  *(_BYTE *)(v4 + 85) = 1;
  *(_OWORD *)(v4 + 68) = v18;
  *(_BYTE *)(v4 + 86) = *(_BYTE *)(v2 + 86);
}
