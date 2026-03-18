/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407C38B0
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

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCache(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        int a5)
{
  int v10; // ebp
  __int64 v11; // rax
  _SLIST_ENTRY *v12; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( a5 == 1 )
  {
    v10 = (MmVerifierData & 0x2000000) != 0 ? 4 : 64;
  }
  else
  {
    v10 = 516;
    if ( a5 == 2 )
      v10 = 1028;
  }
  if ( (MmVerifierData & 0x4000000) != 0 && a3 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a3, BugCheckParameter3, 0LL);
  v11 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR, __int64, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
          BugCheckParameter3,
          a2,
          a3,
          a4,
          v10,
          0x80000000);
  v12 = (_SLIST_ENTRY *)v11;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v11, BugCheckParameter3);
  if ( v12 )
  {
    VfFillAllocatedMemory(v12, BugCheckParameter3);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v12, BugCheckParameter3);
  }
  return v12;
}
