/*
 * XREFs of ??$UpdatePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1800A63A0
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1800A5900 (--$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DM.c)
 *     ??$AddPropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1800A59F4 (--$AddPropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatr.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue<D2DMatrix>(
        CResource *a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  signed int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v5 = CPropertyBag::AddPropertyValue<D2DMatrix>(a1, a3, a4, a5);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v8 = 275;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v8);
    return v6;
  }
  if ( a2 != 1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x11Bu);
    return v6;
  }
  v5 = CPropertyBag::ChangePropertyValue<D2DMatrix>(a1, a3, a4, a5);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 279;
    goto LABEL_9;
  }
  return v6;
}
