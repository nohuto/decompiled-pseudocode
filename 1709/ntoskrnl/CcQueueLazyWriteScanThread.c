/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x140148AC0
 * Callers:
 *     <none>
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14001BCA4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcSetLazyWriteScanQueued @ 0x1400204F4 (CcSetLazyWriteScanQueued.c)
 *     CcPostWorkQueue @ 0x140022504 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140023330 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcNotifyExternalCaches @ 0x140148CE4 (CcNotifyExternalCaches.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
  signed __int64 v10; // rtt
  bool v11; // zf
  __int64 v12; // r8
  __int64 v13; // r9
  PSLIST_ENTRY v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  char v17; // al
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
      goto LABEL_36;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_26;
    }
    v8 = v7 - 1;
    if ( v8 )
      break;
    v1 = 4;
LABEL_8:
    _m_prefetchw(StartContext + 113);
    v9 = StartContext[113];
    do
    {
      if ( (unsigned __int64)(v9 + 1) <= 1 )
      {
        if ( v9 )
          __fastfail(0xEu);
        KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
        return;
      }
      v10 = v9;
      v9 = _InterlockedCompareExchange64(StartContext + 113, v9 + 1, v9);
    }
    while ( v10 != v9 );
    v4 = 1;
    if ( CcNumberOfExternalCaches
      && (__int64 *)CcExternalCacheList != &CcExternalCacheList
      && StartContext == *((_QWORD **)PspSystemPartition + 1) )
    {
      CcNotifyExternalCaches(v1);
    }
    CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
    KeAcquireInStackQueuedSpinLock(StartContext + 16, &LockHandle);
    if ( v1 <= 2 )
      goto LABEL_42;
    if ( v1 == 4 )
    {
      if ( !*((_BYTE *)StartContext + 595) )
      {
        v11 = *((_BYTE *)StartContext + 594) == 0;
        goto LABEL_16;
      }
      goto LABEL_45;
    }
    if ( v1 == 8 )
    {
      v17 = *((_BYTE *)StartContext + 594);
    }
    else
    {
LABEL_42:
      if ( !*((_BYTE *)StartContext + 596) && !*((_BYTE *)StartContext + 597) && !*((_BYTE *)StartContext + 598) )
        goto LABEL_17;
      v17 = 1;
    }
    v11 = v17 == 0;
LABEL_16:
    if ( !v11 )
    {
LABEL_45:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      continue;
    }
LABEL_17:
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
  v16 = v8 - 1;
  if ( !v16 )
  {
    v1 = 8;
LABEL_26:
    v5 = 1;
    goto LABEL_8;
  }
  v18 = v16 - 1;
  if ( !v18 )
  {
    v1 = 16;
    goto LABEL_26;
  }
  if ( v18 == 1 )
    return;
LABEL_36:
  if ( v1 )
    goto LABEL_8;
}
