/*
 * XREFs of PoClearPowerRequestInternal @ 0x140072C50
 * Callers:
 *     PoClearPowerRequest @ 0x140039340 (PoClearPowerRequest.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14014AFAC (PoClearPowerRequestInternalDeferred.c)
 *     PopDelayedPowerRequestClearDpc @ 0x14014B880 (PopDelayedPowerRequestClearDpc.c)
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404C7464 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopPowerRequestCallbackWorker @ 0x140071310 (PopPowerRequestCallbackWorker.c)
 *     PopQueuePowerRequestCallback @ 0x1400715B8 (PopQueuePowerRequestCallback.c)
 *     PopDiagTracePowerRequestChange @ 0x140072404 (PopDiagTracePowerRequestChange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1404C6290 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404C62C8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // ecx
  int v8; // eax
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned int)a2 > 5 )
    return (unsigned int)-1073741637;
  if ( ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  v5 = 0;
  if ( !*(_DWORD *)(a1 + 4LL * a2 + 32) )
    return (unsigned int)-1073741637;
  if ( a2 == 3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( *(_KPROCESS **)(a1 + 96) == Process )
    {
      LOBYTE(Process) = 1;
      PopAcquirePowerRequestPushLock(Process);
      goto LABEL_5;
    }
    return (unsigned int)-1073741637;
  }
LABEL_5:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v7 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v7;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v7 )
  {
    if ( (v8 = PopPowerRequestAttributes[4 * v2] - 1, PopPowerRequestAttributes[4 * v2] = v8, (v2 & 0xFFFFFFFC) == 0)
      && (_DWORD)v2 != 2
      || !v8 )
    {
      LOBYTE(v6) = CurrentIrql >= 2u;
      PopQueuePowerRequestCallback(a1, v2, 0LL, v6);
    }
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker();
  return v5;
}
