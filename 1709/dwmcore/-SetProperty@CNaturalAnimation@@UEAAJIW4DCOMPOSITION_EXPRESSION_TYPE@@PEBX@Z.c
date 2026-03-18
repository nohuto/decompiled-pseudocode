/*
 * XREFs of ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801741A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x180174248 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1801743A8 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 *     ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z @ 0x1801744D0 (-SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z.c)
 *     ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x180174548 (-SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetProperty(CNaturalAnimation *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  signed int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v5 = CNaturalAnimation::SetScalarProperty(a1, a2, *a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 577;
      goto LABEL_14;
    case 35:
      v5 = CNaturalAnimation::SetVector2Property(a1, a2, (const struct D2DVector2 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 581;
      goto LABEL_14;
    case 42:
      v5 = CNaturalAnimation::SetTimespanProperty(a1, a2, (const struct TimeSpan *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 589;
      goto LABEL_14;
    case 52:
      v5 = CNaturalAnimation::SetVector3Property(a1, a2, (const struct D2DVector3 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 585;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v7);
      return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x251u);
  return v4;
}
