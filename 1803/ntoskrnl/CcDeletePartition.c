/*
 * XREFs of CcDeletePartition @ 0x140220D68
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcCreatePartition @ 0x1401709C8 (CcCreatePartition.c)
 *     CcExitPartition @ 0x140221098 (CcExitPartition.c)
 * Callees:
 *     KeFlushQueuedDpcs @ 0x140004DD0 (KeFlushQueuedDpcs.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     ZwWaitForSingleObject @ 0x1401A7540 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x1402211E0 (CcUninitializePartitionVacbs.c)
 *     CcUninitializeAsyncRead @ 0x1402214D8 (CcUninitializeAsyncRead.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD **v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
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
  v6 = (_QWORD **)(P + 208);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v8 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v8;
    v8[1] = v6;
    ExFreePoolWithTag(v7, 0x71576343u);
  }
  v9 = (_QWORD **)(P + 288);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
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
