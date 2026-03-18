/*
 * XREFs of VerifierExInitializePagedLookasideList @ 0x14077CC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1407654D0 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x140774E6C (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall VerifierExInitializePagedLookasideList(
        PVOID VirtualAddress,
        __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR a5,
        int a6,
        __int16 a7)
{
  unsigned int v11; // ebx
  int IsEnabled; // ebp
  __int16 v13; // cx
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]

  v11 = 0;
  IsEnabled = VfTargetDriversIsEnabled(retaddr);
  if ( IsEnabled )
  {
    if ( a5 < 8 && (MmVerifierData & 1) != 0 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, (ULONG_PTR)VirtualAddress, a5, 8LL);
    VfUtilSynchronizationObjectSanityChecks(VirtualAddress, 128LL);
    v13 = 0;
  }
  else
  {
    v13 = a7;
  }
  pXdvExInitializePagedLookasideList(
    (int)VirtualAddress,
    a2,
    a3,
    a4,
    a5,
    a6,
    v13,
    IsEnabled,
    (__int64)ExInitializePagedLookasideListInternal);
  if ( IsEnabled || KernelVerifier )
    v11 = 1;
  return ViLookasideTrackList(VirtualAddress, v11);
}
