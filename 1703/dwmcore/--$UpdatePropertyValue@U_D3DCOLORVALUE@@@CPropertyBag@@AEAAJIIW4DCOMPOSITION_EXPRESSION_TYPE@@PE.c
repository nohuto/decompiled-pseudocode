/*
 * XREFs of ??$UpdatePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x18002347C
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$AddPropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180022ED8 (--$AddPropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D.c)
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180023014 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyBag::UpdatePropertyValue<_D3DCOLORVALUE>(
        CResource *a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !a2 )
  {
    v5 = CPropertyBag::AddPropertyValue<_D3DCOLORVALUE>(a1, a3, a4, a5);
    v6 = v5;
    if ( v5 >= 0 )
      return v6;
    v8 = 275;
LABEL_9:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v8);
    return v6;
  }
  if ( a2 != 1 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x11Bu);
    return v6;
  }
  v5 = CPropertyBag::ChangePropertyValue<_D3DCOLORVALUE>(a1, a3, a4, a5);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 279;
    goto LABEL_9;
  }
  return v6;
}
