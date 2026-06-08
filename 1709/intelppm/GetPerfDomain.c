/*
 * XREFs of GetPerfDomain @ 0x1C001D43C
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000C27C (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001DD3C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001DF58 (InitPerfStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C00293A4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C002B590 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C002BA10 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002E5D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002F740 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C00309E0 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C000148C (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0007800 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d

  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 )
  {
    *a3 = *(_DWORD *)(v4 + 40);
    v5 = a2;
    v6 = 536;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1048);
    if ( !v4 || *(_DWORD *)(v4 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext(a1, a2);
      return v7;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1056;
  }
  InitializeEnumerationContext(v4 + 16, v6, v5);
  return v7;
}
