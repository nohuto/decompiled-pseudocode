/*
 * XREFs of ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1801C0FFC
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180065244 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800C1C60 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CShapeTree::ComputePartialIntermediate(
        struct CMILMatrix *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        float *a5)
{
  int v5; // xmm2_4
  int v6; // xmm0_4
  const struct CMILMatrix *v7; // rdx
  int v8; // xmm1_4
  signed int v9; // r9d
  int v10; // r9d
  float *v11; // r10
  float *v12; // r11
  float v13; // xmm7_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm0_4
  char result; // al
  __int128 v22; // [rsp+28h] [rbp-21h] BYREF
  __int128 v23; // [rsp+38h] [rbp-11h] BYREF
  int v24; // [rsp+48h] [rbp-1h] BYREF
  int v25; // [rsp+4Ch] [rbp+3h]
  int v26; // [rsp+50h] [rbp+7h]
  int v27; // [rsp+54h] [rbp+Bh]
  int v28; // [rsp+58h] [rbp+Fh]
  int v29; // [rsp+5Ch] [rbp+13h]
  int v30; // [rsp+60h] [rbp+17h]
  int v31; // [rsp+64h] [rbp+1Bh]

  v5 = *a4;
  v6 = a4[2];
  v7 = a1;
  v25 = a4[1];
  v27 = v25;
  v8 = a4[3];
  v9 = 0;
  v29 = v8;
  v31 = v8;
  v24 = v5;
  v26 = v6;
  v28 = v6;
  v30 = v5;
  do
  {
    if ( !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)&v24 + v9,
            v7,
            (struct D2D_POINT_2F *)&v24 + v9) )
      return 0;
    v9 = v10 + 1;
  }
  while ( (unsigned int)v9 < 4 );
  *(_QWORD *)&v23 = 4LL;
  *((_QWORD *)&v23 + 1) = &v24;
  v22 = v23;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
    (float *)&v23,
    (__int64)&v22);
  v13 = *v11;
  v14 = *(float *)&v23 - 1.0;
  v15 = *((float *)&v23 + 1) - 1.0;
  v16 = *((float *)&v23 + 2) + 1.0;
  v17 = *((float *)&v23 + 3) + 1.0;
  if ( *v11 > (float)(*(float *)&v23 - 1.0) )
    v14 = *v11;
  v18 = v11[1];
  v19 = *((float *)&v23 + 1) - 1.0;
  if ( v18 > v15 )
  {
    v15 = v11[1];
    v19 = v15;
  }
  if ( v16 > v11[2] )
    v16 = v11[2];
  if ( v17 > v11[3] )
    v17 = v11[3];
  if ( v16 <= v14 || v17 <= v19 )
  {
    v15 = 0.0;
    v14 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  result = 1;
  *a5 = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v14) * *v12;
  a5[1] = (float)(COERCE_FLOAT(LODWORD(v18) ^ _xmm) + v15) * v12[1];
  a5[2] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) + v16) * *v12;
  a5[3] = (float)(v17 + COERCE_FLOAT(LODWORD(v18) ^ _xmm)) * v12[1];
  return result;
}
