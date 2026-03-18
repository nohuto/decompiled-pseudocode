/*
 * XREFs of PoSetPowerRequestInternal @ 0x1400722B0
 * Callers:
 *     PoSetPowerRequest @ 0x140039360 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14014B768 (PpmBeginHighPerfRequest.c)
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

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // r8d
  int v8; // r8d
  int *v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = (int)a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_4;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 96) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_4:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v5 = a1 + 4 * v2;
  v6 = 0xFFFFFFFFLL;
  v7 = *(_DWORD *)(v5 + 32);
  if ( v7 == -1 )
  {
    v12 = -1073741675;
  }
  else
  {
    v8 = v7 + 1;
    *(_DWORD *)(v5 + 32) = v8;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && v8 == 1 )
    {
      v9 = PopPowerRequestAttributes;
      v10 = PopPowerRequestAttributes[4 * v2];
      if ( v10 == -1 )
      {
        *(_DWORD *)(v5 + 32) = 0;
        v12 = -1073741675;
        goto LABEL_12;
      }
      v11 = v10 + 1;
      PopPowerRequestAttributes[4 * v2] = v11;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v11 == 1 )
      {
        LOBYTE(v9) = 1;
        LOBYTE(v6) = CurrentIrql >= 2u;
        PopQueuePowerRequestCallback(a1, v2, (__int64)v9, v6);
      }
    }
    PopDiagTracePowerRequestChange(a1);
    v12 = 0;
  }
LABEL_12:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker();
  return v12;
}
