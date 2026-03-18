/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800A4BEC
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, float a4, unsigned int a5)
{
  __m128 v5; // xmm2
  unsigned int v6; // ebx
  int v9; // r14d
  char v10; // bp
  float v12; // xmm7_4
  int v13; // eax
  float v14; // xmm6_4
  __m128 v15; // rt1
  unsigned int v16; // [rsp+20h] [rbp-58h]
  float v17; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v9 = 0;
  v10 = 0;
  if ( (*(_BYTE *)(a1 + 456) & 0x40) != 0 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x301u);
    return v6;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 >= 0.0 )
    {
      if ( a2 > 0.0 )
      {
        v9 = (int)ceilf_0(a2) - 1;
        v14 = a2 - floorf_0(a2);
        if ( v14 != 0.0 )
          *(float *)(a1 + 428) = v14;
      }
    }
    else
    {
      v9 = -1;
    }
  }
  switch ( a3 )
  {
    case 0:
      goto LABEL_4;
    case 1:
      a3 = 0;
      goto LABEL_24;
    case 2:
      goto LABEL_4;
    case 3:
      a3 = 2;
LABEL_24:
      v10 = 1;
      goto LABEL_4;
  }
  if ( a3 != 4 )
  {
    v16 = 836;
LABEL_27:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, v16);
    return v6;
  }
  v9 = 0;
LABEL_4:
  if ( a5 > 2 )
  {
    v16 = 855;
    goto LABEL_27;
  }
  *(_BYTE *)(a1 + 457) &= ~2u;
  *(_BYTE *)(a1 + 457) |= 2 * v10;
  *(_DWORD *)(a1 + 420) = v9;
  *(_DWORD *)(a1 + 452) = a5;
  *(_DWORD *)(a1 + 448) = a3;
  if ( a4 > 0.0 )
  {
    v12 = a4 * 1000.0;
    if ( COERCE_UNSIGNED_INT(fabs(a4 * 1000.0)) > 0x497FFFF0 )
    {
      v5.m128_f32[0] = (float)(int)v12 - v12;
      v15.m128_f32[0] = FLOAT_N0_5;
      v13 = (int)v12 - _mm_cmple_ss(v5, v15).m128_u32[0];
    }
    else
    {
      v17 = v12 + 6291456.25;
      v13 = (int)(LODWORD(v17) << 10) >> 11;
    }
    *(_DWORD *)(a1 + 376) = v13;
  }
  return v6;
}
