/*
 * XREFs of RtlpIsSubSegmentReuseThresholdExceeded @ 0x18001453C
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180041A70 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x180101898 (RtlpLogHeapReuseThresholdActivate.c)
 */

bool __fastcall RtlpIsSubSegmentReuseThresholdExceeded(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  bool v4; // bl
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 v9; // ax

  v3 = a1;
  if ( (RtlpLowFragHeapGlobalFlags & 4) != 0
    || (v9 = *(_WORD *)(a1 + 172), v9 > 0x70u)
    || (a1 = 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v9],
        *(_DWORD *)(v3 + 160) < (unsigned int)a1) )
  {
    v4 = 0;
  }
  else
  {
    a1 = *(unsigned __int16 *)(a2 + 32);
    v4 = (unsigned __int16)a1 < (unsigned __int16)(*(_WORD *)(a2 + 40) >> 2);
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v6 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v6 = 2147353482LL;
  if ( *(_BYTE *)v6
    || ((unsigned int)RtlGetCurrentServiceSessionId(v6, v5)
      ? (v7 = (__int64)NtCurrentPeb()->SharedData + 550)
      : (v7 = 2147353472LL),
        *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v4 )
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(v3 + 172));
  }
  return v4;
}
