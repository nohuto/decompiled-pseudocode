/*
 * XREFs of ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801615C0
 * Callers:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801616C0 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        float *a5)
{
  float v5; // xmm2_4
  bool IsEmpty; // al
  _OWORD *v7; // r8
  __int64 v8; // r9
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  bool result; // al
  float *v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  float v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(float *)(*(_QWORD *)(a1 + 496) + 96LL);
  *(_OWORD *)v18 = *a2;
  IsEmpty = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v18);
  v9 = v18[0];
  v10 = v18[1];
  v11 = v18[2];
  v12 = v18[3];
  if ( !IsEmpty )
  {
    v9 = v18[0] - v5;
    v10 = v18[1] - v5;
    v11 = v18[2] + v5;
    v12 = v18[3] + v5;
  }
  *(_OWORD *)v8 = *v7;
  if ( v9 > *(float *)v8 )
    *(float *)v8 = v9;
  if ( v10 > *(float *)(v8 + 4) )
    *(float *)(v8 + 4) = v10;
  if ( *(float *)(v8 + 8) > v11 )
    *(float *)(v8 + 8) = v11;
  if ( *(float *)(v8 + 12) > v12 )
    *(float *)(v8 + 12) = v12;
  if ( *(float *)(v8 + 8) <= *(float *)v8 || *(float *)(v8 + 12) <= *(float *)(v8 + 4) )
  {
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)v8 = 0LL;
  }
  *(_OWORD *)a5 = *(_OWORD *)v8;
  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a5);
  if ( !result )
  {
    v15 = v14[1] - v5;
    *v14 = *v14 - v5;
    v16 = v5 + v14[2];
    v17 = v5 + v14[3];
    v14[1] = v15;
    v14[2] = v16;
    v14[3] = v17;
  }
  return result;
}
