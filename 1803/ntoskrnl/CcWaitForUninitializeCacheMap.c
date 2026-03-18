/*
 * XREFs of CcWaitForUninitializeCacheMap @ 0x1400BF4BC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     CcWriteBehind @ 0x140042EF0 (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __fastcall CcWaitForUninitializeCacheMap(__int64 a1)
{
  char v2; // r13
  char v3; // si
  unsigned __int64 v4; // rdi
  __int64 Partition; // r14
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-A8h] BYREF
  __int16 Object; // [rsp+38h] [rbp-A0h] BYREF
  char v20; // [rsp+3Ah] [rbp-9Eh]
  int v21; // [rsp+3Ch] [rbp-9Ch]
  _QWORD v22[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+50h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  Partition = 0LL;
  v6 = 0;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
  {
    Object = 0;
    v20 = 6;
    v21 = 0;
    v22[1] = v22;
    v22[0] = v22;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v7 = *(_QWORD *)(a1 + 40);
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 )
    {
      Partition = CcGetPartition(*(_QWORD *)(v7 + 8));
      v23.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
      v23.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v23, Partition + 128);
      v6 = 1;
      if ( *(_QWORD *)(v8 + 224) == v8 + 224 )
      {
        v9 = *(_DWORD *)(v8 + 152);
        if ( (v9 & 0x100) == 0 )
        {
          v2 = 1;
          *(_DWORD *)(v8 + 152) = v9 | 0x10000;
          v18 = *(_QWORD *)(v8 + 272);
          *(_QWORD *)(v8 + 272) = (char *)&v18 + 1;
          v10 = *(_DWORD *)(v8 + 152);
          if ( (v10 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(v8 + 496) )
            {
              v24.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
              v24.LockQueue.Next = 0LL;
              KxAcquireQueuedSpinLock(&v24, Partition + 192);
              v12 = *(_QWORD *)(v8 + 496);
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
                *(_QWORD *)(v8 + 496) = 0LL;
                v3 = 1;
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
            }
          }
          else
          {
            *(_DWORD *)(v8 + 152) = v10 | 0x20;
            v3 = 1;
          }
        }
      }
    }
    if ( v6 )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v3 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v26 = v4;
      CcWriteBehind(v8, (__int64)v25);
      KeLeaveCriticalRegion();
    }
    if ( v4 )
      CcFreeWorkQueueEntry((PSLIST_ENTRY)v4);
    if ( v2 )
    {
      Timeout.QuadPart = -6000000000LL;
      if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &Timeout) == 258 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v23);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
        if ( v15 )
        {
          v16 = (_QWORD *)(v15 + 272);
          v17 = *(_QWORD *)(v15 + 272);
          if ( v17 )
          {
            while ( (__int64 *)v17 != (__int64 *)((char *)&v18 + 1) )
            {
              v16 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
              v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
              if ( !v17 )
                goto LABEL_30;
            }
            *v16 = v18;
          }
LABEL_30:
          *(_DWORD *)(v15 + 152) &= ~0x10000u;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
          __writecr8(v23.OldIrql);
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
          __writecr8(v23.OldIrql);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
    }
  }
}
