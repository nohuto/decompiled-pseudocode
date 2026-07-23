/*
 * XREFs of RtlpHpStackTraceEnable @ 0x1801005CC
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180100518 (RtlpHpStackTraceConfig.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1801024E0 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpStackDbInitialize @ 0x1800FFDC8 (RtlpHpStackDbInitialize.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  unsigned int v0; // ebx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_180160378 & 1) != 0 )
  {
    v0 = 1;
  }
  else
  {
    v0 = RtlpHpStackDbInitialize();
    if ( v0 )
      dword_180160378 |= 1u;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return v0;
}
