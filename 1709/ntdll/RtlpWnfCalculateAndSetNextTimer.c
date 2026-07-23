/*
 * XREFs of RtlpWnfCalculateAndSetNextTimer @ 0x1800DDBD0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B950 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800DE060 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpWnfSetRetryTimer @ 0x1800DE1EC (RtlpWnfSetRetryTimer.c)
 */

void RtlpWnfCalculateAndSetNextTimer()
{
  unsigned __int64 Value; // rdi
  int v1; // esi
  _RTL_SRWLOCK *v2; // rcx
  _RTL_SRWLOCK *v3; // rbx

  Value = 0LL;
  v1 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801600A8 + 8));
  v2 = (_RTL_SRWLOCK *)qword_1801600A8;
  v3 = *(_RTL_SRWLOCK **)(qword_1801600A8 + 16);
  if ( v3 != (_RTL_SRWLOCK *)(qword_1801600A8 + 16) )
  {
    do
    {
      RtlAcquireSRWLockShared(v3 + 3);
      if ( v3[12].0 == 2 && (!Value || v3[13].Value < Value) )
      {
        Value = v3[13].Value;
        v1 = 1;
      }
      RtlReleaseSRWLockShared(v3 + 3);
      v2 = (_RTL_SRWLOCK *)qword_1801600A8;
      v3 = (_RTL_SRWLOCK *)v3->Value;
    }
    while ( v3 != (_RTL_SRWLOCK *)(qword_1801600A8 + 16) );
    if ( v1 )
    {
      RtlpWnfSetRetryTimer(Value);
      v2 = (_RTL_SRWLOCK *)qword_1801600A8;
    }
  }
  RtlReleaseSRWLockShared(v2 + 1);
}
