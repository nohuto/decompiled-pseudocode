/*
 * XREFs of ?SetProperty@CManipulation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180199AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulation::SetProperty(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx

  if ( a3 == 17 && a2 == 9 )
  {
    return 0;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x236u);
  }
  return v3;
}
