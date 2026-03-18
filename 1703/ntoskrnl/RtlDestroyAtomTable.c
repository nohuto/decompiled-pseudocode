/*
 * XREFs of RtlDestroyAtomTable @ 0x140431100
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14001863C (RtlDereferenceAtomTable.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpFreeAtom @ 0x14043136C (RtlpFreeAtom.c)
 *     ExpFreeHandleTable @ 0x140432E04 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140432F5C (ExpRemoveHandleTable.c)
 *     RtlpLockAtomTable @ 0x1404FA734 (RtlpLockAtomTable.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  unsigned int v3; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  _RTL_ATOM_TABLE_ENTRY *v5; // rsi
  _RTL_ATOM_TABLE_ENTRY *v6; // r12
  _HANDLE_TABLE *ExHandleTable; // rbx
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    v3 = 0;
    for ( i = AtomTable->Buckets; v3 < AtomTable->NumberOfBuckets; ++v3 )
    {
      v5 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v6 = v5;
        if ( !v5 )
          break;
        v5 = v5->HashLink;
        p_Reference = &v6->Reference;
        v6->HashLink = 0LL;
        while ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink != p_Reference )
        {
          Flink = p_Reference->LowBoxList.Flink;
          v10 = p_Reference->LowBoxList.Flink->Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink->Blink != p_Reference || v10->Blink != Flink )
            __fastfail(3u);
          p_Reference->LowBoxList.Flink = v10;
          v10->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom(Flink);
        }
        RtlpFreeAtom(v6);
      }
    }
    AtomTable->Signature = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
    KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
    KeLeaveCriticalRegion();
    ExHandleTable = AtomTable->ExHandleTable;
    ExpRemoveHandleTable(ExHandleTable);
    ExpFreeHandleTable(ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom(AtomTable);
    return 0;
  }
  return -1073741811;
}
