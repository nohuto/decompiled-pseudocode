/*
 * XREFs of GetPerfDomain @ 0x1C0021708
 * Callers:
 *     InitLegacyPccInternal @ 0x1C00082B4 (InitLegacyPccInternal.c)
 *     CpcHighestNotifyWorker @ 0x1C0021D98 (CpcHighestNotifyWorker.c)
 *     InitPerfStatesInternal @ 0x1C0023DF4 (InitPerfStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C0024634 (InitPerfFeedbackInternal.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C0025E50 (RegisterKernelPepPerf.c)
 *     ValidatePerfDomainSymmetry @ 0x1C0028640 (ValidatePerfDomainSymmetry.c)
 *     RegisterHvPerfStates @ 0x1C002A8E0 (RegisterHvPerfStates.c)
 *     RegisterHvLegacyPcc @ 0x1C002AE00 (RegisterHvLegacyPcc.c)
 * Callees:
 *     InitializeEnumerationContext @ 0x1C0008E90 (InitializeEnumerationContext.c)
 *     InitializeSingleEnumerationContext @ 0x1C0008EA8 (InitializeSingleEnumerationContext.c)
 */

__int64 __fastcall GetPerfDomain(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r9d

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
    v8 = a1[131];
    if ( !v8 || *(_DWORD *)(v8 + 36) <= 1u )
    {
      *a3 = 0;
      InitializeSingleEnumerationContext((__int64)a1, a2);
      return v9;
    }
    *a3 = 1;
    v5 = a2;
    v6 = 1056;
    v7 = v8 + 16;
  }
  InitializeEnumerationContext(v7, v6, v5);
  return v9;
}
