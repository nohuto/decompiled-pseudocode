/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x1407BE8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407A70A4 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1407A837C (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1407B6C28 (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
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
      && *(PVOID (__fastcall **)(POOL_TYPE, SIZE_T, ULONG))(BugCheckParameter2 + 48) == ExAllocatePoolEx
      && *(void (__stdcall **)(PPRIVILEGE_SET))(BugCheckParameter2 + 56) == MiDeleteSubsection )
    {
      *(_QWORD *)(BugCheckParameter2 + 48) = VerifierExAllocatePoolWithTag;
      *(_QWORD *)(BugCheckParameter2 + 56) = VerifierExFreePoolEx;
    }
    ViLookasideAdd(BugCheckParameter2);
  }
  return (unsigned int)v13;
}
