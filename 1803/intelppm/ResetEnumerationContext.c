/*
 * XREFs of ResetEnumerationContext @ 0x1C00039B8
 * Callers:
 *     ComputeProcessorEnergyMsrEx @ 0x1C00062D0 (ComputeProcessorEnergyMsrEx.c)
 *     InitLegacyPccInternal @ 0x1C000C66C (InitLegacyPccInternal.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0022B28 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0022DE0 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0022F14 (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C0023130 (InitPerfStatesInternal.c)
 *     ProcLibTraceControlCallback @ 0x1C0024B10 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C002A4F0 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C002C760 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002CBE0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002F7CC (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00309F8 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0031C80 (RegisterKernelPepPerf.c)
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
