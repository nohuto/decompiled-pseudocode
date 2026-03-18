/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x140071310
 * Callers:
 *     PoSetPowerRequestInternal @ 0x1400722B0 (PoSetPowerRequestInternal.c)
 *     PoClearPowerRequestInternal @ 0x140072C50 (PoClearPowerRequestInternal.c)
 * Callees:
 *     PopPowerRequestExecuteCallbacks @ 0x14007141C (PopPowerRequestExecuteCallbacks.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 PopPowerRequestCallbackWorker()
{
  _QWORD *v0; // rax
  __int64 v1; // rbx
  int v2; // edi
  char *v3; // rcx
  __int64 v4; // rdx
  char v5; // al
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-20h] BYREF

  while ( 1 )
  {
    KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
    if ( (__int64 *)PopPowerRequestCallbacks == &PopPowerRequestCallbacks )
    {
      v1 = 0LL;
      v2 = 0;
      PopCallbackWorkItemScheduled = 0;
    }
    else
    {
      v0 = *(_QWORD **)(qword_14034C8E8 + 8);
      if ( *(__int64 **)qword_14034C8E8 != &PopPowerRequestCallbacks || *v0 != qword_14034C8E8 )
        __fastfail(3u);
      v1 = qword_14034C8E8 - 56;
      qword_14034C8E8 = *(_QWORD *)(qword_14034C8E8 + 8);
      v2 = 0;
      *v0 = &PopPowerRequestCallbacks;
      v3 = (char *)(v1 + 72);
      v4 = 6LL;
      do
      {
        v5 = *v3;
        v8[(_QWORD)v3 - v1 - 72] = *v3;
        if ( v5 )
        {
          *v3 = 0;
          ++v2;
        }
        ++v3;
        --v4;
      }
      while ( v4 );
      *(_BYTE *)(v1 + 78) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( !v1 )
      break;
    if ( v2 )
      PopPowerRequestExecuteCallbacks(v8, *(unsigned int *)(v1 + 28), *(unsigned int *)(v1 + 16));
    ObfDereferenceObjectWithTag((PVOID)v1, 0x746C6644u);
  }
  return result;
}
