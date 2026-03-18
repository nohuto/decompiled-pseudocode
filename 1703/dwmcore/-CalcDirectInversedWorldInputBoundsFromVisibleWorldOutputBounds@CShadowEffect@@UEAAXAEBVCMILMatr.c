/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CShadowEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180179490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

_OWORD *__fastcall CShadowEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  bool IsEmpty; // al
  _OWORD *v7; // r8
  _OWORD *v8; // r9
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  _OWORD *result; // rax
  float v15[6]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v15 = *a3;
  IsEmpty = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v15);
  v10 = v15[0];
  v11 = v15[1];
  v12 = v15[2];
  v13 = v15[3];
  if ( !IsEmpty )
  {
    v10 = v15[0] - v9;
    v11 = v15[1] - v9;
    v12 = v15[2] + v9;
    v13 = v15[3] + v9;
  }
  *(_OWORD *)a5 = *v8;
  if ( v10 > *(float *)a5 )
    *(float *)a5 = v10;
  if ( v11 > *(float *)(a5 + 4) )
    *(float *)(a5 + 4) = v11;
  if ( *(float *)(a5 + 8) > v12 )
    *(float *)(a5 + 8) = v12;
  if ( *(float *)(a5 + 12) > v13 )
    *(float *)(a5 + 12) = v13;
  if ( *(float *)(a5 + 8) <= *(float *)a5 || *(float *)(a5 + 12) <= *(float *)(a5 + 4) )
  {
    *(_QWORD *)(a5 + 8) = 0LL;
    *(_QWORD *)a5 = 0LL;
  }
  result = a6;
  *a6 = *v7;
  return result;
}
