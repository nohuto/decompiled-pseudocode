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

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180160378 & 1) != 0 && (dword_180160378 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v10) >= 0 )
  {
    v8 = RtlpHpStackTraceAllocRemove(v10, (unsigned __int64)a2, v6, v7);
    if ( v8 )
      RtlStackDbStackRemove(&qword_180160380, v8);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
