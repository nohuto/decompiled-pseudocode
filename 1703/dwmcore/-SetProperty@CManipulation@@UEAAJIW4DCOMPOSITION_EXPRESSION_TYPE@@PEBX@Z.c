/*
 * XREFs of ?SetProperty@CManipulation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801681B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x247u);
  }
  return v3;
}
