/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x14051D5A8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14014D38C (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     PopCreateUserPowerRequest @ 0x140524E58 (PopCreateUserPowerRequest.c)
 *     PopCreateKernelPowerRequest @ 0x140525380 (PopCreateKernelPowerRequest.c)
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 *     PopExecutionRequiredSettingCallback @ 0x140654A90 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x140655238 (PopPowerRequestOverrideInitialize.c)
 *     PopClearSpecialRequest @ 0x14075D6EC (PopClearSpecialRequest.c)
 *     PopExecutionRequiredTimeoutWorkerRoutine @ 0x14075D780 (PopExecutionRequiredTimeoutWorkerRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x14075D7B0 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopSetSpecialRequest @ 0x14075D828 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x14075EF78 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
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
