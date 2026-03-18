/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18013EE28
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801B6770 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801C8644 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v4; // xmm5_4
  char v5; // al
  char v6; // dl
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v10; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm3_4
  float v22; // xmm8_4
  float v23; // xmm3_4
  float v24; // xmm2_4

  v4 = a3 * *((float *)this + 4);
  v5 = *((_BYTE *)this + 65);
  v6 = *((_BYTE *)this + 64) & 0xFC;
  v7 = a2 * *(float *)this;
  *((_BYTE *)this + 64) = v6;
  v8 = a4 * *((float *)this + 8);
  v10 = a2 * *((float *)this + 1);
  v13 = a4 * *((float *)this + 9);
  v14 = a2 * *((float *)this + 2);
  v15 = (float)((float)(v4 + v7) + v8) + *((float *)this + 12);
  v16 = a3 * *((float *)this + 6);
  v17 = (float)(v10 + (float)(a3 * *((float *)this + 5))) + v13;
  v18 = a4;
  v19 = a4 * *((float *)this + 11);
  v20 = (float)(a2 * *((float *)this + 3)) + (float)(a3 * *((float *)this + 7));
  *((float *)this + 12) = v15;
  v21 = (float)(v14 + v16) + (float)(v18 * *((float *)this + 10));
  *((float *)this + 13) = v17 + *((float *)this + 13);
  v22 = (float)(v20 + v19) + *((float *)this + 15);
  v23 = v21 + *((float *)this + 14);
  *((float *)this + 15) = v22;
  *((float *)this + 14) = v23;
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - 1.0)) & _xmm);
  if ( v24 >= 0.000081380211 )
  {
    v5 |= 0x3Fu;
    *((_BYTE *)this + 64) = v6 | 0xF0;
    *((_BYTE *)this + 65) = v5;
  }
  *((_BYTE *)this + 65) = v5 & 0x3F;
}
