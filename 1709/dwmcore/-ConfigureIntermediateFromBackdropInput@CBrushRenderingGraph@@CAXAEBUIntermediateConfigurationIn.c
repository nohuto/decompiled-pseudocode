/*
 * XREFs of ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800BF7D4
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     RoundIntermediateSize @ 0x1800BFA1C (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a1,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  int v13; // xmm3_4
  float *v14; // rax
  float *v15; // rax
  float *v16; // rax
  int v17; // xmm1_4
  __int128 v18; // xmm0
  float v19[9]; // [rsp+28h] [rbp-E0h] BYREF
  float v20[7]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 v21; // [rsp+70h] [rbp-98h] BYREF
  float v22; // [rsp+80h] [rbp-88h]
  float v23; // [rsp+84h] [rbp-84h]
  float v24[3]; // [rsp+98h] [rbp-70h] BYREF
  float v25; // [rsp+A4h] [rbp-64h]
  float v26; // [rsp+A8h] [rbp-60h]
  float v27; // [rsp+ACh] [rbp-5Ch]
  __int128 v28; // [rsp+B0h] [rbp-58h] BYREF
  int v29; // [rsp+C0h] [rbp-48h]
  int v30; // [rsp+C4h] [rbp-44h]

  v2 = *((_QWORD *)a1 + 3);
  v4 = *(_QWORD *)a2;
  CDrawListBitmap::GetSize((CDrawListBitmap *)v2, &v21);
  v6 = *(float *)(v2 + 92) - *(float *)(v2 + 84);
  v7 = *(float *)(v2 + 96) - *(float *)(v2 + 88);
  v8 = (float)(int)v21;
  v9 = (float)SDWORD1(v21);
  v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(((double (*)(void))RoundIntermediateSize)()));
  v11 = RoundIntermediateSize();
  v24[1] = 0.0;
  v24[2] = 0.0;
  *(_QWORD *)((char *)&v21 + 4) = 0LL;
  *((float *)a2 + 3) = v11;
  *((float *)a2 + 2) = v10;
  *((float *)a2 + 5) = v11 / v7;
  *(float *)&v21 = v8;
  *((float *)a2 + 4) = v10 / v6;
  v12 = (float)(1.0 / *((float *)a2 + 2)) * *((float *)a1 + 4);
  v13 = *(_DWORD *)(v2 + 84) ^ _xmm;
  v25 = (float)(1.0 / *((float *)a2 + 3)) * *((float *)a1 + 5);
  v24[0] = v12;
  *((float *)&v21 + 3) = v9;
  v29 = v13;
  v26 = 0.0 - (float)(v12 * 0.0);
  v30 = *(_DWORD *)(v2 + 88) ^ _xmm;
  v23 = 0.0 - (float)(v9 * 0.0);
  v27 = 0.0 - (float)(v25 * 0.0);
  v28 = _xmm;
  v22 = 0.0 - (float)(v8 * 0.0);
  v14 = Matrix3x3::operator*((float *)(v2 + 48), v19, (float *)&v21);
  v15 = Matrix3x3::operator*(v14, (float *)&v21, (float *)&v28);
  v16 = Matrix3x3::operator*(v15, v20, v24);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)v16;
  *(_OWORD *)(v4 + 64) = *((_OWORD *)v16 + 1);
  *(float *)&v16 = v16[8];
  *(_QWORD *)&v21 = 0LL;
  *(_DWORD *)(v4 + 80) = (_DWORD)v16;
  v17 = *((_DWORD *)a2 + 3);
  DWORD2(v21) = *((_DWORD *)a2 + 2);
  HIDWORD(v21) = v17;
  v18 = v21;
  *(_BYTE *)(v4 + 101) = 1;
  *(_OWORD *)(v4 + 84) = v18;
  *(_BYTE *)(v4 + 102) = *(_BYTE *)(v2 + 102);
}
