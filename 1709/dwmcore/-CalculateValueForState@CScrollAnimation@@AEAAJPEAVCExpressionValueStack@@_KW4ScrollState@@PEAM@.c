/*
 * XREFs of ?CalculateValueForState@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@PEAM@Z @ 0x180188AC0
 * Callers:
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180188B30 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801888C8 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180188974 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 */

__int64 __fastcall CScrollAnimation::CalculateValueForState(
        CScrollAnimation *a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        int a4,
        float *a5)
{
  int v5; // r9d
  signed int v6; // eax
  unsigned int v7; // ebx
  signed int v8; // eax

  v5 = a4 - 1;
  if ( !v5 )
  {
    v8 = CScrollAnimation::CalculateInContactValue(a1, a2, a3, a5);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x134u);
      return v7;
    }
    return 0;
  }
  if ( v5 != 1 )
  {
    *a5 = 0.0;
    return 0;
  }
  v6 = CScrollAnimation::CalculateInertiaValue(a1, a2, a3, a5);
  v7 = v6;
  if ( v6 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x13Du);
  return v7;
}
