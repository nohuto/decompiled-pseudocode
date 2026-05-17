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

signed __int64 __fastcall RtlpHpStackTraceAddStack(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && (int)RtlpHpStackTraceHeapGetContext(a1, 1LL, &v11) >= 0 )
  {
    v7 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0);
    v5 = (unsigned __int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = RtlStackDbStackAdd(&qword_180160380, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)RtlpHpStackTraceAllocAdd(v11, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            RtlStackDbStackRemove(&qword_180160380, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v5 )
    return RtlpHpMetadataFree(v5);
  return result;
}
