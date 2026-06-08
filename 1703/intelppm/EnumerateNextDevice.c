/*
 * XREFs of EnumerateNextDevice @ 0x1C0002918
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006240 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000BEEC (InitLegacyPccInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C001A8C0 (ProcLibTraceControlCallback.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001AF0C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0025BC4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0027D30 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C00281E0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002BE98 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002D130 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002F82C (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002FADC (RetrieveEfficiencyClassInformation.c)
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
    if ( *(_BYTE *)(a1 + 24) )
      return v4;
    *(_BYTE *)(a1 + 24) = 1;
    *a2 = v3;
    return 0;
  }
  v5 = *(__int64 **)(a1 + 8);
  v6 = *v5;
  *(_QWORD *)(a1 + 8) = *v5;
  if ( v6 != *(_QWORD *)a1 )
  {
    *a2 = v6 - *(unsigned int *)(a1 + 24);
    return 0;
  }
  return v4;
}
