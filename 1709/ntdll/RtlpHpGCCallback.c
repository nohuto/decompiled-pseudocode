/*
 * XREFs of RtlpHpGCCallback @ 0x1800128E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180012914 (RtlpEnumProcessHeaps.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x180105F28 (RtlpHpTlLogGCTimerFinished.c)
 */

__int64 RtlpHpGCCallback()
{
  __int64 result; // rax

  result = RtlpEnumProcessHeaps(RtlpHpGCFlushCallback, 0LL, 0LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    result = RtlpHpTlLogGCTimerFinished();
  RtlpHpGCTimerScheduled = 0;
  return result;
}
