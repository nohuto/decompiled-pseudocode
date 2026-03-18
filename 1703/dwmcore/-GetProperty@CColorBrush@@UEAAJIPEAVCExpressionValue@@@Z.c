/*
 * XREFs of ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18008BC50
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int128 v4; // xmm0

  v3 = 0;
  if ( a2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1Du);
  }
  else
  {
    *((_DWORD *)a3 + 16) = 70;
    v4 = *((_OWORD *)this + 5);
    *((_BYTE *)a3 + 68) = 1;
    *(_OWORD *)a3 = v4;
  }
  return v3;
}
