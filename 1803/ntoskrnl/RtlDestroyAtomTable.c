/*
 * XREFs of RtlDestroyAtomTable @ 0x140547520
 * Callers:
 *     RtlDereferenceAtomTable @ 0x1400A1218 (RtlDereferenceAtomTable.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 *     RtlpFreeAtom @ 0x1404EAF6C (RtlpFreeAtom.c)
 *     ExpFreeHandleTable @ 0x140547650 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1405477A8 (ExpRemoveHandleTable.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r14
  _RTL_ATOM_TABLE_ENTRY *v7; // rsi
  _RTL_ATOM_TABLE_ENTRY *v8; // r12
  _HANDLE_TABLE *ExHandleTable; // rbx
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // r15
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v13; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTable) )
  {
    v5 = 0;
    for ( i = AtomTable->Buckets; v5 < AtomTable->NumberOfBuckets; ++v5 )
    {
      v7 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v8 = v7;
        if ( !v7 )
          break;
        v7 = v7->HashLink;
        p_Reference = &v8->Reference;
        v8->HashLink = 0LL;
        while ( 1 )
        {
          Flink = p_Reference->LowBoxList.Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink == p_Reference )
            break;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)Flink->Blink != p_Reference
            || (v13 = Flink->Flink, Flink->Flink->Blink != Flink) )
          {
            __fastfail(3u);
          }
          p_Reference->LowBoxList.Flink = v13;
          v13->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom((__int64)Flink);
        }
        RtlpFreeAtom((__int64)v8);
      }
    }
    AtomTable->Signature = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock, v2, v3, v4);
    KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
    KeLeaveCriticalRegion();
    ExHandleTable = AtomTable->ExHandleTable;
    ExpRemoveHandleTable(ExHandleTable);
    ExpFreeHandleTable(ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom((__int64)AtomTable);
    return 0;
  }
  return -1073741811;
}
