/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x1407C37C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetTrackContiguousMemory @ 0x1407B7378 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1407B75A4 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemory(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  int v5; // esi
  __int64 v6; // rax
  _SLIST_ENTRY *v7; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  if ( (MmVerifierData & 0x4000000) != 0 && BugCheckParameter2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v6 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD, ULONG_PTR, _QWORD, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
         BugCheckParameter3,
         0LL,
         BugCheckParameter2,
         0LL,
         v5,
         0x80000000);
  v7 = (_SLIST_ENTRY *)v6;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v6, BugCheckParameter3);
  if ( v7 )
  {
    VfFillAllocatedMemory(v7, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v7, BugCheckParameter3);
  }
  return v7;
}
