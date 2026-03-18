/*
 * XREFs of PpmBeginProfileAccumulation @ 0x14045EF8C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x14081FF4C (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 2840) = a2;
}
