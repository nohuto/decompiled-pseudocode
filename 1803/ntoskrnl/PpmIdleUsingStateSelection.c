/*
 * XREFs of PpmIdleUsingStateSelection @ 0x140073678
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

bool PpmIdleUsingStateSelection()
{
  struct _KTHREAD *CurrentThread; // rax
  bool v1; // bl
  _PPM_IDLE_STATES *IdleStates; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
  v1 = 0;
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates )
    v1 = IdleStates->InterfaceVersion == 1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  return v1;
}
