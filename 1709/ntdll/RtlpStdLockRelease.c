/*
 * XREFs of RtlpStdLockRelease @ 0x1800FA8D0
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FA59C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FA674 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FA744 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FA8E8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_18015F3E8 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
