/*
 * XREFs of RtlLogStackBackTraceEx @ 0x180009C98
 * Callers:
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlInitializeResource @ 0x180009AF0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180009BDC (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x1800437B0 (RtlpAllocateHeap.c)
 *     RtlpAllocateTags @ 0x1800EFC58 (RtlpAllocateTags.c)
 *     RtlLogStackBackTrace @ 0x1800FA0B0 (RtlLogStackBackTrace.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x180103588 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStdLogStackTrace @ 0x1800FA370 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FA744 (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall RtlLogStackBackTraceEx(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int RecordedStackTraceIndex; // edi

  v1 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = RtlStdLogStackTrace(RtlpStackTraceDatabase, a1);
  v4 = v3;
  if ( v3 )
  {
    RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v1, v3);
    if ( !RecordedStackTraceIndex )
      RtlStdReleaseStackTrace(v1, v4);
  }
  else
  {
    return 0;
  }
  return RecordedStackTraceIndex;
}
