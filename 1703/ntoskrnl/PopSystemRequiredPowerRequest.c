/*
 * XREFs of PopSystemRequiredPowerRequest @ 0x140070204
 * Callers:
 *     PopSystemRequiredCallback @ 0x1404C6100 (PopSystemRequiredCallback.c)
 *     PopExecutionRequiredCallback @ 0x1404C7570 (PopExecutionRequiredCallback.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404C5510 (PopCheckResiliencyScenarios.c)
 */

__int64 __fastcall PopSystemRequiredPowerRequest(char a1, int a2)
{
  int v4; // ecx
  bool v5; // zf
  int v7; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PopAcquirePolicyLock();
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v4 = PopPowerRequestAttributes[4 * (a2 & 2 | 1LL)];
  if ( a1 )
  {
    v5 = v4 == 0;
    if ( v4 > 0 )
    {
      dword_14034B0C4 |= a2;
      goto LABEL_4;
    }
  }
  else
  {
    v5 = v4 == 0;
  }
  v7 = dword_14034B0C4;
  if ( v5 )
  {
    v7 = ~a2 & dword_14034B0C4;
    dword_14034B0C4 = v7;
  }
  if ( !v7 )
    dword_14034B0E0 = dword_14034B0A8;
LABEL_4:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock();
}
