/*
 * XREFs of CcCompleteAsyncReadWorker @ 0x140129080
 * Callers:
 *     <none>
 * Callees:
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     CcFindNextWorkQueueEntry @ 0x14002321C (CcFindNextWorkQueueEntry.c)
 *     CcFreeWorkQueueEntry @ 0x1400232C4 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall CcCompleteAsyncReadWorker(_QWORD *P)
{
  char v1; // bp
  __int64 v3; // rdi
  _SLIST_ENTRY *NextWorkQueueEntry; // r15
  __int64 v5; // rsi
  _QWORD *v6; // rdx

  v1 = 0;
  if ( *((_DWORD *)P + 8) == 4 )
  {
    v3 = P[7];
    NextWorkQueueEntry = (_SLIST_ENTRY *)P[6];
    v5 = *((unsigned int *)P + 9);
    do
    {
      CcCompleteAsyncRead((__int64)NextWorkQueueEntry);
      CcFreeWorkQueueEntry(NextWorkQueueEntry);
      NextWorkQueueEntry = 0LL;
      ExAcquirePushLockExclusiveEx(v3 + 832, 0LL);
      v6 = (_QWORD *)(16 * v5 + *(_QWORD *)(v3 + 808));
      if ( (_QWORD *)*v6 == v6 )
      {
        v1 = 1;
        --*(_DWORD *)(*(_QWORD *)(v3 + 792) + 4 * v5);
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
