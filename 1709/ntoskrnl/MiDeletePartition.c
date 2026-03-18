/*
 * XREFs of MiDeletePartition @ 0x14021F520
 * Callers:
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     PspTeardownPartition @ 0x14071B190 (PspTeardownPartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiFreePartitionId @ 0x1406E28F0 (MiFreePartitionId.c)
 */

void __fastcall MiDeletePartition(volatile LONG *P)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  KIRQL v4; // si
  volatile LONG *v5; // rcx
  __int16 Object; // [rsp+30h] [rbp-30h] BYREF
  char v7; // [rsp+32h] [rbp-2Eh]
  int v8; // [rsp+34h] [rbp-2Ch]
  __int64 v9; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140388AA8, &LockHandle);
  ExAcquireSpinLockExclusiveAtDpcLevel(P + 320);
  *((_DWORD *)P + 1) |= 1u;
  v2 = P + 454;
  v3 = 0LL;
  while ( !*v2 )
  {
    ++v3;
    v2 += 4;
    if ( v3 >= 5 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(P + 320);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      goto LABEL_6;
    }
  }
  v8 = 0;
  v10 = &v9;
  Object = 1;
  v9 = (__int64)&v9;
  *((_QWORD *)P + 247) = &Object;
  v7 = 6;
  ExReleaseSpinLockExclusiveFromDpcLevel(P + 320);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
LABEL_6:
  if ( P != (volatile LONG *)&MiSystemPartition )
  {
    v4 = ExAcquireSpinLockExclusive(P + 320);
    v5 = P + 320;
    if ( *((_QWORD *)P + 162) )
    {
      v8 = 0;
      v10 = &v9;
      v9 = (__int64)&v9;
      *((_QWORD *)P + 248) = &Object;
      Object = 1;
      v7 = 6;
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      __writecr8(v4);
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      __writecr8(v4);
    }
  }
  MiDeletePartitionResources(P);
  MiFreePartitionId(*(unsigned __int16 *)P);
  ExFreePoolWithTag((PVOID)P, 0);
}
