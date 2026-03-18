/*
 * XREFs of PopAcquirePowerRequestPushLock @ 0x1404C62C8
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400714F0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140071694 (PopPowerRequestCleanUp.c)
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 *     PopDiagTraceControlCallback @ 0x1404537A0 (PopDiagTraceControlCallback.c)
 *     PopSystemRequiredCallback @ 0x1404C6100 (PopSystemRequiredCallback.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     PopCreateKernelPowerRequest @ 0x1404C7330 (PopCreateKernelPowerRequest.c)
 *     PopExecutionRequiredCallback @ 0x1404C7570 (PopExecutionRequiredCallback.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 *     PopExecutionRequiredSettingCallback @ 0x1405D4850 (PopExecutionRequiredSettingCallback.c)
 *     PopPowerRequestOverrideInitialize @ 0x1405D5B54 (PopPowerRequestOverrideInitialize.c)
 *     PopPowerRequestPowerSourceSettingCallback @ 0x1405D60C0 (PopPowerRequestPowerSourceSettingCallback.c)
 *     PopCheckExecutionRequiredPowerRequests @ 0x1406C5770 (PopCheckExecutionRequiredPowerRequests.c)
 *     PopClearSpecialRequest @ 0x1406C57EC (PopClearSpecialRequest.c)
 *     PopCsStateChanged @ 0x1406C5874 (PopCsStateChanged.c)
 *     PopSetSpecialRequest @ 0x1406C5970 (PopSetSpecialRequest.c)
 *     PopGetPowerRequestListInfo @ 0x1406C6FE8 (PopGetPowerRequestListInfo.c)
 * Callees:
 *     <none>
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
