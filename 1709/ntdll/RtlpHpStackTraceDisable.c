/*
 * XREFs of RtlpHpStackTraceDisable @ 0x18010057C
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180100518 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlStackDbContextCleanup @ 0x18010CD5C (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180160378 & 1) != 0 )
  {
    dword_180160378 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(_QWORD, _QWORD))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_180160380);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
