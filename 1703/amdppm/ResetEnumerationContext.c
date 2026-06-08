/*
 * XREFs of ResetEnumerationContext @ 0x1C0008EC0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0024634 (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0025E50 (RegisterKernelPepPerf.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0027348 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C0027854 (RetrieveEfficiencyClassInformation.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0028640 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C002A8E0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002AE00 (RegisterHvLegacyPcc.c)
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
