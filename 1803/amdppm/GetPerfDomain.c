/*
 * XREFs of GetPerfDomain @ 0x1C0021CB0
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000246C (InitLegacyPccInternal.c)
 *     RegisterHvPerfStates @ 0x1C001A740 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C001AC60 (RegisterHvLegacyPcc.c)
 *     InitPerfStatesInternal @ 0x1C001DCB4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C001E52C (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C001EA5C (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C001FDF0 (RegisterKernelPepPerf.c)
 *     CpcHighestNotifyWorker @ 0x1C00225B4 (CpcHighestNotifyWorker.c)
 *     ValidatePerfDomainSymmetry @ 0x1C002F054 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0003900 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0003918 (InitializeSingleEnumerationContext.c)
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
