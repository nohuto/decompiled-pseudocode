/*
 * XREFs of VerifierExInitializeLookasideListEx @ 0x14077C990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfCheckPoolType @ 0x1407667E0 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140774E6C (VfTargetDriversIsEnabled.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 */

__int64 __fastcall VerifierExInitializeLookasideListEx(
        PVOID VirtualAddress,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8)
{
  int IsEnabled; // edi
  int v13; // esi
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    VfCheckPoolType(a4, retaddr, a7);
    if ( a6 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)VirtualAddress, a6, 8LL);
    VfUtilSynchronizationObjectSanityChecks(VirtualAddress, 96LL);
  }
  v13 = pXdvExInitializeLookasideListEx(
          (int)VirtualAddress,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          IsEnabled,
          (__int64)ExInitializeLookasideListExInternal);
  if ( v13 >= 0 )
  {
    if ( (IsEnabled || KernelVerifier)
      && *((PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))VirtualAddress + 6) == ExAllocatePoolEx
      && *((void (__stdcall **)(PPRIVILEGE_SET))VirtualAddress + 7) == MiDeleteSubsection )
    {
      *((_QWORD *)VirtualAddress + 6) = VerifierExAllocatePoolWithTag;
      *((_QWORD *)VirtualAddress + 7) = VerifierExFreePoolEx;
    }
    ViLookasideAdd(VirtualAddress);
  }
  return (unsigned int)v13;
}
