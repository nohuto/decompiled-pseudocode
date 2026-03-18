/*
 * XREFs of ?GetPropertyStorageForWrite@CPropertyBag@@AEAAJIPEAPEAUPropertyBagValue@@@Z @ 0x180031BA0
 * Callers:
 *     ??$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAU_D3DCOLORVALUE@@@Z @ 0x180023014 (--$ChangePropertyValue@U_D3DCOLORVALUE@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA.c)
 *     ??$ChangePropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector3@@@Z @ 0x1800230D4 (--$ChangePropertyValue@UD2DVector3@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     ??$ChangePropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector2@@@Z @ 0x1800232B8 (--$ChangePropertyValue@UD2DVector2@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D.c)
 *     ??$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DMatrix@@@Z @ 0x180031678 (--$ChangePropertyValue@UD2DMatrix@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DM.c)
 *     ??$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z @ 0x18017C454 (--$ChangePropertyValue@_N@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x255u);
  }
  return v3;
}
