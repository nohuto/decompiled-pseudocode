/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800613E8
 * Callers:
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceHeapDestroy(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v6; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180160378 & 1) != 0 && (dword_180160378 & 2) != 0 )
  {
    v6 = 320LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v6 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v6, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
