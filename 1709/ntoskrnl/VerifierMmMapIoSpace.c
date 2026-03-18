/*
 * XREFs of VerifierMmMapIoSpace @ 0x1407C43E0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MmCheckMapIoSpace @ 0x1407A5D04 (MmCheckMapIoSpace.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407B6F9C (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
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
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v9, BugCheckParameter3);
  if ( v10 )
  {
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 184LL, 0xC0u, BugCheckParameter3);
  }
  return v10;
}
