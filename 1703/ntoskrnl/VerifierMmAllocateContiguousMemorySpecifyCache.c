/*
 * XREFs of VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407816C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetTrackContiguousMemory @ 0x1407755AC (ViTargetTrackContiguousMemory.c)
 *     VfFillAllocatedMemory @ 0x1407757E4 (VfFillAllocatedMemory.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 */

_SLIST_ENTRY *__fastcall VerifierMmAllocateContiguousMemorySpecifyCache(
        size_t a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v10; // ecx
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
  v11 = ((__int64 (__fastcall *)(size_t, __int64, __int64, __int64, int, unsigned int))pXdvMmAllocateContiguousNodeMemory)(
          a1,
          a2,
          a3,
          a4,
          v10,
          0x80000000);
  v12 = (_SLIST_ENTRY *)v11;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v11, a1);
  if ( v12 )
  {
    VfFillAllocatedMemory(v12, a1);
    if ( (MmVerifierData & 8) != 0 )
      ViTargetTrackContiguousMemory(retaddr, v12, a1);
  }
  return v12;
}
