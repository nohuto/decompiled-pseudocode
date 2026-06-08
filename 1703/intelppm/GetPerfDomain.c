/*
 * XREFs of GetPerfDomain @ 0x1C001AC04
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000BEEC (InitLegacyPccInternal.c)
 *     ValidatePerfDomainSymmetry @ 0x1C001AF0C (ValidatePerfDomainSymmetry.c)
 *     InitPerfStatesInternal @ 0x1C001B128 (InitPerfStatesInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0025BC4 (CpcHighestNotifyWorker.c)
 *     RegisterHvLegacyPcc @ 0x1C0027D30 (RegisterHvLegacyPcc.c)
 *     RegisterHvPerfStates @ 0x1C00281E0 (RegisterHvPerfStates.c)
 *     InitCpcStatesInternal @ 0x1C002AD40 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002BE98 (InitPerfFeedbackInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002D130 (RegisterKernelPepPerf.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C00015CC (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0007880 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v10; // rcx

  v3 = a1[66];
  if ( v3 )
  {
    *a3 = *(_DWORD *)(a1[65] + 16LL);
    v5 = a2;
    v6 = 536;
    v7 = v3 + 16;
  }
  else
  {
    v10 = a1[131];
    if ( !v10 || *(_DWORD *)(v10 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v8;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1056;
    v7 = v10 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v8;
}
