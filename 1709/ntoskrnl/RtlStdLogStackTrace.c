/*
 * XREFs of RtlStdLogStackTrace @ 0x140250DE8
 * Callers:
 *     ExInitializeResourceLite @ 0x140089610 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x140153AF4 (ExpInitializeResource.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1402512B4 (RtlpStdLogCapturedStackTrace.c)
 */

__int64 __fastcall RtlStdLogStackTrace(PKSPIN_LOCK SpinLock, int a2)
{
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v5; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v5) )
    return RtlpStdLogCapturedStackTrace(SpinLock);
  else
    return 0LL;
}
