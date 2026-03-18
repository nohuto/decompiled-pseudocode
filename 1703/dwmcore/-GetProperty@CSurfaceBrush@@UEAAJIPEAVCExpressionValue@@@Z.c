/*
 * XREFs of ?GetProperty@CSurfaceBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180161D20
 * Callers:
 *     ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180162130 (-GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceBrush::GetProperty(CSurfaceBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // xmm0_4

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    v5 = *((_DWORD *)this + 20);
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = *((_DWORD *)this + 21);
LABEL_6:
    *(_DWORD *)a3 = v5;
    *((_BYTE *)a3 + 68) = 1;
    *((_DWORD *)a3 + 16) = 18;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x52u);
  return v3;
}
