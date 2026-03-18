/*
 * XREFs of ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180070CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorBrush::GetProperty(CColorBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  __int128 v4; // xmm0

  v3 = 0;
  if ( a2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1Du);
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
