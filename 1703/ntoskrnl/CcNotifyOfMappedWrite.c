/*
 * XREFs of CcNotifyOfMappedWrite @ 0x1400B00A8
 * Callers:
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1400AE214 (CcPostWorkQueue.c)
 *     CcCanIWriteStream @ 0x1400AE444 (CcCanIWriteStream.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     CcAcquireByteRangeForWrite @ 0x14011B330 (CcAcquireByteRangeForWrite.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcNotifyOfMappedWrite(__int64 a1, signed __int64 a2, int a3)
{
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  void *v14; // rdx
  signed __int64 v15; // rax
  int v16; // ecx
  bool v17; // zf
  int v18; // [rsp+38h] [rbp-38h]
  ULONG_PTR v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF
  ULONG_PTR v23; // [rsp+B8h] [rbp+48h] BYREF

  v22 = 0LL;
  v20 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || (v7 = *(_DWORD *)(v6 + 152), (v7 & 0x100) != 0) )
  {
    v9 = 1;
    goto LABEL_11;
  }
  if ( &CcSystemPartition != *(_UNKNOWN **)(v6 + 528) )
    KeBugCheckEx(0x34u, 0x1008uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (v7 & 0x20) != 0 || *(_DWORD *)(v6 + 516) )
    goto LABEL_23;
  if ( !*(_DWORD *)(v6 + 112) )
    goto LABEL_26;
  if ( (*(_DWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x50) & 0x8000) != 0
    || !CcCanIWriteStream(*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL, 0x1000000u, 0, 1) )
  {
    v15 = *(_QWORD *)(v6 + 40);
    if ( a2 > v15 && *(_QWORD *)(v6 + 48) > v15 )
    {
      v11 = *(_DWORD *)(v6 + 112);
      *(_DWORD *)(v6 + 192) = v11;
      dword_14036F910 += v11;
      dword_14036F9B0 += *(_DWORD *)(v6 + 192);
      *(_DWORD *)(v6 + 152) |= 0x20u;
      ++*(_DWORD *)(v6 + 112);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (int)CcAllocateWorkQueueEntry(v12, (PSLIST_ENTRY *)&v22) >= 0 )
      {
        v13 = v22;
        *(_BYTE *)(v22 + 120) = 2;
        *(_QWORD *)(v13 + 16) = v6;
        *(_QWORD *)(v13 + 128) = &CcSystemPartition;
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
        --*(_DWORD *)(v6 + 112);
        if ( (*(_DWORD *)(v6 + 152) & 0x10000) != 0 )
        {
          v14 = &unk_14036F828;
          *(_QWORD *)(v6 + 496) = v13 | 1;
        }
        else
        {
          *(_QWORD *)(v6 + 496) = v13;
          v14 = &unk_14036F848;
        }
        CcPostWorkQueue(v13, (__int64)v14);
LABEL_23:
        v9 = 0;
        goto LABEL_11;
      }
      KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
      *(_DWORD *)(v6 + 152) &= ~0x20u;
      --*(_DWORD *)(v6 + 112);
    }
LABEL_26:
    v9 = 2;
    goto LABEL_11;
  }
  v9 = 0;
  if ( CcCoalescingState )
  {
    ++CcDbgCoalescingFlushDueToMPW;
    LOBYTE(v8) = 1;
    CcScheduleLazyWriteScan(&CcSystemPartition, v8, 0LL);
  }
LABEL_11:
  if ( !a3 && v9 == 2 )
    v9 = 1;
  if ( v9 > 1 )
  {
    *(_DWORD *)(v6 + 152) |= 0x400400u;
    ++*(_DWORD *)(v6 + 4);
    ++*(_DWORD *)(v6 + 516);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v19 = a2;
    v16 = a3;
    v17 = a3 == 0;
    while ( 1 )
    {
      LODWORD(v22) = v16;
      if ( v17 || !*(_QWORD *)(v6 + 8) && (*(_DWORD *)(v6 + 152) & 4) == 0 )
        break;
      LOBYTE(v18) = 0;
      if ( !(unsigned __int8)CcAcquireByteRangeForWrite(
                               v6,
                               (unsigned int)&v19,
                               v16,
                               0,
                               (__int64)&v23,
                               (__int64)&v22,
                               (__int64)&v20,
                               v18) )
        break;
      v23 += (unsigned int)v22;
      v17 = a3 + (_DWORD)a2 - (_DWORD)v23 == 0;
      v16 = a3 + a2 - v23;
      v19 = v23;
    }
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    if ( !*(_DWORD *)(v6 + 4) )
      KeBugCheckEx(0x34u, 0x1141uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    *(_DWORD *)(v6 + 152) &= ~0x400000u;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  return v9;
}
