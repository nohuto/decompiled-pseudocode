/*
 * XREFs of PpmBeginProfileAccumulation @ 0x140584DA4
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x1408C19C4 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 5416) = a2;
}
