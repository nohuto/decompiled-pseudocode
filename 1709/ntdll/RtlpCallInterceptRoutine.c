/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1800EFE04
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180048858 (RtlpHpReallocMove.c)
 *     RtlDestroyHeap @ 0x1800610F0 (RtlDestroyHeap.c)
 *     RtlpHpAllocateHeap @ 0x18006F284 (RtlpHpAllocateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F0CD0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkInterceptor @ 0x1800F7530 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180102410 (RtlpStackTraceDatabaseLogPrefix.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
