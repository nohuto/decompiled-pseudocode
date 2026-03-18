/*
 * XREFs of ?SetProperty@CDropShadow@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180172070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x180171ED8 (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 *     ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x180171F1C (-SetColor@CDropShadow@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x180171FE4 (-SetOffset@CDropShadow@@AEAAXMMM@Z.c)
 *     ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x180172038 (-SetOpacity@CDropShadow@@AEAAXM@Z.c)
 */

__int64 __fastcall CDropShadow::SetProperty(CDropShadow *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 18 )
  {
    if ( !a2 )
    {
      CDropShadow::SetBlurRadius(a1, *a4);
      return v4;
    }
    if ( a2 == 4 )
    {
      CDropShadow::SetOpacity(a1, *a4);
      return v4;
    }
    goto LABEL_11;
  }
  if ( a3 == 52 )
  {
    if ( a2 == 3 )
    {
      CDropShadow::SetOffset(a1, *a4, a4[1], a4[2]);
      return v4;
    }
LABEL_11:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x94u);
    return v4;
  }
  if ( a3 != 70 || a2 != 1 )
    goto LABEL_11;
  CDropShadow::SetColor(
    a1,
    COERCE_FLOAT(*(_OWORD *)a4),
    COERCE_FLOAT(HIDWORD(*(_QWORD *)a4)),
    COERCE_FLOAT(*((_QWORD *)a4 + 1)),
    COERCE_FLOAT(HIDWORD(*(_OWORD *)a4)));
  return v4;
}
