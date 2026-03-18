/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60
 * Callers:
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18002B4C0 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800D23B0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v5; // xmm3_4
  float v7; // xmm4_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm8_4
  float v13; // xmm7_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm2_4

  v5 = *((float *)this + 3);
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v7 >= 0.00012207031
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 7)) & _xmm), v9 >= 0.00012207031)
    || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 11)) & _xmm), v10 >= 0.00012207031)
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 15) - 1.0)) & _xmm), v11 >= 0.00012207031) )
  {
    v14 = *((float *)this + 7);
    v15 = (float)(v5 * a2) + *(float *)this;
    v16 = (float)(v5 * a3) + *((float *)this + 1);
    v17 = (float)(v5 * a4) + *((float *)this + 2);
    *(float *)this = v15;
    *((float *)this + 1) = v16;
    v18 = (float)(v14 * a2) + *((float *)this + 4);
    v19 = (float)(v14 * a3) + *((float *)this + 5);
    *((float *)this + 2) = v17;
    v20 = (float)(v14 * a4) + *((float *)this + 6);
    v21 = *((float *)this + 11);
    *((float *)this + 4) = v18;
    *((float *)this + 5) = v19;
    v22 = (float)(v21 * a2) + *((float *)this + 8);
    *((float *)this + 6) = v20;
    v23 = (float)(v21 * a3) + *((float *)this + 9);
    v24 = *((float *)this + 15);
    *((float *)this + 8) = v22;
    *((float *)this + 9) = v23;
    v25 = (float)(v24 * a2) + *((float *)this + 12);
    v26 = (float)(v24 * a3) + *((float *)this + 13);
    *((float *)this + 10) = (float)(v21 * a4) + *((float *)this + 10);
    v27 = (float)(v24 * a4) + *((float *)this + 14);
    *((float *)this + 12) = v25;
    *((float *)this + 13) = v26;
    *((float *)this + 14) = v27;
  }
  else
  {
    v12 = a3 + *((float *)this + 13);
    v13 = a4 + *((float *)this + 14);
    *((float *)this + 12) = a2 + *((float *)this + 12);
    *((float *)this + 13) = v12;
    *((float *)this + 14) = v13;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((_BYTE *)this + 65) &= 0x3Fu;
}
