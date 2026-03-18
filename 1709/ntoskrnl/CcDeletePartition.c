/*
 * XREFs of CcDeletePartition @ 0x1401E2158
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcCreatePartition @ 0x140148170 (CcCreatePartition.c)
 *     CcExitPartition @ 0x1401E2488 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushQueuedDpcs @ 0x1400DE0B0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x14017D940 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x1401E2584 (CcUninitializePartitionVacbs.c)
 *     CcUninitializeAsyncRead @ 0x1401E2EA8 (CcUninitializeAsyncRead.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  char *v6; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  char *v9; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx

  KeSetEvent((PRKEVENT)P + 38, 0, 0);
  CcDereferencePartition((__int64)P);
  v2 = (void *)*((_QWORD *)P + 120);
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0LL);
    ZwClose(*((HANDLE *)P + 120));
    *((_QWORD *)P + 120) = 0LL;
  }
  if ( !KeCancelTimer((PKTIMER)(P + 528)) )
    KeFlushQueuedDpcs();
  if ( P[901] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v4 = *((_QWORD *)P + 1);
    v5 = v3;
    --CcPartitionCount;
    *(_QWORD *)(v4 + 8) = 0LL;
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    __writecr8(v5);
  }
  v6 = P + 208;
  while ( *(char **)v6 != v6 )
  {
    v7 = *(__int64 **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *v7, *(__int64 **)(*v7 + 8) != v7) )
      __fastfail(3u);
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    ExFreePoolWithTag(v7, 0x71576343u);
  }
  v9 = P + 288;
  while ( *(char **)v9 != v9 )
  {
    v10 = *(__int64 **)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = *v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    ExFreePoolWithTag(v10, 0x71576343u);
  }
  v12 = (void *)*((_QWORD *)P + 85);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x70546343u);
    *((_QWORD *)P + 85) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  CcUninitializeAsyncRead(P);
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
