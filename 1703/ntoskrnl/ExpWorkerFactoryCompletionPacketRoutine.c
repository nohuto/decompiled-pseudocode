/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x140470DB0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  _QWORD *v4; // rdx
  int v5; // edi
  __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v9; // [rsp+48h] [rbp-20h]
  unsigned __int8 v10; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (volatile signed __int64 *)a2;
  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v8, a2);
  }
  else
  {
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v8);
    if ( v4 )
      KxWaitForLockOwnerShip((__int64)&v8, v4);
  }
  v5 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v5 = 2;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_7;
    v5 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_7:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_8;
    }
    v5 = 1;
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v8, retaddr);
  }
  else
  {
    _m_prefetchw(&v8);
    v7 = v8;
    if ( !v8 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v9, 0LL, (signed __int64)&v8) == &v8 )
        goto LABEL_11;
      v7 = KxWaitForLockChainValid(&v8);
    }
    v8 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
  }
LABEL_11:
  __writecr8(v10);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      IoSetIoCompletionEx2(*(_QWORD *)(a2 + 8), 0LL, 0LL, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
