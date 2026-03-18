/*
 * XREFs of VerifierMmMapIoSpace @ 0x140831900
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     MmCheckMapIoSpace @ 0x140812CD4 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x140822108 (ViTargetAddToCounter.c)
 *     VfAllocPoolNotification @ 0x140824784 (VfAllocPoolNotification.c)
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmMapIoSpace(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  unsigned __int8 CurrentIrql; // cl
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x73uLL, CurrentIrql, (unsigned int)BugCheckParameter2, BugCheckParameter3);
  if ( (MmVerifierData & 1) != 0 )
    MmCheckMapIoSpace(BugCheckParameter2, BugCheckParameter3);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) == 1 )
    return 0LL;
  if ( (MmVerifierData & 0x2000000) != 0 )
  {
    v8 = 4;
    if ( a3 != 1 )
    {
      v8 = 516;
      if ( a3 == 2 )
        v8 = 1028;
    }
    v9 = MmMapIoSpaceEx(BugCheckParameter2, BugCheckParameter3, v8);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, _QWORD))pXdvMmMapIoSpace)(
           BugCheckParameter2,
           BugCheckParameter3,
           a3);
  }
  v10 = v9;
  VfAllocPoolNotification();
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, BugCheckParameter3);
  }
  return v10;
}
