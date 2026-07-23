/*
 * XREFs of RtlpHpLargeAllocSize @ 0x18006F39C
 * Callers:
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeapInternal @ 0x180103004 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocSizeInternal @ 0x18006F414 (RtlpHpLargeAllocSizeInternal.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006F598 (RtlpHpLargeAllocGetMetadata.c)
 */

__int64 __fastcall RtlpHpLargeAllocSize(_RTL_SRWLOCK *a1, __int64 a2, char a3, __int64 a4)
{
  int v6; // esi
  __int64 Metadata; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  Metadata = RtlpHpLargeAllocGetMetadata(a1);
  if ( Metadata )
    v9 = RtlpHpLargeAllocSizeInternal(v8, Metadata, a4);
  else
    v9 = -1LL;
  if ( !v6 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v9;
}
