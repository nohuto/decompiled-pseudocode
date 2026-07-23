/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800FFF48
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180024AA0 (RtlCaptureStackBackTrace.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     RtlpHpStackTraceAllocAdd @ 0x18010003C (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackAdd @ 0x18010D254 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x18010D838 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceAddStack(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v8) >= 0 )
  {
    v5 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0);
    v3 = (unsigned __int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = RtlStackDbStackAdd(&qword_180160380, v3);
        v7 = v6;
        if ( v6 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v8, a2, v6) )
            v7 = 0LL;
          if ( v7 )
            RtlStackDbStackRemove(&qword_180160380, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v3 )
    RtlpHpMetadataFree(v3);
}
