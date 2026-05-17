/*
 * XREFs of RtlpStdLockAcquire @ 0x1800FA8B4
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1800FA3C0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800FA59C (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800FA674 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1800FA744 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FA8E8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  if ( !byte_18015F3E8 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
