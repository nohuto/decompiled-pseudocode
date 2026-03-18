/*
 * XREFs of ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180174760
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800704D8 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNineGridBrush::GetProperty(CNineGridBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  float *InsetFieldPointer; // rax
  __int64 v5; // r8

  v3 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( InsetFieldPointer )
  {
    *(float *)v5 = *InsetFieldPointer;
    *(_DWORD *)(v5 + 64) = 18;
    *(_BYTE *)(v5 + 68) = 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xEAu);
  }
  return v3;
}
