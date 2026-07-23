/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x1800613E8
 * Callers:
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 */

void __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180160378 & 1) != 0 && (dword_180160378 & 2) != 0 )
  {
    v2 = 320LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v2 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v2, 0LL, 0LL);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
