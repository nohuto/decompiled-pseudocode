/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x1406E1AB0
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14054BD84 (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1406E21E0 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 832) = a2;
}
