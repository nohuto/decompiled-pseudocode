/*
 * XREFs of ResetEnumerationContext @ 0x1C0003930
 * Callers:
 *     RegisterHvPerfStates @ 0x1C001A740 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001AC60 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C00225B4 (CpcHighestNotifyWorker.c)
 *     ProcLibTraceControlCallback @ 0x1C0028AA0 (ProcLibTraceControlCallback.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F054 (ValidatePerfDomainSymmetry.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002FF58 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0030464 (RetrieveEfficiencyClassInformation.c)
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
