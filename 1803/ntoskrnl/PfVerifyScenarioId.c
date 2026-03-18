/*
 * XREFs of PfVerifyScenarioId @ 0x140529254
 * Callers:
 *     PfVerifyScenarioBuffer @ 0x140528280 (PfVerifyScenarioBuffer.c)
 *     PfVerifyTraceBuffer @ 0x1405290D8 (PfVerifyTraceBuffer.c)
 * Callees:
 *     <none>
 */

bool __fastcall PfVerifyScenarioId(__int64 a1)
{
  int v1; // eax
  __int64 i; // rdx

  v1 = 29;
  for ( i = 29LL; i >= 0; --i )
  {
    if ( !*(_WORD *)(a1 + 2 * i) )
      break;
    --v1;
  }
  return v1 > 0;
}
