/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x18006F438
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x1800493D8 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006F598 (RtlpHpLargeAllocGetMetadata.c)
 */

void __fastcall RtlpHpLargeAllocSetExtraPresent(_RTL_SRWLOCK *a1, __int64 a2, char a3)
{
  int v4; // esi
  __int64 Metadata; // rdi

  v4 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  Metadata = RtlpHpLargeAllocGetMetadata(a1);
  if ( !v4 )
    RtlReleaseSRWLockShared(a1 + 9);
  *(_QWORD *)(Metadata + 32) |= 1uLL;
}
