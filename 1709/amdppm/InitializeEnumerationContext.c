/*
 * XREFs of InitializeEnumerationContext @ 0x1C00091F4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0020770 (ProcLibTraceControlCallback.c)
 *     GetPerfDomain @ 0x1C00248A4 (GetPerfDomain.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A574 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002AA84 (RetrieveEfficiencyClassInformation.c)
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
