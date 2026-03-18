/*
 * XREFs of VerifierMmAllocateContiguousMemory @ 0x140781610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x1407755AC (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1407757E4 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemory(size_t a1, __int64 a2)
{
  __int64 v5; // rax
  _SLIST_ENTRY *v6; // rbx
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v5 = ((__int64 (__fastcall *)(size_t, _QWORD, __int64, _QWORD, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
         a1,
         0LL,
         a2,
         0LL,
         (MmVerifierData & 0x2000000) != 0 ? 4 : 64,
         0x80000000);
  v6 = (_SLIST_ENTRY *)v5;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v5, a1);
  if ( v6 )
  {
    VfFillAllocatedMemory(v6, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v6, a1);
  }
  return v6;
}
