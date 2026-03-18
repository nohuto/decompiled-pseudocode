/*
 * XREFs of ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801C8CAC
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall D2DMatrixHelper::TransformRectConservative(
        D2DMatrixHelper *this,
        const struct D2D_RECT_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float bottom; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  unsigned int v10; // xmm0_4
  float *v11; // rcx
  float v12; // xmm6_4
  float v13; // xmm3_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  __int128 v17; // [rsp+0h] [rbp-30h] BYREF
  float v18; // [rsp+10h] [rbp-20h]
  int v19; // [rsp+14h] [rbp-1Ch]
  __int64 v20; // [rsp+18h] [rbp-18h] BYREF

  v4 = *((float *)this + 1);
  v5 = *(float *)this;
  bottom = a2->bottom;
  v7 = a2->top * *(float *)this;
  v8 = (float)((float)(a2->right * v4) + (float)(a2->left * *(float *)this)) + a2[1].left;
  HIDWORD(v17) = *((_DWORD *)this + 3);
  v9 = (float)(bottom * v4) + v7;
  v18 = v5;
  v10 = *((_DWORD *)this + 2);
  v11 = (float *)&v17 + 1;
  *(_QWORD *)&v17 = __PAIR64__(LODWORD(v4), v10);
  DWORD2(v17) = v10;
  v12 = v8;
  v19 = HIDWORD(v17);
  v13 = v9 + a2[1].top;
  v14 = v13;
  do
  {
    v15 = (float)((float)(a2->left * *(v11 - 1)) + (float)(a2->right * *v11)) + a2[1].left;
    v16 = (float)((float)(a2->top * *(v11 - 1)) + (float)(a2->bottom * *v11)) + a2[1].top;
    if ( v15 <= v8 )
      v8 = (float)((float)(a2->left * *(v11 - 1)) + (float)(a2->right * *v11)) + a2[1].left;
    if ( v16 <= v13 )
      v13 = (float)((float)(a2->top * *(v11 - 1)) + (float)(a2->bottom * *v11)) + a2[1].top;
    if ( v12 <= v15 )
      v12 = (float)((float)(a2->left * *(v11 - 1)) + (float)(a2->right * *v11)) + a2[1].left;
    if ( v14 <= v16 )
      v14 = (float)((float)(a2->top * *(v11 - 1)) + (float)(a2->bottom * *v11)) + a2[1].top;
    v11 += 2;
  }
  while ( v11 - 1 != (float *)&v20 );
  *(_QWORD *)&v17 = __PAIR64__(LODWORD(v13), LODWORD(v8));
  *((_QWORD *)&v17 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v12));
  *(_OWORD *)&a3->m11 = v17;
}
