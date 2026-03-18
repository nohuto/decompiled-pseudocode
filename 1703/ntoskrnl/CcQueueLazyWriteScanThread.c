/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x14015E860
 * Callers:
 *     <none>
 * Callees:
 *     CcSetLazyWriteScanQueued @ 0x1400326C0 (CcSetLazyWriteScanQueued.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPostWorkQueue @ 0x1400AE214 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400AFA58 (CcAllocateWorkQueueEntry.c)
 *     KeWaitForMultipleObjects @ 0x1400E8C50 (KeWaitForMultipleObjects.c)
 *     CcNotifyExternalCaches @ 0x14015098C (CcNotifyExternalCaches.c)
 */

void __fastcall __noreturn CcQueueLazyWriteScanThread(KSPIN_LOCK *StartContext)
{
  unsigned int v2; // ebx
  char v3; // si
  NTSTATUS v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al
  bool v10; // zf
  PSLIST_ENTRY v11; // rcx
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp+7h] BYREF
  PSLIST_ENTRY v14; // [rsp+60h] [rbp+1Fh] BYREF
  PVOID Object[5]; // [rsp+68h] [rbp+27h] BYREF

  Object[0] = StartContext + 51;
  v2 = 0;
  Object[1] = StartContext + 54;
  Object[2] = StartContext + 57;
  Object[3] = StartContext + 60;
  Object[4] = StartContext + 63;
  while ( 1 )
  {
    v3 = 0;
    v4 = KeWaitForMultipleObjects(5u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
        {
          v2 = 4;
          goto LABEL_13;
        }
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            goto LABEL_13;
          v2 = 16;
        }
        else
        {
          v2 = 8;
        }
      }
      else
      {
        v2 = 2;
      }
      v3 = 1;
    }
    else
    {
      v2 = 1;
      v3 = 1;
    }
LABEL_13:
    if ( CcNumberOfExternalCaches && (__int64 *)CcExternalCacheList != &CcExternalCacheList )
      CcNotifyExternalCaches(v2);
    CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v3);
    KeAcquireInStackQueuedSpinLock(StartContext + 8, &LockHandle);
    if ( !v2 )
      goto LABEL_21;
    if ( v2 <= 2 )
    {
LABEL_26:
      if ( *((_BYTE *)StartContext + 668) || *((_BYTE *)StartContext + 669) || *((_BYTE *)StartContext + 670) )
      {
        v9 = 1;
        goto LABEL_30;
      }
LABEL_21:
      CcSetLazyWriteScanQueued(StartContext, v2, 1);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      if ( (int)CcAllocateWorkQueueEntry(v8, &v14) < 0 )
      {
        ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
        KeAcquireInStackQueuedSpinLock(StartContext + 8, &LockHandle);
        *((_BYTE *)StartContext + 664) = 0;
        CcSetLazyWriteScanQueued(StartContext, v2, 0);
        goto LABEL_32;
      }
      v11 = v14;
      v12 = 41LL;
      *((_BYTE *)&v14[7].Next + 8) = 3;
      if ( v2 == 8 )
        v12 = 37LL;
      LODWORD(v11[1].Next) = v2;
      v11[8].Next = (_SLIST_ENTRY *)StartContext;
      CcPostWorkQueue((__int64)v11, (__int64)&StartContext[v12]);
    }
    else
    {
      if ( v2 != 4 )
      {
        if ( v2 == 8 )
        {
          v9 = *((_BYTE *)StartContext + 666);
LABEL_30:
          v10 = v9 == 0;
          goto LABEL_31;
        }
        goto LABEL_26;
      }
      if ( *((_BYTE *)StartContext + 667) )
        goto LABEL_32;
      v10 = *((_BYTE *)StartContext + 666) == 0;
LABEL_31:
      if ( v10 )
        goto LABEL_21;
LABEL_32:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
    }
  }
}
