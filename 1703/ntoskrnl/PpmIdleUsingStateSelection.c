/*
 * XREFs of PpmIdleUsingStateSelection @ 0x14006FA48
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
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
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return v1;
}
