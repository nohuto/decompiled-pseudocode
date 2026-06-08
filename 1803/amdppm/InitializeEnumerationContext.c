/*
 * XREFs of InitializeEnumerationContext @ 0x1C0003900
 * Callers:
 *     GetPerfDomain @ 0x1C0021CB0 (GetPerfDomain.c)
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002FF58 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0030464 (RetrieveEfficiencyClassInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeEnumerationContext(__int64 a1, int a2, __int64 a3)
{
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = a1;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)(a3 + 24) = a2;
}
