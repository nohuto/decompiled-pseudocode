/*
 * XREFs of PoSetPowerRequestInternal @ 0x1400B4F20
 * Callers:
 *     PoSetPowerRequest @ 0x1400B4D90 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14015B880 (PpmBeginHighPerfRequest.c)
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x1404F1B94 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopPowerRequestCallbackWorker @ 0x1400B0750 (PopPowerRequestCallbackWorker.c)
 *     PopQueuePowerRequestCallback @ 0x1400B0968 (PopQueuePowerRequestCallback.c)
 *     PopDiagTracePowerRequestChange @ 0x1400B50DC (PopDiagTracePowerRequestChange.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E7E70 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x1404E9084 (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x1404F23DC (PopProcessDisplayRequiredChange.c)
 */

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  void *v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = (int)a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0LL;
  v6 = 0;
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
  v7 = a1 + 4 * v2;
  v8 = *(_DWORD *)(v7 + 32);
  if ( v8 == -1 )
  {
    v12 = -1073741675;
  }
  else
  {
    v9 = v8 + 1;
    *(_DWORD *)(v7 + 32) = v9;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && v9 == 1 )
    {
      v10 = PopPowerRequestAttributes[4 * v2];
      if ( v10 == -1 )
      {
        *(_DWORD *)(v7 + 32) = 0;
        v12 = -1073741675;
        goto LABEL_13;
      }
      v11 = v10 + 1;
      PopPowerRequestAttributes[4 * v2] = v11;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v11 == 1 )
        PopQueuePowerRequestCallback(a1, v2, 1, CurrentIrql >= 2u);
      if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 96) && CurrentIrql < 2u )
      {
        v5 = *(void **)(a1 + 96);
        ObfReferenceObjectWithTag(v5, 0x746C6644u);
        v6 = 1;
      }
    }
    PopDiagTracePowerRequestChange(a1);
    v12 = 0;
  }
LABEL_13:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker();
  if ( v5 )
  {
    PopProcessDisplayRequiredChange(v5, v6);
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  }
  return v12;
}
