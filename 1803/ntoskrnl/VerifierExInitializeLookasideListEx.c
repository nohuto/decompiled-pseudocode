/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x14082BD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140814224 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1408153AC (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140821DA0 (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        ULONG_PTR BugCheckParameter3,
        int a7,
        __int16 a8)
{
  int IsEnabled; // edi
  int v13; // esi
  unsigned __int64 retaddr; // [rsp+78h] [rbp+0h]

  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a7);
    if ( BugCheckParameter3 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, BugCheckParameter2, BugCheckParameter3, 8LL);
    VfUtilSynchronizationObjectSanityChecks(BugCheckParameter2, 0x60uLL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          BugCheckParameter2,
          a2,
          a3,
          a4,
          a5,
          BugCheckParameter3,
          a7,
          a8,
          IsEnabled,
          (__int64)ExInitializeLookasideListExInternal);
  if ( v13 >= 0 )
  {
    if ( (IsEnabled || KernelVerifier)
      && *(PVOID (__fastcall **)(POOL_TYPE, SIZE_T, ULONG))(BugCheckParameter2 + 48) == CmpAllocateTransientPoolWithTag
      && *(void (__stdcall **)(PPRIVILEGE_SET))(BugCheckParameter2 + 56) == CmSiFreeMemory )
    {
      *(_QWORD *)(BugCheckParameter2 + 48) = VerifierExAllocatePoolEx;
      *(_QWORD *)(BugCheckParameter2 + 56) = VerifierExFreePoolEx;
    }
    ViLookasideAdd(BugCheckParameter2);
  }
  return (unsigned int)v13;
}
