/*
 * XREFs of ?GetProperty@CLinearGradientBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180170070
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLinearGradientBrush::GetProperty(CLinearGradientBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  __int64 v5; // xmm0_8

  v3 = 0;
  v4 = a2 - 4;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v5 = *((_QWORD *)this + 22);
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v5 = *((_QWORD *)this + 23);
LABEL_6:
    *((_BYTE *)a3 + 68) = 1;
    *(_QWORD *)a3 = v5;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x27u);
  return v3;
}
