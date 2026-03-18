/*
 * XREFs of ExpInitializeResource @ 0x140163474
 * Callers:
 *     ExInitializeFastResource @ 0x140163390 (ExInitializeFastResource.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlStdLogStackTrace @ 0x140286898 (RtlStdLogStackTrace.c)
 *     RtlStdReleaseStackTrace @ 0x1402868F0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140286BD8 (RtlpStdGetRecordedStackTraceIndex.c)
 */

__int64 __fastcall ExpInitializeResource(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rsi
  __int64 v5; // r14
  __int16 v6; // bp

  memset(a1, 0, 0x68uLL);
  a1[1] = a1;
  result = 0LL;
  *a1 = a1;
  v3 = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  a1[12] = 0LL;
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v4 = RtlpStackTraceDatabase;
    if ( RtlpStackTraceDatabase )
    {
      result = RtlStdLogStackTrace(RtlpStackTraceDatabase);
      v5 = result;
      if ( result )
      {
        result = RtlpStdGetRecordedStackTraceIndex(v4);
        v6 = result;
        if ( !(_DWORD)result )
          result = RtlStdReleaseStackTrace(v4, v5);
      }
      else
      {
        v6 = 0;
      }
      LOWORD(v3) = v6;
    }
    v3 = (unsigned __int16)v3;
  }
  a1[11] = v3;
  return result;
}
