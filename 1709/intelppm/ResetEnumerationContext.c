/*
 * XREFs of ResetEnumerationContext @ 0x1C0001864
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C0006020 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000C27C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C001D950 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C001DC08 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001DD3C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0023AE0 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C00293A4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C002B590 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002BA10 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00309E0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetEnumerationContext(__int64 *a1)
{
  __int64 result; // rax

  if ( a1[2] )
  {
    *((_BYTE *)a1 + 24) = 0;
  }
  else
  {
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
