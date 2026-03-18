/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407C39E0
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

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCacheNode(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v11; // ebp
  __int64 v12; // rax
  _SLIST_ENTRY *v13; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( a5 == 1 )
  {
    v11 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  }
  else
  {
    v11 = 516;
    if ( a5 == 2 )
      v11 = 1028;
  }
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v12 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, int, int))pXdvMmAllocateContiguousNodeMemory)(
          BugCheckParameter3,
          a2,
          a3,
          a4,
          v11,
          a6);
  v13 = (_SLIST_ENTRY *)v12;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v12, BugCheckParameter3);
  if ( v13 )
  {
    VfFillAllocatedMemory(v13, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v13, BugCheckParameter3);
  }
  return v13;
}
