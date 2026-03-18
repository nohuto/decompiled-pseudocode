/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18011C1B4
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180182980 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x180191720 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v4; // al
  float v5; // xmm4_4
  float v6; // xmm5_4
  float v8; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm3_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm2_4

  *((_BYTE *)this + 64) &= 0xFCu;
  v4 = *((_BYTE *)this + 64);
  v5 = a4 * *((float *)this + 8);
  v6 = (float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this);
  v8 = a2 * *((float *)this + 1);
  v11 = a4 * *((float *)this + 9);
  v12 = a2 * *((float *)this + 2);
  v13 = a3 * *((float *)this + 6);
  v14 = (float)(v8 + (float)(a3 * *((float *)this + 5))) + v11;
  v15 = a4;
  v16 = a4 * *((float *)this + 11);
  v17 = (float)(a2 * *((float *)this + 3)) + (float)(a3 * *((float *)this + 7));
  *((float *)this + 12) = (float)(v6 + v5) + *((float *)this + 12);
  v18 = (float)(v12 + v13) + (float)(v15 * *((float *)this + 10));
  *((float *)this + 13) = v14 + *((float *)this + 13);
  v19 = (float)(v17 + v16) + *((float *)this + 15);
  v20 = v18 + *((float *)this + 14);
  *((float *)this + 15) = v19;
  *((float *)this + 14) = v20;
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - 1.0)) & _xmm);
  if ( v21 >= 0.000081380211 )
  {
    *((_BYTE *)this + 65) |= 0x3Fu;
    *((_BYTE *)this + 64) = v4 | 0xF0;
  }
  *((_BYTE *)this + 65) &= 0x3Fu;
}
