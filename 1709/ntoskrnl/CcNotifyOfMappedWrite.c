/*
 * XREFs of CcNotifyOfMappedWrite @ 0x1400EF1C8
 * Callers:
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     CcAcquireByteRangeForWrite @ 0x1400F2DD0 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, unsigned int a3)
{
  __int64 Partition; // r14
  __int64 v7; // rdi
  unsigned int v8; // esi
  int v9; // eax
  KSPIN_LOCK *v10; // r12
  signed __int64 v11; // rax
  int v12; // eax
  ULONG_PTR v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ecx
  bool v17; // zf
  int v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v21; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR v23; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+50h] BYREF
  ULONG_PTR v25; // [rsp+D8h] [rbp+58h] BYREF

  v23 = 0LL;
  v20 = 0LL;
  Partition = 0LL;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 2;
  if ( !v7 || (v9 = *(_DWORD *)(v7 + 152), (v9 & 0x100) != 0) )
  {
    v8 = 1;
    goto LABEL_24;
  }
  if ( (v9 & 0x20) != 0 || *(_DWORD *)(v7 + 516) )
  {
    v8 = 0;
LABEL_24:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    goto LABEL_18;
  }
  Partition = CcGetPartition((_QWORD *)v7);
  v10 = (KSPIN_LOCK *)(Partition + 128);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v21);
  ++*(_DWORD *)(v7 + 4);
  ++*(_DWORD *)(v7 + 536);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
  __writecr8(v21.OldIrql);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v21);
  CcDecrementOpenCount(v7);
  if ( *(_DWORD *)(v7 + 112) )
  {
    if ( (*(_DWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) != 0
      || !CcCanIWriteStream((KSPIN_LOCK *)Partition, *(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000u, 0, 8) )
    {
      v11 = *(_QWORD *)(v7 + 40);
      if ( a2 > v11 && *(_QWORD *)(v7 + 48) > v11 )
      {
        v12 = *(_DWORD *)(v7 + 112);
        *(_DWORD *)(v7 + 192) = v12;
        *(_DWORD *)(Partition + 456) += v12;
        *(_DWORD *)(Partition + 616) += *(_DWORD *)(v7 + 192);
        *(_DWORD *)(v7 + 152) |= 0x20u;
        ++*(_DWORD *)(v7 + 112);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
        __writecr8(v21.OldIrql);
        if ( (int)CcAllocateWorkQueueEntry(Partition, (PSLIST_ENTRY *)&v23) < 0 )
        {
          KeAcquireInStackQueuedSpinLock(v10, &v21);
          *(_DWORD *)(v7 + 152) &= ~0x20u;
          --*(_DWORD *)(v7 + 112);
        }
        else
        {
          v13 = v23;
          *(_BYTE *)(v23 + 120) = 2;
          *(_QWORD *)(v13 + 16) = v7;
          KeAcquireInStackQueuedSpinLock(v10, &v21);
          --*(_DWORD *)(v7 + 112);
          if ( (*(_DWORD *)(v7 + 152) & 0x10000) != 0 )
          {
            *(_QWORD *)(v7 + 496) = v13 | 1;
            CcPostWorkQueue(v13, Partition + 224, v14, v15);
          }
          else
          {
            *(_QWORD *)(v7 + 496) = v13;
            CcPostWorkQueue(v13, Partition + 256, v14, v15);
          }
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = 0;
      if ( *(_BYTE *)(Partition + 900) )
        CcScheduleLazyWriteScan(Partition, 1, 0);
    }
  }
LABEL_18:
  if ( !a3 && v8 == 2 )
    v8 = 1;
  if ( v8 <= 1 )
  {
    if ( Partition )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
      __writecr8(v21.OldIrql);
    }
  }
  else
  {
    *(_DWORD *)(v7 + 152) |= 0x400400u;
    ++*(_DWORD *)(v7 + 4);
    ++*(_DWORD *)(v7 + 536);
    ++*(_DWORD *)(v7 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    __writecr8(v21.OldIrql);
    v25 = a2;
    v16 = a3;
    v17 = a3 == 0;
    while ( 1 )
    {
      v24 = v16;
      if ( v17 || !*(_QWORD *)(v7 + 8) && (*(_DWORD *)(v7 + 152) & 4) == 0 )
        break;
      LOBYTE(v19) = 0;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v7,
                               (unsigned int)&v25,
                               v16,
                               0,
                               (__int64)&v23,
                               (__int64)&v24,
                               (__int64)&v20,
                               v19) )
        break;
      v23 += v24;
      v17 = a3 + (_DWORD)a2 - (_DWORD)v23 == 0;
      v16 = a3 + a2 - v23;
      v25 = v23;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v21);
    if ( !*(_DWORD *)(v7 + 4) )
      KeBugCheckEx(0x34u, 0x1268uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v7 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v21);
    __writecr8(v21.OldIrql);
  }
  return v8;
}
