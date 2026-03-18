/*
 * XREFs of ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800C4524
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18003E7DC (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a1 - 11;
  if ( v4 && (v5 = v4 - 7) != 0 && (v8 = v5 - 17) != 0 && (v9 = v8 - 17) != 0 && (v10 = v9 - 17) != 0 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v6 = 1;
        goto LABEL_4;
      }
      v12 = 1402;
LABEL_20:
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v12);
      return v3;
    }
    if ( a2 < 0 )
      goto LABEL_19;
    v6 = 2;
    if ( a2 > 1 )
    {
      if ( a2 == 2 )
      {
        v6 = 4;
        goto LABEL_4;
      }
      v6 = 3;
      if ( a2 == 3 )
      {
        v6 = 5;
        goto LABEL_4;
      }
      if ( a2 != 4 )
      {
LABEL_19:
        v12 = 1392;
        goto LABEL_20;
      }
    }
  }
  else
  {
    v6 = 0;
  }
LABEL_4:
  *a3 = v6;
  return v3;
}
