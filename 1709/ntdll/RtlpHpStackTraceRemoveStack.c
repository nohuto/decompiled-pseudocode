/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180100A6C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1801003D0 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x18010D838 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = RtlpHpStackTraceAllocRemove(v5, a2);
    if ( v4 )
      RtlStackDbStackRemove(&qword_180160380, v4);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
