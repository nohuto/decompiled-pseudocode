/*
 * XREFs of ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18007D63C
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18007D430 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTileBrushUtils::CalculateViewboxToViewportMapping(
        float *a1,
        float *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6)
{
  double v6; // xmm3_8
  double v7; // xmm1_8
  double v8; // xmm5_8
  float v9; // xmm7_4
  float v10; // xmm2_4
  float v11; // xmm10_4
  float v12; // xmm8_4
  double v13; // xmm11_8
  float v14; // xmm15_4
  float v15; // xmm12_4
  float v16; // xmm13_4
  double v17; // xmm4_8
  double v18; // xmm6_8
  int v19; // r8d
  __int64 result; // rax
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm0_4
  float v23; // xmm0_4
  unsigned int v24; // xmm0_4
  int v25; // r9d
  unsigned __int64 v26; // [rsp+8h] [rbp-89h]
  __int128 v27; // [rsp+18h] [rbp-79h]
  float v28[6]; // [rsp+38h] [rbp-59h]

  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = a2[1];
  v10 = a2[3] - v9;
  v11 = *a2;
  v12 = a2[2] - *a2;
  v13 = 0.0;
  v14 = a1[1];
  v15 = a1[3] - v14;
  v16 = a1[2] - *a1;
  v17 = (float)(v16 / v12);
  v18 = (float)(v15 / v10);
  v19 = a3 - 2;
  if ( v19 )
  {
    if ( v19 != 1 )
      goto LABEL_3;
    v17 = fmax(v17, v18);
  }
  else
  {
    v17 = fmin(v17, v18);
  }
  v18 = v17;
LABEL_3:
  if ( a4 )
  {
    v25 = a4 - 1;
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        v13 = (float)(v16 + *a1);
        v6 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 + v11) ^ _xmm);
      }
    }
    else
    {
      *(_QWORD *)&v6 = COERCE_UNSIGNED_INT64(v12 * 0.5 + v11) ^ _xmm;
      v13 = v16 * 0.5 + *a1;
    }
  }
  else
  {
    v6 = COERCE_FLOAT(LODWORD(v11) ^ _xmm);
    v13 = *a1;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
    {
      *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64(v10 * 0.5 + v9) ^ _xmm;
      v8 = v15 * 0.5 + v14;
    }
    else if ( a5 == 2 )
    {
      v7 = COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 + v9) ^ _xmm);
      v8 = (float)(v15 + v14);
    }
  }
  else
  {
    v7 = COERCE_FLOAT(LODWORD(v9) ^ _xmm);
    v8 = v14;
  }
  result = a6;
  LODWORD(v27) = 0;
  HIDWORD(v27) = 0;
  *(float *)&v21 = v17;
  v26 = v21;
  *(float *)&v22 = v18;
  *(_QWORD *)((char *)&v27 + 4) = v22;
  v23 = v6 * v17 + v13;
  v28[0] = v23;
  *(float *)&v24 = v7 * v18 + v8;
  *(_QWORD *)&v28[1] = v24;
  *(_OWORD *)a6 = v26;
  v28[3] = FLOAT_1_0;
  *(_OWORD *)(a6 + 16) = v27;
  *(_OWORD *)(a6 + 32) = _xmm;
  *(_OWORD *)(a6 + 48) = *(_OWORD *)v28;
  *(_DWORD *)(a6 + 64) = 0;
  return result;
}
