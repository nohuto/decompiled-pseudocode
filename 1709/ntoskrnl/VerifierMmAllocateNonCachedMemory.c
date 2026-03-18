/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x1407C3DB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x1407B7378 (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1407B75A4 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t a1)
{
  __int64 v3; // rax
  _SLIST_ENTRY *v4; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v3 = ((__int64 (__fastcall *)(size_t))pXdvMmAllocateNonCachedMemory)(a1);
  v4 = (_SLIST_ENTRY *)v3;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v3, a1);
  if ( v4 )
  {
    VfFillAllocatedMemory(v4, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v4, a1);
  }
  return v4;
}
