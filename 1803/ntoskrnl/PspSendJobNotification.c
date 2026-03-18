/*
 * XREFs of PspSendJobNotification @ 0x14008522C
 * Callers:
 *     PspAssociateCompletionPortCallback @ 0x14048BDA0 (PspAssociateCompletionPortCallback.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140530F00 (PspValidateJobAssignmentProcessLimits.c)
 *     PspIncrementJobChainProcessCounts @ 0x140531494 (PspIncrementJobChainProcessCounts.c)
 *     PspSendProcessNotificationToJobChain @ 0x140532A40 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140536C40 (PspEnforceLimitsJobPostCallback.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14054FD20 (PspChangeJobMemoryUsageByProcess.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140778EA0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PsReportProcessMemoryLimitViolation @ 0x14077B30C (PsReportProcessMemoryLimitViolation.c)
 * Callees:
 *     IoSetIoCompletion @ 0x14052DD60 (IoSetIoCompletion.c)
 */

__int64 __fastcall PspSendJobNotification(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax

  result = IoSetIoCompletion(*(_QWORD *)(a1 + 456), *(_QWORD *)(a1 + 464), a3, 0, a2, a4);
  if ( (int)result >= 0 )
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 472));
  return result;
}
