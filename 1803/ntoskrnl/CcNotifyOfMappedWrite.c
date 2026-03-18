/*
 * XREFs of CcNotifyOfMappedWrite @ 0x140133730
 * Callers:
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 * Callees:
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x1400DAE70 (CcScheduleLazyWriteScan.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x1400E0910 (CcAcquireByteRangeForWrite.c)
 *     CcCanIWriteStream @ 0x140133A34 (CcCanIWriteStream.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r14
  __int64 v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // esi
  int v10; // eax
  KSPIN_LOCK *v11; // r12
  unsigned __int64 v12; // rdx
  unsigned int v14; // ecx
  bool v15; // zf
  signed __int64 v16; // rax
  int v17; // eax
  ULONG_PTR v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR v25; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+D0h] [rbp+50h] BYREF
  ULONG_PTR v27; // [rsp+D8h] [rbp+58h] BYREF

  v25 = 0LL;
  v22 = 0LL;
  Partition = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = 2;
  if ( !v8 || (v10 = *(_DWORD *)(v8 + 152), (v10 & 0x100) != 0) )
  {
    v9 = 1;
    goto LABEL_19;
  }
  if ( (v10 & 0x20) != 0 || *(_DWORD *)(v8 + 516) )
  {
    v9 = 0;
LABEL_19:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    goto LABEL_10;
  }
  Partition = CcGetPartition((_QWORD *)v8, v7);
  v11 = (KSPIN_LOCK *)(Partition + 128);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
  ++*(_DWORD *)(v8 + 4);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
  __writecr8(v23.OldIrql);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
  CcDecrementOpenCount(v8);
  if ( *(_DWORD *)(v8 + 112) )
  {
    v12 = *(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (*(_DWORD *)(v12 + 0x50) & 0x8000) != 0 || !(unsigned __int8)CcCanIWriteStream(Partition, v12, 0x1000000, 0, 8) )
    {
      v16 = *(_QWORD *)(v8 + 40);
      if ( a2 > v16 && *(_QWORD *)(v8 + 48) > v16 )
      {
        v17 = *(_DWORD *)(v8 + 112);
        *(_DWORD *)(v8 + 192) = v17;
        *(_DWORD *)(Partition + 456) += v17;
        *(_DWORD *)(Partition + 616) += *(_DWORD *)(v8 + 192);
        *(_DWORD *)(v8 + 152) |= 0x20u;
        ++*(_DWORD *)(v8 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
        __writecr8(v23.OldIrql);
        if ( (int)CcAllocateWorkQueueEntry(Partition, (PSLIST_ENTRY *)&v25) < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v11, &v23);
          *(_DWORD *)(v8 + 152) &= ~0x20u;
          --*(_DWORD *)(v8 + 112);
        }
        else
        {
          v18 = v25;
          *(_BYTE *)(v25 + 120) = 2;
          *(_QWORD *)(v18 + 16) = v8;
          KeAcquireInStackQueuedSpinLock(v11, &v23);
          --*(_DWORD *)(v8 + 112);
          if ( (*(_DWORD *)(v8 + 152) & 0x10000) != 0 )
          {
            *(_QWORD *)(v8 + 496) = v18 | 1;
            CcPostWorkQueue(v18, Partition + 224, v19, v20);
          }
          else
          {
            *(_QWORD *)(v8 + 496) = v18;
            CcPostWorkQueue(v18, Partition + 256, v19, v20);
          }
          v9 = 0;
        }
      }
    }
    else
    {
      v9 = 0;
      if ( *(_BYTE *)(Partition + 900) )
        CcScheduleLazyWriteScan(Partition, 1, 0);
    }
  }
LABEL_10:
  if ( !a3 && v9 == 2 )
    v9 = 1;
  if ( v9 > 1 )
  {
    *(_DWORD *)(v8 + 152) |= 0x400400u;
    ++*(_DWORD *)(v8 + 4);
    ++*(_DWORD *)(v8 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    __writecr8(v23.OldIrql);
    v27 = a2;
    v14 = a3;
    v15 = a3 == 0;
    while ( 1 )
    {
      v26 = v14;
      if ( v15 || !*(_QWORD *)(v8 + 8) && (*(_DWORD *)(v8 + 152) & 4) == 0 )
        break;
      LOBYTE(v21) = 0;
      if ( !CcAcquireByteRangeForWrite(v8, (__int64 *)&v27, v14, 0LL, &v25, &v26, &v22, v21) )
        break;
      v25 += v26;
      v15 = a3 + (_DWORD)a2 - (_DWORD)v25 == 0;
      v14 = a3 + a2 - v25;
      v27 = v25;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
    if ( !*(_DWORD *)(v8 + 4) )
      KeBugCheckEx(0x34u, 0x1268uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v8 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    __writecr8(v23.OldIrql);
  }
  else if ( Partition )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    __writecr8(v23.OldIrql);
  }
  return v9;
}
