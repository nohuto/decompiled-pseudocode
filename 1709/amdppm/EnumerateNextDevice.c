/*
 * XREFs of EnumerateNextDevice @ 0x1C0009240
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00085FC (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0020770 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0024F30 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A574 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002AA84 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002B810 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C002DD70 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002E290 (RegisterHvLegacyPcc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnumerateNextDevice(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 *v5; // rax
  __int64 v6; // rdx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = -1073741275;
  if ( v3 )
  {
    if ( !*(_BYTE *)(a1 + 24) )
    {
      *(_BYTE *)(a1 + 24) = 1;
      *a2 = v3;
      return 0;
    }
  }
  else
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = *v5;
    *(_QWORD *)(a1 + 8) = *v5;
    if ( v6 != *(_QWORD *)a1 )
    {
      *a2 = v6 - *(unsigned int *)(a1 + 24);
      return 0;
    }
  }
  return v4;
}
