/*
 * XREFs of PopHandleSystemRequiredPowerRequestsUpdate @ 0x1400B0B44
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x1404E7F34 (PopCheckResiliencyScenarios.c)
 */

void __fastcall PopHandleSystemRequiredPowerRequestsUpdate(int a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  int v3; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  v2 = 1;
  if ( a1 != 1 )
  {
    if ( a1 != 3 )
      return;
    v2 = 2;
  }
  PopAcquirePolicyLock();
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  if ( PopPowerRequestAttributes[4 * v1] <= 0 )
    v3 = ~v2 & dword_140365724;
  else
    v3 = v2 | dword_140365724;
  dword_140365724 = v3;
  if ( !v3 )
    dword_140365740 = dword_140365708;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PopCheckResiliencyScenarios();
  PopReleasePolicyLock();
}
