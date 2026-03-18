/*
 * XREFs of MiDereferencePartition @ 0x140062B34
 * Callers:
 *     MiMoveEccPagesToFreeList @ 0x14020D91C (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 *     MmPartitionObjectDelete @ 0x140213B10 (MmPartitionObjectDelete.c)
 *     MiRebalanceZeroFreeLists @ 0x14021FC00 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePages @ 0x1402249F0 (MiRebuildLargePages.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x14049C77C (MmCreateProcessAddressSpace.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     MiDeletePartitionResources @ 0x14021D818 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x1406B619C (MiFreePartitionId.c)
 */

void __fastcall MiDereferencePartition(volatile LONG *P)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  KIRQL v5; // si
  volatile LONG *v6; // rcx
  ULONG_PTR *v7; // rax
  void *v8; // rsi
  unsigned __int16 v9; // bx
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+32h] [rbp-2Eh]
  int v12; // [rsp+34h] [rbp-2Ch]
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  if ( (*((_QWORD *)P + 2))-- == 1LL )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(P + 336);
    *((_DWORD *)P + 1) |= 1u;
    v3 = P + 430;
    v4 = 0LL;
    while ( !*v3 )
    {
      ++v4;
      v3 += 4;
      if ( v4 >= 4 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(P + 336);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        goto LABEL_9;
      }
    }
    v12 = 0;
    v14 = &v13;
    Object = 1;
    v13 = (__int64)&v13;
    *((_QWORD *)P + 231) = &Object;
    v11 = 6;
    ExReleaseSpinLockExclusiveFromDpcLevel(P + 336);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
LABEL_9:
    if ( P != (volatile LONG *)&MiSystemPartition )
    {
      v5 = ExAcquireSpinLockExclusive(P + 336);
      v6 = P + 336;
      if ( *((_QWORD *)P + 170) )
      {
        v12 = 0;
        v14 = &v13;
        v13 = (__int64)&v13;
        *((_QWORD *)P + 232) = &Object;
        Object = 1;
        v11 = 6;
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        __writecr8(v5);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        __writecr8(v5);
      }
    }
    MiDeletePartitionResources(P);
    v7 = (ULONG_PTR *)*((_QWORD *)P + 3);
    v8 = 0LL;
    if ( v7 != &MiSystemPartition )
      v8 = (void *)v7[25];
    v9 = *(_WORD *)P;
    ExFreePoolWithTag((PVOID)P, 0);
    MiFreePartitionId(v9);
    if ( v8 )
      ObDereferenceObjectDeferDeleteWithTag(v8, 0x746C6644u);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
