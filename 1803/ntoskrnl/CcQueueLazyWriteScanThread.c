/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x140177AA0
 * Callers:
 *     <none>
 * Callees:
 *     CcPostWorkQueue @ 0x1400428A8 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1400437A8 (CcAllocateWorkQueueEntry.c)
 *     CcSetLazyWriteScanQueued @ 0x140045900 (CcSetLazyWriteScanQueued.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 *     CcNotifyExternalCaches @ 0x14015BD90 (CcNotifyExternalCaches.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  unsigned int v1; // edi
  char *v2; // r15
  char v4; // r14
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  unsigned __int64 i; // rcx
  signed __int64 v11; // rtt
  __int64 v12; // r8
  __int64 v13; // r9
  PSLIST_ENTRY v14; // rcx
  __int64 v15; // rdx
  char v16; // al
  int v17; // eax
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-C0h] BYREF
  PSLIST_ENTRY v20; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-70h] BYREF

  v1 = 0;
  Object[0] = StartContext + 42;
  v2 = (char *)(StartContext + 117);
  Object[5] = StartContext + 117;
  Object[1] = StartContext + 45;
  v4 = 0;
  Object[2] = StartContext + 48;
  Object[3] = StartContext + 51;
  Object[4] = StartContext + 54;
  while ( 1 )
  {
    v5 = 0;
    if ( v4 )
      CcDereferencePartition((__int64)StartContext);
    v6 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( !v6 )
    {
      v1 = 1;
      v5 = 1;
      goto LABEL_40;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
LABEL_24:
      v5 = 1;
      goto LABEL_8;
    }
    v8 = v7 - 1;
    if ( v8 )
      break;
    v1 = 4;
LABEL_8:
    _m_prefetchw(StartContext + 113);
    v9 = StartContext[113];
    for ( i = v9 + 1; ; i = v9 + 1 )
    {
      if ( i <= 1 )
      {
        if ( i != 1 )
          __fastfail(0xEu);
        KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
        return;
      }
      v11 = v9;
      v9 = _InterlockedCompareExchange64(StartContext + 113, i, v9);
      if ( v11 == v9 )
        break;
    }
    v4 = 1;
    if ( CcNumberOfExternalCaches
      && (__int64 *)CcExternalCacheList != &CcExternalCacheList
      && StartContext == *((_QWORD **)PspSystemPartition + 1) )
    {
      CcNotifyExternalCaches(v1);
    }
    CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
    KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
    if ( v1 > 2 )
    {
      if ( v1 == 4 )
      {
        if ( !*((_BYTE *)StartContext + 595) && !*((_BYTE *)StartContext + 594) )
          goto LABEL_16;
LABEL_45:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        continue;
      }
      if ( v1 == 8 )
      {
        v16 = *((_BYTE *)StartContext + 594);
LABEL_33:
        if ( !v16 )
          goto LABEL_16;
        goto LABEL_45;
      }
    }
    if ( *((_BYTE *)StartContext + 596) || *((_BYTE *)StartContext + 597) || *((_BYTE *)StartContext + 598) )
    {
      v16 = 1;
      goto LABEL_33;
    }
LABEL_16:
    CcSetLazyWriteScanQueued(StartContext, v1, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( (int)CcAllocateWorkQueueEntry((__int64)StartContext, &v20) < 0 )
    {
      ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
      KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
      *((_BYTE *)StartContext + 592) = 0;
      CcSetLazyWriteScanQueued(StartContext, v1, 0);
      goto LABEL_45;
    }
    v14 = v20;
    v15 = 28LL;
    *((_BYTE *)&v20[7].Next + 8) = 3;
    if ( v1 != 8 )
      v15 = 32LL;
    LODWORD(v14[1].Next) = v1;
    CcPostWorkQueue((__int64)v14, (__int64)&StartContext[v15], v12, v13);
  }
  v17 = v8 - 1;
  if ( !v17 )
  {
    v1 = 8;
    goto LABEL_24;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v1 = 16;
    goto LABEL_24;
  }
  if ( v18 == 1 )
    return;
LABEL_40:
  if ( v1 )
    goto LABEL_8;
}
