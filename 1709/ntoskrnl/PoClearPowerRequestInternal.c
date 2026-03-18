/*
 * XREFs of PoClearPowerRequestInternal @ 0x1400B4DB8
 * Callers:
 *     PoClearPowerRequest @ 0x1400B4D60 (PoClearPowerRequest.c)
 *     PpmEndHighPerfRequest @ 0x14015B7B4 (PpmEndHighPerfRequest.c)
 *     PpmHighPerfRequestExpiration @ 0x14015C560 (PpmHighPerfRequestExpiration.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140248A1C (PpmDisableHighPerfRequestDeferredExpiration.c)
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

__int64 __fastcall PoClearPowerRequestInternal(__int64 a1, signed int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // ebx
  void *v6; // rbp
  unsigned int v7; // r13d
  int v8; // ecx
  int v9; // eax
  _KPROCESS *Process; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned int)a2 > 5 || ((1 << a2) & *(_DWORD *)(a1 + 20)) == 0 || !*(_DWORD *)(a1 + 4LL * a2 + 32) )
    return (unsigned int)-1073741637;
  if ( a2 != 3 )
    goto LABEL_5;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( *(_KPROCESS **)(a1 + 96) != Process )
    return (unsigned int)-1073741637;
  LOBYTE(Process) = 1;
  PopAcquirePowerRequestPushLock(Process);
LABEL_5:
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v8 = *(_DWORD *)(a1 + 4 * v2 + 32) - 1;
  *(_DWORD *)(a1 + 4 * v2 + 32) = v8;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !v8 )
  {
    v9 = PopPowerRequestAttributes[4 * v2] - 1;
    PopPowerRequestAttributes[4 * v2] = v9;
    if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || !v9 )
      PopQueuePowerRequestCallback(a1, v2, 0, CurrentIrql >= 2u);
    if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 96) && CurrentIrql < 2u )
    {
      v6 = *(void **)(a1 + 96);
      ObfReferenceObjectWithTag(v6, 0x746C6644u);
      v7 = 2;
    }
  }
  PopDiagTracePowerRequestChange(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_DWORD)v2 == 3 )
    PopReleasePowerRequestPushLock();
  if ( CurrentIrql < 2u && *(_BYTE *)(a1 + 78) )
    PopPowerRequestCallbackWorker();
  if ( v6 )
  {
    PopProcessDisplayRequiredChange(v6, v7);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  return v5;
}
