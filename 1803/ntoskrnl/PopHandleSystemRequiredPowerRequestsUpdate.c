/*
 * XREFs of PopHandleSystemRequiredPowerRequestsUpdate @ 0x140074DB4
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopCheckResiliencyScenarios @ 0x14051D450 (PopCheckResiliencyScenarios.c)
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
    v3 = ~v2 & dword_1403A9FA4;
  else
    v3 = v2 | dword_1403A9FA4;
  dword_1403A9FA4 = v3;
  if ( !v3 )
    dword_1403A9FC0 = dword_1403A9F88;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PopCheckResiliencyScenarios();
  PopReleasePolicyLock();
}
