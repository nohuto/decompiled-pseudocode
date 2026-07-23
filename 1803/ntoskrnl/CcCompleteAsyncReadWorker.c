/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x1400C11B0
 * Callers:
 *     <none>
 * Callees:
 *     CcFindNextWorkQueueEntry @ 0x140043690 (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x14004373C (CcFreeWorkQueueEntry.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  __int64 v4; // rsi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15
  _QWORD *v6; // rdx

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    v4 = *((unsigned int *)P + 9);
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    do
    {
      CcCompleteAsyncRead(NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 832, 0LL);
      v6 = (_QWORD *)(16 * v4 + *(_QWORD *)(v3 + 808));
      if ( (_QWORD *)*v6 == v6 )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 792) + 4 * v4);
      }
      else
      {
        NextWorkQueueEntry = (_SLIST_ENTRY *)CcFindNextWorkQueueEntry(v3, v6);
      }
      ExReleasePushLockEx(v3 + 832, 0LL);
    }
    while ( !v1 );
    CcDereferencePartition(v3);
    ExFreePoolWithTag(P, 0x71576343u);
  }
}
