/*
 * XREFs of ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x1800208F4
 * Callers:
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18000D88C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FEFC (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall InflateRectFToPointAndSizeL(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebx
  float *v5; // rcx
  __int64 v6; // r9
  unsigned __int32 *v7; // r10
  float v8; // xmm1_4
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  int v11; // ecx
  __m128 v12; // xmm1
  unsigned __int32 v13; // edx
  __m128 v14; // xmm0
  __int32 v15; // r8d
  unsigned __int32 v16; // eax

  v4 = 0;
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a1, a2, a3, a1)
    && (v8 = *v5, *v5 >= -1073741800.0)
    && v8 <= 1073741800.0
    && (v9 = (__m128)*((unsigned int *)v5 + 1), v9.m128_f32[0] >= -1073741800.0)
    && v9.m128_f32[0] <= 1073741800.0
    && v5[2] <= 1073741800.0
    && v5[3] <= 1073741800.0 )
  {
    v10 = (__m128)*(unsigned int *)v5;
    v11 = (int)v8;
    v12.m128_f32[0] = (float)(int)v8;
    v13 = v11 + _mm_cmplt_ss(v10, v12).m128_u32[0];
    *v7 = v13;
    v12.m128_f32[0] = (float)(int)v9.m128_f32[0];
    v14 = _mm_cmplt_ss(v9, v12);
    v12.m128_i32[0] = *(_DWORD *)(v6 + 8);
    v15 = (int)v9.m128_f32[0] + v14.m128_i32[0];
    v7[1] = v15;
    v14.m128_f32[0] = (float)(int)v12.m128_f32[0];
    v16 = (int)v12.m128_f32[0] - v13 - _mm_cmplt_ss(v14, v12).m128_u32[0];
    v14.m128_i32[0] = *(_DWORD *)(v6 + 12);
    v7[2] = v16;
    *(float *)&a4 = (float)(int)v14.m128_f32[0];
    v7[3] = (int)v14.m128_f32[0] - v15 - _mm_cmplt_ss(*(__m128 *)&a4, v14).m128_u32[0];
  }
  else
  {
    v4 = -2003304438;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304438, 0xF6u);
  }
  return v4;
}
