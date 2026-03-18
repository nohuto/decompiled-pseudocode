/*
 * XREFs of ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180187D00
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800483C8 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800484E8 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     RoundIntermediateSize @ 0x1800BFA1C (RoundIntermediateSize.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x180155AFC (-ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 */

void __fastcall CBrushRenderingGraph::ConfigureIntermediateFromInput(
        CBrushRenderingGraph *this,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a2,
        struct CBrushRenderingGraph::IntermediateConfigurationOutputs *a3)
{
  __int64 v3; // rdi
  __int64 v5; // r14
  int v7; // eax
  __int64 v8; // xmm0_8
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm7_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18[10]; // [rsp+28h] [rbp-39h] BYREF
  __int128 v19; // [rsp+50h] [rbp-11h] BYREF
  float v20; // [rsp+60h] [rbp-1h]
  float v21; // [rsp+64h] [rbp+3h]

  v3 = *((_QWORD *)a2 + 3);
  v5 = *(_QWORD *)a3;
  if ( *(_BYTE *)(v3 + 44) )
  {
    CDrawListBitmap::GetSize((CDrawListBitmap *)v3, &v19);
    v7 = DWORD1(v19);
    *(_QWORD *)((char *)&v19 + 4) = 0LL;
    *(float *)&v19 = (float)(int)v19;
    *((float *)&v19 + 3) = (float)v7;
    v20 = 0.0 - (float)(*(float *)&v19 * 0.0);
    v21 = 0.0 - (float)((float)v7 * 0.0);
    Matrix3x3::operator*((float *)(v3 + 48), v18, (float *)&v19);
  }
  else if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 56) + 8LL))(*(_QWORD *)(v3 + 56)) != 1
         || (int)CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
                   *(CSurfaceDrawListBrush **)(v3 + 56),
                   (struct Matrix3x3 *)v18) < 0 )
  {
    v8 = *((_QWORD *)a2 + 1);
    goto LABEL_7;
  }
  v8 = **(_QWORD **)&Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)v18, (struct D2D_VECTOR_2F)&v19);
LABEL_7:
  *((_QWORD *)a3 + 4) = v8;
  v9 = fmaxf(*((float *)a3 + 6), fminf(*((float *)a2 + 2), *((float *)a3 + 8)) * *((float *)a2 + 4));
  v10 = fmaxf(*((float *)a3 + 7), fminf(*((float *)a2 + 3), *((float *)a3 + 9)) * *((float *)a2 + 5));
  *((float *)a3 + 6) = v9;
  *((float *)a3 + 7) = v10;
  v11 = v10 * *((float *)a2 + 1);
  v12 = RoundIntermediateSize(*(float *)a2 * v9);
  v13 = RoundIntermediateSize(v11);
  *(_QWORD *)&v19 = 0LL;
  *((float *)a3 + 3) = v13;
  *((float *)a3 + 2) = v12;
  v14 = v12 / *(float *)a2;
  *((float *)a3 + 5) = v13 / *((float *)a2 + 1);
  *((float *)a3 + 4) = v14;
  v15 = *((_DWORD *)a3 + 3);
  DWORD2(v19) = *((_DWORD *)a3 + 2);
  HIDWORD(v19) = v15;
  *(_OWORD *)(v5 + 84) = v19;
  v16 = *((float *)a3 + 6) / *((float *)a3 + 2);
  v17 = *((float *)a3 + 7) / *((float *)a3 + 3);
  if ( v5 != -48 )
  {
    *(_DWORD *)(v5 + 52) = 0;
    *(_DWORD *)(v5 + 56) = 0;
    *(_DWORD *)(v5 + 60) = 0;
    *(_DWORD *)(v5 + 68) = 0;
    *(float *)(v5 + 48) = v16;
    *(float *)(v5 + 64) = v17;
    *(float *)(v5 + 72) = 0.0 - (float)(v16 * 0.0);
    *(float *)(v5 + 76) = 0.0 - (float)(v17 * 0.0);
    *(_DWORD *)(v5 + 80) = 1065353216;
  }
}
