/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180175670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x1801755B0 (-GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(
        CRectangleGeometry *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  signed int Property; // eax
  unsigned int v5; // edi
  float v7; // [rsp+58h] [rbp+20h] BYREF

  Property = CRectangleGeometry::GetProperty(this, a2, &v7);
  v5 = Property;
  if ( Property < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Property, 0x178u);
  }
  else
  {
    *(float *)a3 = v7;
    *((_DWORD *)a3 + 16) = 18;
    *((_BYTE *)a3 + 68) = 1;
  }
  return v5;
}
