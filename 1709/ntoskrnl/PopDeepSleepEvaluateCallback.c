/*
 * XREFs of PopDeepSleepEvaluateCallback @ 0x140249000
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PopDiagTraceIdleResiliencyEnd @ 0x1402462E0 (PopDiagTraceIdleResiliencyEnd.c)
 *     PopDiagTraceIdleResiliencyStart @ 0x140246390 (PopDiagTraceIdleResiliencyStart.c)
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
    LOBYTE(v1) = -PopDeepSleepEnforced;
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
    PpmAcquireLock(&PopFxSystemLatencyLock);
    PoFxSendSystemLatencyUpdate();
    PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  }
  PopDeepSleepEvaluateWorkItemQueued = 0;
  KxReleaseSpinLock(&PopDeepSleepDisengageReasonLock);
  result = v0;
  __writecr8(v0);
  return result;
}
