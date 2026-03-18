/*
 * XREFs of PspSendJobNotification @ 0x1400D2E84
 * Callers:
 *     PspChangeJobMemoryUsageByProcess @ 0x1404961F0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x14050C51C (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x14050CAB0 (PspIncrementJobChainProcessCounts.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14050FF00 (PspEnforceLimitsJobPostCallback.c)
 *     PspSendProcessNotificationToJobChain @ 0x14051259C (PspSendProcessNotificationToJobChain.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140714CB0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14071734C (PsReportProcessMemoryLimitViolation.c)
 *     PspAssociateCompletionPortCallback @ 0x140717640 (PspAssociateCompletionPortCallback.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14050AFA0 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
