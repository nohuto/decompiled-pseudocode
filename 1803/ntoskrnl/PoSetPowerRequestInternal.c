/*
 * XREFs of PoSetPowerRequestInternal @ 0x140076428
 * Callers:
 *     PoSetPowerRequest @ 0x140077090 (PoSetPowerRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14016E780 (PpmBeginHighPerfRequest.c)
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopPowerRequestActionInfo @ 0x140523D80 (PopPowerRequestActionInfo.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PopPowerRequestCallbackWorker @ 0x140074F50 (PopPowerRequestCallbackWorker.c)
 *     PopDiagTracePowerRequestChange @ 0x1400765E8 (PopDiagTracePowerRequestChange.c)
 *     PopQueuePowerRequestCallback @ 0x14007670C (PopQueuePowerRequestCallback.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 *     PopReleasePowerRequestPushLock @ 0x140524B6C (PopReleasePowerRequestPushLock.c)
 *     PopProcessDisplayRequiredChange @ 0x140524F6C (PopProcessDisplayRequiredChange.c)
 */

__int64 __fastcall PoSetPowerRequestInternal(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  void *v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // r8
  int *v9; // r9
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
  v8 = *(unsigned int *)(v7 + 32);
  if ( (_DWORD)v8 == -1 )
  {
    v12 = -1073741675;
  }
  else
  {
    *(_DWORD *)(v7 + 32) = v8 + 1;
    if ( ((1 << v2) & *(_DWORD *)(a1 + 24)) == 0 && !(_DWORD)v8 )
    {
      v9 = PopPowerRequestAttributes;
      v10 = PopPowerRequestAttributes[4 * v2];
      if ( v10 == -1 )
      {
        v12 = -1073741675;
        *(_DWORD *)(v7 + 32) = v8;
        goto LABEL_13;
      }
      v11 = v10 + 1;
      PopPowerRequestAttributes[4 * v2] = v11;
      if ( (v2 & 0xFFFFFFFC) == 0 && (_DWORD)v2 != 2 || v11 == 1 )
      {
        LOBYTE(v8) = 1;
        LOBYTE(v9) = CurrentIrql >= 2u;
        PopQueuePowerRequestCallback(a1, (unsigned int)v2, v8, v9);
      }
      if ( !(_DWORD)v2 && *(_QWORD *)(a1 + 96) && CurrentIrql < 2u )
      {
        v5 = *(void **)(a1 + 96);
        ObfReferenceObjectWithTag(v5, 0x72506F50u);
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
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  }
  return v12;
}
