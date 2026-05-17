/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x180014FA0
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x1800145D4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x180101898 (RtlpLogHeapReuseThresholdActivate.c)
 */

char __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _DWORD *SharedData; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v9; // ax

  if ( *(_WORD *)(a2 + 32) )
  {
    v3 = (RtlpLowFragHeapGlobalFlags & 4) == 0
      && (v9 = *(_WORD *)(a1 + 172), v9 <= 0x70u)
      && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v9]
      && (unsigned int)(*(_WORD *)(a2 + 40) >> 2) > *(_WORD *)(a2 + 32);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v5 = (__int64)NtCurrentPeb()->SharedData + 560;
    else
      v5 = 2147353482LL;
    if ( *(_BYTE *)v5
      || ((v6 = NtCurrentPeb()->SharedData) == 0LL || !*v6
        ? (v7 = 2147353472LL)
        : (v7 = (__int64)NtCurrentPeb()->SharedData + 550),
          *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
    {
      if ( !v3 )
        return 1;
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
    }
    if ( !v3 )
      return 1;
  }
  return 0;
}
