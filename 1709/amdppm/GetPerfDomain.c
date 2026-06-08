/*
 * XREFs of GetPerfDomain @ 0x1C00248A4
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00085FC (InitLegacyPccInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0024F30 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C0026F88 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C00277EC (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0027D1C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0029030 (RegisterKernelPepPerf.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002B810 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C002DD70 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002E290 (RegisterHvLegacyPcc.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00091F4 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C000920C (InitializeSingleEnumerationContext.c)
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
