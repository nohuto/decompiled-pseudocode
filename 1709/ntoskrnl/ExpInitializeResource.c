/*
 * XREFs of ExpInitializeResource @ 0x140153AF4
 * Callers:
 *     ExInitializeFastResource @ 0x140153A10 (ExInitializeFastResource.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStdLogStackTrace @ 0x140250DE8 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x140250E40 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140251114 (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall ExpInitializeResource(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int16 v3; // bx
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // r14
  int RecordedStackTraceIndex; // ebp

  memset(a1, 0, 0x68uLL);
  a1[1] = a1;
  result = 0LL;
  *a1 = a1;
  v3 = 0;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      v5 = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      if ( v5 )
      {
        RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v4);
        if ( !RecordedStackTraceIndex )
          RtlStdReleaseStackTrace(v4, v5);
      }
      else
      {
        LOWORD(RecordedStackTraceIndex) = 0;
      }
      v3 = RecordedStackTraceIndex;
    }
    result = v3;
    a1[11] = v3;
  }
  else
  {
    a1[11] = 0LL;
  }
  return result;
}
