/*
 * XREFs of RtlStdLogStackTrace @ 0x14023B538
 * Callers:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1401526A0 (ExpInitializeResource.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     RtlpStdLogCapturedStackTrace @ 0x14023BA28 (RtlpStdLogCapturedStackTrace.c)
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
