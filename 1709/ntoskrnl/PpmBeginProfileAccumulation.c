/*
 * XREFs of PpmBeginProfileAccumulation @ 0x14059F63C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140850E70 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5416) = a2;
}
