/*
 * XREFs of ExDeleteResourceLite @ 0x14011B1A0
 * Callers:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     CcDeallocateBcb @ 0x14011B160 (CcDeallocateBcb.c)
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     CmpDelayFreeRMWorker @ 0x14045BFA0 (CmpDelayFreeRMWorker.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     MUIInitializeResourceLock @ 0x1405692A8 (MUIInitializeResourceLock.c)
 *     RtlCreateHeap @ 0x1405735D0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x140579570 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x1405CD1A8 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405CD648 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbDestroyNode @ 0x1406A9814 (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1406DADE0 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140739AE0 (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140745350 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1400EF440 (ExpResourceEnforcesOwnershipTransfer.c)
 *     ExpOwnerEntryToThread @ 0x14011C4A0 (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  unsigned __int8 CurrentIrql; // si
  signed __int32 v3; // edx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax
  ERESOURCE_THREAD OwnerThread; // rdi
  POWNER_ENTRY OwnerTable; // rax
  ULONG v9; // esi
  ULONG *p_TableSize; // rdi
  struct _KTHREAD *v11; // rbp
  bool v12; // zf
  signed __int32 v13; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+58h] [rbp+10h] BYREF

  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  __incgsdword(0x64A0u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    v3 = ExpResourceSpinLock;
    while ( (v3 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v3 & 0x40000000) == 0 )
      {
        v13 = _InterlockedCompareExchange(&ExpResourceSpinLock, v3 | 0x40000000, v3);
        v12 = v3 == v13;
        v3 = v13;
        if ( !v12 )
          continue;
      }
      KeYieldProcessorEx(&v15);
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
    if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(OwnerThread + 1796));
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_13:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v9 = 1;
    p_TableSize = &OwnerTable->TableSize;
    if ( OwnerTable->TableSize > 1 )
    {
      do
      {
        p_TableSize += 4;
        v11 = (struct _KTHREAD *)ExpOwnerEntryToThread(p_TableSize - 2);
        if ( v11 )
        {
          if ( ExpResourceEnforcesOwnershipTransfer((__int64)Resource)
            && (*p_TableSize & 2) == 0
            && v11 != KeGetCurrentThread() )
          {
            KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v11, 2uLL);
          }
          if ( (*p_TableSize & 1) != 0 )
            PsBoostThreadIoEx((__int64)v11, 1, 0, 0LL);
          if ( (*p_TableSize & 4) != 0 )
            _InterlockedDecrement((volatile signed __int32 *)&v11[1].Timer.DueTime.HighPart);
          if ( (*p_TableSize & 2) != 0 )
            ObDereferenceObjectDeferDeleteWithTag(v11, 0x746C6644u);
        }
        ++v9;
      }
      while ( v9 < Resource->OwnerTable->TableSize );
    }
    ExFreePoolWithTag(Resource->OwnerTable, 0);
  }
  return 0;
}
