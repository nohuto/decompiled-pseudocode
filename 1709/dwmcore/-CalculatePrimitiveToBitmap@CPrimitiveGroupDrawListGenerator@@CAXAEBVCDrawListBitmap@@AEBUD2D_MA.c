/*
 * XREFs of ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAXAEBVCDrawListBitmap@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x1801524C4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
        const struct CDrawListBitmap *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        struct Matrix3x3 *a3)
{
  float m21; // xmm12_4
  float v6; // xmm2_4
  float v7; // xmm11_4
  float v8; // xmm9_4
  float v9; // xmm12_4
  float dx; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm2_4
  float v13; // xmm8_4
  int v14; // [rsp+20h] [rbp-88h] BYREF
  int v15; // [rsp+24h] [rbp-84h]

  CDrawListBitmap::GetSize(a1, &v14);
  m21 = a2->m21;
  v6 = m21 * 0.0;
  v7 = (float)(a2->m11 * (float)v14) + (float)(a2->m12 * 0.0);
  v8 = (float)(a2->m12 * (float)v15) + (float)(a2->m11 * 0.0);
  v9 = (float)(m21 * (float)v14) + (float)(a2->m22 * 0.0);
  dx = a2->dx;
  v11 = (float)(a2->m22 * (float)v15) + v6;
  v12 = (float)((float)(a2->dy * (float)v15) + (float)(dx * 0.0)) + (float)(0.0 - (float)((float)v15 * 0.0));
  v13 = (float)((float)(dx * (float)v14) + (float)(a2->dy * 0.0)) + (float)(0.0 - (float)((float)v14 * 0.0));
  if ( a3 )
  {
    *((_DWORD *)a3 + 2) = 0;
    *((_DWORD *)a3 + 5) = 0;
    *(float *)a3 = v7;
    *((float *)a3 + 1) = v8;
    *((float *)a3 + 3) = v9;
    *((float *)a3 + 4) = v11;
    *((float *)a3 + 6) = v13;
    *((float *)a3 + 7) = v12;
    *((_DWORD *)a3 + 8) = 1065353216;
  }
}
