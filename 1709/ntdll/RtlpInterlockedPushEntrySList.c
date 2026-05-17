/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1800A3B50
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18005F08C (RtlpHpLfhCacheAddSubsegment.c)
 *     EtwpFreeRegistration @ 0x180060C7C (EtwpFreeRegistration.c)
 *     RtlpFreeDebugInfo @ 0x180061594 (RtlpFreeDebugInfo.c)
 *     RtlInterlockedPushEntrySList @ 0x180070130 (RtlInterlockedPushEntrySList.c)
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 *     RtlpRegisterStackTrace @ 0x1801021EC (RtlpRegisterStackTrace.c)
 *     RtlFreeMemoryBlockLookaside @ 0x180112160 (RtlFreeMemoryBlockLookaside.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInterlockedPushEntrySList(__int128 *a1, _QWORD *a2)
{
  __int128 v5; // rax
  __int64 v6; // r8
  __int128 v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = *((_QWORD *)&v5 + 1);
    LOBYTE(v6) = BYTE8(v5) & 0xF0;
    *a2 = v6;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)a1,
           (signed __int64)a2,
           v5 + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return v6;
}
