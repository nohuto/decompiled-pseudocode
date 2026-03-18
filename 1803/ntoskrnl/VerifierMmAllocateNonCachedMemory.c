/*
 * XREFs of VerifierMmAllocateNonCachedMemory @ 0x1408312F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x1408224E8 (ViTargetTrackContiguousMemory.c)
 *     VfAllocPoolNotification @ 0x140824784 (VfAllocPoolNotification.c)
 *     VfFillAllocatedMemory @ 0x1408247C0 (VfFillAllocatedMemory.c)
 *     VfFaultsInjectResourceFailure @ 0x140824DA4 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateNonCachedMemory(size_t a1)
{
  _SLIST_ENTRY *v3; // rbx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v3 = (_SLIST_ENTRY *)((__int64 (__fastcall *)(size_t))pXdvMmAllocateNonCachedMemory)(a1);
  VfAllocPoolNotification();
  if ( v3 )
  {
    VfFillAllocatedMemory(v3, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v3, a1);
  }
  return v3;
}
