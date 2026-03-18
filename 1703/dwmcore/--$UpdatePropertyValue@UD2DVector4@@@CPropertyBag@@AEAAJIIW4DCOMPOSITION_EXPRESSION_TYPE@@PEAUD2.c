/*
 * XREFs of ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x18017C5C0
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x18017C038 (--$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVec.c)
 *     ??$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x18017C454 (--$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue<D2DVector4>(
        CResource *a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v6 = CPropertyBag::AddPropertyValue<D2DVector4>(a1, a3, a4, a5);
    v5 = v6;
    if ( v6 >= 0 )
      return v5;
    v8 = 275;
    goto LABEL_8;
  }
  if ( a2 == 1 )
  {
    v6 = CPropertyBag::ChangePropertyValue<bool>(a1, a3, a4, a5);
    v5 = v6;
    if ( v6 >= 0 )
      return v5;
    v8 = 279;
LABEL_8:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v8);
    return v5;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Bu);
  return v5;
}
