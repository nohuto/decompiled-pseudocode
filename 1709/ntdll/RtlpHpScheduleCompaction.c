/*
 * XREFs of RtlpHpScheduleCompaction @ 0x18004911C
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegLfhVsDecommit @ 0x180049050 (RtlpHpSegLfhVsDecommit.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18005F17C (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     TpSetTimerEx @ 0x18000F800 (TpSetTimerEx.c)
 *     RtlpHpTlLogGCScheduled @ 0x180105ED4 (RtlpHpTlLogGCScheduled.c)
 */

__int64 RtlpHpScheduleCompaction()
{
  unsigned int v0; // ebx

  if ( (RtlpHpLfhPerfFlags & 0x40) != 0 && (v0 = 0, !byte_18015F3E8) && RtlpHpGCTimerInitialized )
  {
    if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
    {
      TpSetTimerEx(RtlpHpGCTimer, &RtlpHpGCInterval, 0, 0x1388u);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogGCScheduled();
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v0;
}
