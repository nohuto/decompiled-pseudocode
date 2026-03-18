/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x140089390
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockChainValid @ 0x1400889A0 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1400E0660 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140242390 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140242518 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoFreeMiniCompletionPacket @ 0x14055F6A0 (IoFreeMiniCompletionPacket.c)
 */

void __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v6; // edi
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v14; // [rsp+48h] [rbp-20h]
  unsigned __int8 v15; // [rsp+50h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v14 = (volatile signed __int64 *)a2;
  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v15 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v13, a2);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v13) )
  {
    KxWaitForLockOwnerShip(&v13);
  }
  v6 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v6 = 2;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_8;
    v6 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 24))-- == 1 )
    {
LABEL_8:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_9;
    }
    v6 = 1;
  }
LABEL_9:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v13, retaddr);
    goto LABEL_12;
  }
  _m_prefetchw(&v13);
  v8 = v13;
  if ( v13 )
    goto LABEL_16;
  if ( (__int64 *)_InterlockedCompareExchange64(v14, 0LL, (signed __int64)&v13) != &v13 )
  {
    v8 = KxWaitForLockChainValid(&v13);
LABEL_16:
    v13 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_12:
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v12 = v10[5] - 1;
      v10[5] = v12;
      if ( !v12 && !*((_BYTE *)v10 + 25) && !*((_BYTE *)v10 + 27) )
        KiPerformUnboostKick(v9);
    }
  }
  __writecr8(v15);
  if ( v6 )
  {
    if ( v6 == 1 )
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
