/*
 * XREFs of ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180162130
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180161D20 (-GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::GetProperty(CLinearGradientBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int Property; // eax
  __int64 v5; // xmm0_8

  v3 = 0;
  if ( a2 == 8 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v5 = *((_QWORD *)this + 17);
    goto LABEL_7;
  }
  if ( a2 == 9 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v5 = *((_QWORD *)this + 18);
LABEL_7:
    *((_BYTE *)a3 + 68) = 1;
    *(_QWORD *)a3 = v5;
    return v3;
  }
  Property = CSurfaceBrush::GetProperty(this, a2, a3);
  v3 = Property;
  if ( Property < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Property, 0x28u);
  return v3;
}
