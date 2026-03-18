/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x140028FB8
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     CcWriteBehind @ 0x1400AF884 (CcWriteBehind.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

int __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r15
  char v3; // si
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 PartitionFromFileObject; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v17; // rdx
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r8
  char v21[8]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+70h] [rbp-38h] BYREF
  __int16 Object; // [rsp+78h] [rbp-30h] BYREF
  char v27; // [rsp+7Ah] [rbp-2Eh]
  int v28; // [rsp+7Ch] [rbp-2Ch]
  _QWORD v29[2]; // [rsp+80h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(v5 + 8) )
  {
    Object = 0;
    v27 = 6;
    v28 = 0;
    v29[1] = v29;
    v29[0] = v29;
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
    if ( v6 )
    {
      if ( &CcSystemPartition != *(_UNKNOWN **)(v6 + 528) )
        KeBugCheckEx(0x34u, 0xB25uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      PartitionFromFileObject = CcGetPartitionFromFileObject(a1);
      if ( v8 != PartitionFromFileObject )
        KeBugCheckEx(0x34u, 0xB26uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( *(_QWORD *)(v6 + 224) == v6 + 224 )
      {
        v9 = *(_DWORD *)(v6 + 152);
        if ( (v9 & 0x100) == 0 )
        {
          v2 = 1;
          *(_DWORD *)(v6 + 152) = v9 | 0x10000;
          v25 = *(_QWORD *)(v6 + 272);
          *(_QWORD *)(v6 + 272) = (char *)&v25 + 1;
          v10 = *(_DWORD *)(v6 + 152);
          if ( (v10 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v6 + 496) )
            {
              v24.LockQueue.Lock = (unsigned __int64 *volatile)&unk_14036F780;
              v24.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v24);
              v12 = *(_QWORD *)(v6 + 496);
              if ( v12 )
              {
                v4 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
                v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
                v14 = *(_QWORD **)((v12 & 0xFFFFFFFFFFFFFFFEuLL) + 8);
                if ( *(_QWORD *)(v13 + 8) != v4 || *v14 != v4 )
                  __fastfail(3u);
                *v14 = v13;
                *(_QWORD *)(v13 + 8) = v14;
                *(_QWORD *)(v4 + 8) = 0LL;
                *(_QWORD *)v4 = 0LL;
                *(_QWORD *)(v6 + 496) = 0LL;
                v3 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
            }
          }
          else
          {
            *(_DWORD *)(v6 + 152) = v10 | 0x20;
            v3 = 1;
          }
        }
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LODWORD(v5) = LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v22 = v4;
      CcWriteBehind(v6, v21);
      LODWORD(v5) = KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
    }
    if ( v4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[6].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[6].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        LODWORD(v5) = (unsigned int)RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v4);
      }
      else
      {
        ++P->FreeMisses;
        LODWORD(v5) = ((__int64 (__fastcall *)(unsigned __int64))P->FreeEx)(v4);
      }
    }
    if ( v2 )
    {
      Timeout.QuadPart = -6000000000LL;
      LODWORD(v5) = KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout);
      if ( (_DWORD)v5 == 258 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v17 )
        {
          v18 = (unsigned __int64 *)(v17 + 272);
          if ( *(_QWORD *)(v17 + 272) )
          {
            while ( 1 )
            {
              v19 = *v18;
              if ( (unsigned __int64 *)*v18 == (unsigned __int64 *)((char *)&v25 + 1) )
                break;
              v18 = (unsigned __int64 *)(v19 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) )
                goto LABEL_35;
            }
            *v18 = v25;
          }
LABEL_35:
          *(_DWORD *)(v17 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          LODWORD(v5) = LockHandle.OldIrql;
          __writecr8(LockHandle.OldIrql);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          LODWORD(v5) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
  return v5;
}
