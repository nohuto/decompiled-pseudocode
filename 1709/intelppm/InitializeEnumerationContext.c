/*
 * XREFs of InitializeEnumerationContext @ 0x1C000148C
 * Callers:
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D950 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C001DC08 (RetrieveEfficiencyClassInformation.c)
 *     ProcLibTraceControlCallback @ 0x1C0023AE0 (ProcLibTraceControlCallback.c)
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
