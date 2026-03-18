/*
 * XREFs of ExDeleteResourceLite @ 0x1400E29B0
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     CcDeallocateBcb @ 0x1400E297C (CcDeallocateBcb.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpDelayFreeRMWorker @ 0x140581E50 (CmpDelayFreeRMWorker.c)
 *     SepTokenDeleteMethod @ 0x140593260 (SepTokenDeleteMethod.c)
 *     RtlCreateHeap @ 0x1405E2E10 (RtlCreateHeap.c)
 *     PnpDereferenceNotify @ 0x1405E5808 (PnpDereferenceNotify.c)
 *     RtlDestroyHeap @ 0x1405F0AA0 (RtlDestroyHeap.c)
 *     MUIInitializeResourceLock @ 0x140605E60 (MUIInitializeResourceLock.c)
 *     DrvDbOpenContext @ 0x140623998 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140623BE8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x14073C7F4 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x140774A80 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x1407E6ABC (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x1407F3FAC (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpOwnerEntryToThread @ 0x1400AAA88 (ExpOwnerEntryToThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140102960 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402BA844 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *v8; // rcx
  _DWORD *v9; // rdx
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rcx
  __int64 v13; // rdx
  struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710 TableSize; // eax
  unsigned int v15; // esi
  __int64 *i; // rdi
  struct _KTHREAD *v17; // rbp
  int v18; // eax
  bool v19; // zf
  signed __int32 v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v25; // [rsp+58h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x6360u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v25 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[5];
        SchedulerAssist[5] = v18 + 1;
        if ( v18 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v25 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    }
    v5 = ExpResourceSpinLock;
    while ( (v5 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v20 = _InterlockedCompareExchange(&ExpResourceSpinLock, v5 | 0x40000000, v5);
        v19 = v5 == v20;
        v5 = v20;
        if ( !v19 )
          continue;
      }
      KeYieldProcessorEx(&v25);
      v5 = ExpResourceSpinLock;
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  v8 = KeGetCurrentPrcb();
  v9 = v8->SchedulerAssist;
  if ( v9 )
  {
    if ( v8->NestingLevel <= 1u )
    {
      v21 = v9[5] - 1;
      v9[5] = v21;
      if ( !v21 && !*((_BYTE *)v9 + 25) && !*((_BYTE *)v9 + 27) )
        KiPerformUnboostKick(v8);
    }
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_15;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    if ( (*(_BYTE *)&TableSize & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      PsBoostThreadIo(OwnerThread, v13);
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1804));
      TableSize = (struct _OWNER_ENTRY::$818A6BB8E639852A52D20A2B257A1D60::$E71B718CD8428E7C8AA4A0868051E710)Resource->OwnerEntry.TableSize;
    }
    if ( (*(_BYTE *)&TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_15:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v15 = 1;
    for ( i = (__int64 *)&OwnerTable->0; v15 < OwnerTable->TableSize; ++v15 )
    {
      i += 2;
      v17 = (struct _KTHREAD *)ExpOwnerEntryToThread(i - 1);
      if ( v17 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*(_DWORD *)i & 2) == 0
          && v17 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v17, 2uLL);
        }
        v23 = *(_DWORD *)i;
        if ( (*(_DWORD *)i & 1) != 0 )
        {
          LOBYTE(v22) = 1;
          PsBoostThreadIo(v17, v22);
          v23 = *(_DWORD *)i;
        }
        if ( (v23 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v17[1].Timer.DueTime.HighPart);
          v23 = *(_DWORD *)i;
        }
        if ( (v23 & 2) != 0 )
          ObDereferenceObjectDeferDelete(v17);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
