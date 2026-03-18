/*
 * XREFs of ?GetProperty@CColorGradientStop@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180159D40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorGradientStop::GetProperty(CColorGradientStop *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a2 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this + 14);
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_6;
  }
  if ( a2 == 1 )
  {
    *((_DWORD *)a3 + 16) = 70;
    *(_OWORD *)a3 = *(_OWORD *)((char *)this + 60);
LABEL_6:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x2Du);
  return v3;
}
