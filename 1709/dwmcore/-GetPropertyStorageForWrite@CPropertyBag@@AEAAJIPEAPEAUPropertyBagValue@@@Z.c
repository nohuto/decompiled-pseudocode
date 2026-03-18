/*
 * XREFs of ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x1800A6450
 * Callers:
 *     ??$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x1800A5900 (--$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DM.c)
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x1800A5E50 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 *     ??$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x1801826E4 (--$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyBag::GetPropertyStorageForWrite(CPropertyBag *this, int a2, struct PropertyBagValue **a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rax
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7 = a2;
  v3 = 0;
  v8 = 0LL;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &v7);
  if ( v5 )
  {
    *a3 = (struct PropertyBagValue *)v5[1];
  }
  else
  {
    v3 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070490, 0x255u);
  }
  return v3;
}
