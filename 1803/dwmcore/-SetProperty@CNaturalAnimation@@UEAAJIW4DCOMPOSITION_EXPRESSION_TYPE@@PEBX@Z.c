/*
 * XREFs of ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019D3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x18019D498 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x18019D6AC (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 *     ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z @ 0x18019D7D8 (-SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z.c)
 *     ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x18019D850 (-SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetProperty(CNaturalAnimation *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v5 = CNaturalAnimation::SetScalarProperty(a1, a2, *a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 555;
      goto LABEL_14;
    case 35:
      v5 = CNaturalAnimation::SetVector2Property(a1, a2, (const struct D2DVector2 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 559;
      goto LABEL_14;
    case 42:
      v5 = CNaturalAnimation::SetTimespanProperty(a1, a2, (const struct TimeSpan *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 567;
      goto LABEL_14;
    case 52:
      v5 = CNaturalAnimation::SetVector3Property(a1, a2, (const struct D2DVector3 *)a4);
      v4 = v5;
      if ( v5 >= 0 )
        return v4;
      v7 = 563;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v7);
      return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x23Bu);
  return v4;
}
