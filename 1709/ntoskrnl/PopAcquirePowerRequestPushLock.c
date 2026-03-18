/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1404E7E70
 * Callers:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14000EF00 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400B0A44 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400B4F20 (PoSetPowerRequestInternal.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x1405DBF54 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1405F1760 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405F2540 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x1406F5ACC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x1406F5B60 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x1406F5C08 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1406F7774 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopAcquirePowerRequestPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerRequestLock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerRequestLock, 0LL);
}
