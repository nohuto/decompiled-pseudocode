/*
 * XREFs of ?DetermineCoordinateSpace@CKeyframeAnimation@@CAJW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@PEAW4KeyframeAnimationCoordinateSpace@@@Z @ 0x1800BC708
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::DetermineCoordinateSpace(int a1, int a2, int *a3)
{
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a1 - 18;
  if ( v4 && (v7 = v4 - 17) != 0 && (v8 = v7 - 17) != 0 && (v9 = v8 - 17) != 0 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v5 = 1;
        goto LABEL_3;
      }
      v11 = 1149;
LABEL_19:
      v3 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, v11);
      return v3;
    }
    if ( a2 < 0 )
      goto LABEL_18;
    v5 = 2;
    if ( a2 > 1 )
    {
      if ( a2 == 2 )
      {
        v5 = 4;
        goto LABEL_3;
      }
      v5 = 3;
      if ( a2 == 3 )
      {
        v5 = 5;
        goto LABEL_3;
      }
      if ( a2 != 4 )
      {
LABEL_18:
        v11 = 1139;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_3:
  *a3 = v5;
  return v3;
}
