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

signed __int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  signed __int64 result; // rax
  signed __int64 v7; // rdi

  v5 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 72), a2, a3, a4);
  result = RtlpHpLargeAllocGetMetadata(a1);
  v7 = result;
  if ( !v5 )
    result = RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 72));
  *(_QWORD *)(v7 + 32) |= 1uLL;
  return result;
}
