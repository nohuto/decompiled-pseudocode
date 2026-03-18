/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x14006B320
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockOwnerShip @ 0x14008A720 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14050AFE0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  int v4; // edi
  __int64 v6; // rax
  __int64 v7; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v8; // [rsp+48h] [rbp-20h]
  unsigned __int8 v9; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (volatile signed __int64 *)a2;
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v9 = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v7, a2);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v7) )
  {
    KxWaitForLockOwnerShip(&v7);
  }
  v4 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v4 = 2;
    goto LABEL_7;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_7;
    v4 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_7:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_8;
    }
    v4 = 1;
  }
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v7, retaddr);
  }
  else
  {
    _m_prefetchw(&v7);
    v6 = v7;
    if ( !v7 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v8, 0LL, (signed __int64)&v7) == &v7 )
        goto LABEL_11;
      v6 = KxWaitForLockChainValid(&v7);
    }
    v7 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
  }
LABEL_11:
  __writecr8(v9);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      IoSetIoCompletionEx2(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      ExFreePoolWithTag((PVOID)a2, 0);
    }
  }
}
