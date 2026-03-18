/*
 * XREFs of ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18003E380
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x18003EB04 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801977E8 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 */

__int64 __fastcall CKeyframeAnimation::SetIterationInfo(__int64 a1, float a2, int a3, float a4, unsigned int a5)
{
  __m128 v5; // xmm2
  unsigned int v6; // ebx
  int v9; // r14d
  char v10; // bp
  float v12; // xmm6_4
  float v13; // xmm7_4
  int v14; // eax
  __m128 v15; // rt1
  unsigned int v16; // [rsp+20h] [rbp-58h]
  float v17; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v9 = 0;
  v10 = 0;
  if ( *(char *)(a1 + 508) < 0 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x3EEu);
    return v6;
  }
  if ( a2 != 1.0 )
  {
    if ( a2 < 0.0 )
    {
      v9 = -1;
    }
    else if ( a2 > 0.0 )
    {
      v9 = (int)ceilf_0(a2) - 1;
      v12 = a2 - floorf_0(a2);
      if ( v12 != 0.0 )
        *(float *)(a1 + 480) = v12;
    }
  }
  switch ( a3 )
  {
    case 0:
      goto LABEL_4;
    case 1:
      a3 = 0;
LABEL_21:
      v10 = 1;
      goto LABEL_4;
    case 2:
      goto LABEL_4;
    case 3:
      a3 = 2;
      goto LABEL_21;
  }
  if ( a3 != 4 )
  {
    v16 = 1073;
LABEL_27:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, v16);
    return v6;
  }
  v9 = 0;
LABEL_4:
  if ( a5 > 2 )
  {
    v16 = 1092;
    goto LABEL_27;
  }
  *(_BYTE *)(a1 + 509) &= ~4u;
  *(_BYTE *)(a1 + 509) |= 4 * v10;
  *(_DWORD *)(a1 + 472) = v9;
  *(_DWORD *)(a1 + 504) = a5;
  *(_DWORD *)(a1 + 500) = a3;
  if ( a4 > 0.0 )
  {
    v13 = a4 * 1000.0;
    if ( COERCE_UNSIGNED_INT(fabs(a4 * 1000.0)) > 0x497FFFF0 )
    {
      v5.m128_f32[0] = (float)(int)v13 - v13;
      v15.m128_f32[0] = FLOAT_N0_5;
      v14 = (int)v13 - _mm_cmple_ss(v5, v15).m128_u32[0];
    }
    else
    {
      v17 = v13 + 6291456.25;
      v14 = (int)(LODWORD(v17) << 10) >> 11;
    }
    *(_DWORD *)(a1 + 416) = v14;
  }
  return v6;
}
