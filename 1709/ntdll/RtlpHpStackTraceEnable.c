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

__int64 __fastcall RtlpHpStackTraceEnable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180160378 & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = RtlpHpStackDbInitialize();
    if ( v4 )
      dword_180160378 |= 1u;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return v4;
}
