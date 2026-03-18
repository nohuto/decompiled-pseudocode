/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800C2C4C
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008C908 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     RoundIntermediateSize @ 0x1800C2E64 (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm0_4
  int v10; // eax
  float v11; // xmm1_4
  int v12; // xmm3_4
  unsigned int v13; // xmm1_4
  int v14; // eax
  float *v15; // rax
  float *v16; // rax
  float *v17; // rax
  int v18; // xmm1_4
  __int128 v19; // xmm0
  float v20[9]; // [rsp+28h] [rbp-99h] BYREF
  float v21[9]; // [rsp+4Ch] [rbp-75h] BYREF
  __int128 v22; // [rsp+70h] [rbp-51h] BYREF
  float v23; // [rsp+80h] [rbp-41h]
  float v24; // [rsp+84h] [rbp-3Dh]
  float v25[3]; // [rsp+98h] [rbp-29h] BYREF
  float v26; // [rsp+A4h] [rbp-1Dh]
  float v27; // [rsp+A8h] [rbp-19h]
  float v28; // [rsp+ACh] [rbp-15h]
  __int128 v29; // [rsp+B0h] [rbp-11h] BYREF
  int v30; // [rsp+C0h] [rbp-1h]
  int v31; // [rsp+C4h] [rbp+3h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v2, &v22);
  v6 = *(float *)(v2 + 92) - *(float *)(v2 + 84);
  v7 = *(float *)(v2 + 96) - *(float *)(v2 + 88);
  v8 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(((double (*)(void))RoundIntermediateSize)()));
  v9 = RoundIntermediateSize();
  v10 = v22;
  v25[1] = 0.0;
  v25[2] = 0.0;
  DWORD2(v22) = 0;
  *((float *)a2 + 3) = v9;
  *((float *)a2 + 2) = v8;
  *((float *)a2 + 5) = v9 / v7;
  *((float *)a2 + 4) = v8 / v6;
  v11 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  v12 = *(_DWORD *)(v2 + 84);
  v26 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  v25[0] = v11;
  v30 = v12 ^ _xmm;
  v27 = 0.0 - (float)(v11 * 0.0);
  *(float *)&v13 = (float)v10;
  v14 = DWORD1(v22);
  v31 = *(_DWORD *)(v2 + 88) ^ _xmm;
  v28 = 0.0 - (float)(v26 * 0.0);
  v29 = _xmm;
  *(_QWORD *)&v22 = v13;
  *((float *)&v22 + 3) = (float)v14;
  v23 = 0.0 - (float)(*(float *)&v13 * 0.0);
  v24 = 0.0 - (float)((float)v14 * 0.0);
  v15 = Matrix3x3::operator*((float *)(v2 + 48), v20, (float *)&v22);
  v16 = Matrix3x3::operator*(v15, (float *)&v22, (float *)&v29);
  v17 = Matrix3x3::operator*(v16, v21, v25);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)v17;
  *(_OWORD *)(v4 + 64) = *((_OWORD *)v17 + 1);
  *(float *)&v17 = v17[8];
  *(_QWORD *)&v22 = 0LL;
  *(_DWORD *)(v4 + 80) = (_DWORD)v17;
  v18 = *((_DWORD *)a2 + 3);
  DWORD2(v22) = *((_DWORD *)a2 + 2);
  HIDWORD(v22) = v18;
  v19 = v22;
  *(_BYTE *)(v4 + 101) = 1;
  *(_OWORD *)(v4 + 84) = v19;
  *(_BYTE *)(v4 + 102) = *(_BYTE *)(v2 + 102);
}
