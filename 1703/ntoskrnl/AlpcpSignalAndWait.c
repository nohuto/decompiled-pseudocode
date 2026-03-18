/*
 * XREFs of AlpcpSignalAndWait @ 0x1400E7A20
 * Callers:
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14043FB60 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140041740 (KeReleaseSemaphoreEx.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     AlpcpLogUnwait @ 0x1406B29A4 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        __int64 a4,
        PLARGE_INTEGER Timeout,
        char a6)
{
  __int64 v6; // rsi
  KPROCESSOR_MODE v8; // r13
  BOOLEAN v9; // bp
  __int64 v10; // rbx
  char v11; // r12
  unsigned __int8 CurrentIrql; // al
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v19; // ebx
  void *v20; // rcx
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int64 *v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 v28; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 32);
  v8 = a4;
  v9 = (*(_DWORD *)(a1 + 48) & 0x200000) != 0;
  if ( v6 )
  {
    if ( !*(_BYTE *)(a1 + 58) )
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v6 + 248), 1, 1, a4, 1);
      goto LABEL_17;
    }
    v10 = *(_QWORD *)(v6 + 48);
    v11 = *(_BYTE *)(a1 + 59);
    v27 = (volatile signed __int64 *)v10;
    v26 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v28 = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v26, v10);
    }
    else
    {
      v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v10, (__int64)&v26);
      if ( v13 )
        KxWaitForLockOwnerShip((__int64)&v26, v13);
    }
    if ( *(_DWORD *)(v10 + 12) >= *(_DWORD *)(v10 + 8) )
    {
      v15 = 0LL;
      if ( v11 )
        ++*(_DWORD *)(v10 + 20);
      else
        ++*(_DWORD *)(v10 + 16);
    }
    else
    {
      v14 = *(_QWORD **)(v10 + 32);
      if ( v14 )
        *(_QWORD *)(v10 + 32) = *v14;
      v15 = v14[1];
      ++*(_DWORD *)(v10 + 12);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v26, retaddr);
      goto LABEL_13;
    }
    _m_prefetchw(&v26);
    v16 = v26;
    if ( !v26 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v27, 0LL, (signed __int64)&v26) == &v26 )
      {
LABEL_13:
        __writecr8(v28);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v6 + 352);
        KeAbPostRelease(v6 + 352);
        if ( v15 )
          IoSetIoCompletionEx2(*(_QWORD *)(v6 + 32), *(_QWORD *)(v6 + 40), -(__int64)(v11 != 0), 0, 0LL, 0, v15, 1);
        goto LABEL_17;
      }
      v16 = KxWaitForLockChainValid(&v26);
    }
    v26 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
    goto LABEL_13;
  }
  v22 = *(_QWORD *)(a1 + 24);
  if ( v22 )
  {
    v23 = 5;
    if ( a6 )
      v23 = 1;
    KeReleaseSemaphoreEx(v22 + 1608, 1, 1, a4, v23);
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 40);
    if ( v24 )
    {
      KeSetEvent((PRKEVENT)(v24 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
      v25 = *(_QWORD *)(a1 + 40);
      if ( (v25 & 1) != 0 )
        ObfDereferenceObject((PVOID)(v25 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
LABEL_17:
  KeLeaveCriticalRegion();
  v17 = KeWaitForSingleObject(a2, a3, v8, v9, Timeout);
  CurrentThread = KeGetCurrentThread();
  v19 = v17;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v17);
  v20 = *(void **)(a1 + 32);
  if ( v20 )
    ObfDereferenceObject(v20);
  return v19;
}
