/*
 * XREFs of ExDeleteResourceLite @ 0x14001ED40
 * Callers:
 *     CcDeallocateBcb @ 0x14001ED04 (CcDeallocateBcb.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 *     MUIInitializeResourceLock @ 0x1404F3344 (MUIInitializeResourceLock.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     PnpDereferenceNotify @ 0x140585F14 (PnpDereferenceNotify.c)
 *     CmpDelayFreeRMWorker @ 0x14059C380 (CmpDelayFreeRMWorker.c)
 *     DrvDbOpenContext @ 0x1405C4F28 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405C5178 (DrvDbCreateDatabaseNode.c)
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405DD020 (RtlDestroyHeap.c)
 *     PiDrvDbDestroyNode @ 0x1406D43B0 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1407111F0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x14077E1E0 (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x14078782C (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14001F1A0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpOwnerEntryToThread @ 0x14001F330 (ExpOwnerEntryToThread.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // si
  signed __int32 v3; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rax
  __int64 v9; // rdx
  ULONG v10; // esi
  ULONG *p_TableSize; // rdi
  struct _KTHREAD *v12; // rbp
  bool v13; // zf
  signed __int32 v14; // eax
  __int64 v15; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+58h] [rbp+10h] BYREF

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
    v17 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v17 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    v3 = ExpResourceSpinLock;
    while ( (v3 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3 & 0x40000000) == 0 )
      {
        v14 = _InterlockedCompareExchange(&ExpResourceSpinLock, v3 | 0x40000000, v3);
        v13 = v3 == v14;
        v3 = v14;
        if ( !v13 )
          continue;
      }
      KeYieldProcessorEx(&v17);
      v3 = ExpResourceSpinLock;
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
    goto LABEL_13;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
    {
      LOBYTE(v9) = 1;
      PsBoostThreadIo(OwnerThread, v9);
    }
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1804));
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDelete((PVOID)OwnerThread);
  }
LABEL_13:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v10 = 1;
    p_TableSize = &OwnerTable->TableSize;
    if ( OwnerTable->TableSize > 1 )
    {
      do
      {
        p_TableSize += 4;
        v12 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        if ( v12 )
        {
          if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
            && (*p_TableSize & 2) == 0
            && v12 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v12, 2uLL);
          }
          if ( (*p_TableSize & 1) != 0 )
          {
            LOBYTE(v15) = 1;
            PsBoostThreadIo(v12, v15);
          }
          if ( (*p_TableSize & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&v12[1].Timer.DueTime.HighPart);
          if ( (*p_TableSize & 2) != 0 )
            ObDereferenceObjectDeferDelete(v12);
        }
        ++v10;
      }
      while ( v10 < Resource->OwnerTable->TableSize );
    }
    ExFreePoolWithTag(Resource->OwnerTable, 0);
  }
  return 0;
}
