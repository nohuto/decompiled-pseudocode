/*
 * XREFs of PopPowerRequestCallbackWorker @ 0x140074F50
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopPowerRequestExecuteCallbacks @ 0x14007505C (PopPowerRequestExecuteCallbacks.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
      if ( *(__int64 **)qword_1403ABBF8 != &PopPowerRequestCallbacks
        || (v0 = *(_QWORD **)(qword_1403ABBF8 + 8), *v0 != qword_1403ABBF8) )
      {
        __fastfail(3u);
      }
      v1 = qword_1403ABBF8 - 56;
      qword_1403ABBF8 = *(_QWORD *)(qword_1403ABBF8 + 8);
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
    ObfDereferenceObjectWithTag((PVOID)v1, 0x72506F50u);
  }
  return result;
}
