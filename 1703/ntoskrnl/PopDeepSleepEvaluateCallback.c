/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x140233BD0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x140231A48 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140231AF8 (PopDiagTraceIdleResiliencyStart.c)
 */

__int64 PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // al
  __int64 v1; // rcx
  KIRQL v2; // di
  int v3; // r9d
  bool v4; // bl
  __int64 result; // rax

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    LOBYTE(v1) = PopDeepSleepIsEngaged;
    v2 = v0;
    v3 = (PopDeepSleepEnforced != 0) | 2;
    v4 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v1, v3);
    else
      PopDiagTraceIdleResiliencyStart(v1, v3, 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v4;
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    __writecr8(v2);
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  result = v2;
  __writecr8(v2);
  return result;
}
