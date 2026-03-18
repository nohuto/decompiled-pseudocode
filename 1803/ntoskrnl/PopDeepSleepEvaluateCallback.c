/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x14027F090
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x14027CE58 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x14027CF08 (PopDiagTraceIdleResiliencyStart.c)
 */

__int64 PopDeepSleepEvaluateCallback()
{
  KIRQL v0; // di
  __int64 v1; // rcx
  BOOL v2; // r9d
  bool v3; // bl
  __int64 result; // rax

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    LOBYTE(v1) = PopDeepSleepIsEngaged;
    v2 = PopDeepSleepEnforced != 0;
    v3 = PopDeepSleepDisengageReasonMask == 0;
    if ( PopDeepSleepIsEngaged == (PopDeepSleepDisengageReasonMask == 0) )
      break;
    if ( PopDeepSleepDisengageReasonMask )
      PopDiagTraceIdleResiliencyEnd(v1, v2 + 2);
    else
      PopDiagTraceIdleResiliencyStart(v1, v2 + 2, 0x1E / KeMaximumIncrement + 1);
    PopDeepSleepIsEngaged = v3;
    KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
    __writecr8(v0);
    PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock(&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  result = v0;
  __writecr8(v0);
  return result;
}
