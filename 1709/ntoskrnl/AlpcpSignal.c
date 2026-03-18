/*
 * XREFs of AlpcpSignal @ 0x14006AE10
 * Callers:
 *     AlpcpSignalAndWait @ 0x14006B0B0 (AlpcpSignalAndWait.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140464508 (AlpcpCompleteDeferSignalRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x14049E130 (NtAlpcSendWaitReceivePort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall AlpcpSignal(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  char v6; // r15
  unsigned __int8 CurrentIrql; // al
  _QWORD *v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int64 *v16; // [rsp+48h] [rbp-30h]
  unsigned __int8 v17; // [rsp+50h] [rbp-28h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    if ( !*(_BYTE *)(a1 + 58) )
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v2 + 248), 1, 1);
      return;
    }
    v5 = *(_QWORD *)(v2 + 48);
    v6 = *(_BYTE *)(a1 + 59);
    v16 = (volatile signed __int64 *)v5;
    v15 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v17 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v15, v5);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v5, (__int64)&v15) )
    {
      KxWaitForLockOwnerShip(&v15);
    }
    if ( *(_DWORD *)(v5 + 12) >= *(_DWORD *)(v5 + 8) )
    {
      v9 = 0LL;
      if ( v6 )
        ++*(_DWORD *)(v5 + 20);
      else
        ++*(_DWORD *)(v5 + 16);
    }
    else
    {
      v8 = *(_QWORD **)(v5 + 32);
      if ( v8 )
        *(_QWORD *)(v5 + 32) = *v8;
      v9 = v8[1];
      ++*(_DWORD *)(v5 + 12);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v15, retaddr);
      goto LABEL_13;
    }
    _m_prefetchw(&v15);
    v10 = v15;
    if ( !v15 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v16, 0LL, (signed __int64)&v15) == &v15 )
      {
LABEL_13:
        __writecr8(v17);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v2 + 352);
        KeAbPostRelease(v2 + 352);
        if ( v9 )
        {
          v11 = 0;
          if ( v6 )
            v11 = -1;
          IoSetIoCompletionEx2(*(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40), v11, 0, 0LL, 0, v9, a2);
        }
        return;
      }
      v10 = KxWaitForLockChainValid(&v15);
    }
    v15 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
    goto LABEL_13;
  }
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    KeReleaseSemaphoreEx(v12 + 1608, 1, 1);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 40);
    if ( v13 )
    {
      KeSetEvent((PRKEVENT)(v13 & 0xFFFFFFFFFFFFFFFEuLL), 0, a2);
      v14 = *(_QWORD *)(a1 + 40);
      if ( (v14 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v14 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
}
