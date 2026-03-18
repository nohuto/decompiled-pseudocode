/*
 * XREFs of RtlDestroyAtomTable @ 0x14057CC80
 * Callers:
 *     RtlDereferenceAtomTable @ 0x14012149C (RtlDereferenceAtomTable.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 *     ExpFreeHandleTable @ 0x1404DD040 (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1404DD198 (ExpRemoveHandleTable.c)
 *     RtlpFreeAtom @ 0x14057CD84 (RtlpFreeAtom.c)
 */

NTSTATUS __stdcall RtlDestroyAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  unsigned int v2; // ebp
  _RTL_ATOM_TABLE_ENTRY **i; // r15
  _RTL_ATOM_TABLE_ENTRY *v4; // rsi
  _RTL_ATOM_TABLE_ENTRY *v5; // r12
  _HANDLE_TABLE *ExHandleTable; // rbx
  _RTL_ATOM_TABLE_REFERENCE *p_Reference; // r14
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v10; // rax

  if ( _InterlockedExchangeAdd(&AtomTable->ReferenceCount, 0xFFFFFFFF) != 1 )
    return 0;
  if ( RtlpLockAtomTable(AtomTable) )
  {
    v2 = 0;
    for ( i = AtomTable->Buckets; v2 < AtomTable->NumberOfBuckets; ++v2 )
    {
      v4 = *i;
      *i++ = 0LL;
      while ( 1 )
      {
        v5 = v4;
        if ( !v4 )
          break;
        v4 = v4->HashLink;
        p_Reference = &v5->Reference;
        v5->HashLink = 0LL;
        while ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink != p_Reference )
        {
          Flink = p_Reference->LowBoxList.Flink;
          if ( (_RTL_ATOM_TABLE_REFERENCE *)p_Reference->LowBoxList.Flink->Blink != p_Reference
            || (v10 = Flink->Flink, Flink->Flink->Blink != Flink) )
          {
            __fastfail(3u);
          }
          p_Reference->LowBoxList.Flink = v10;
          v10->Blink = &p_Reference->LowBoxList;
          RtlpFreeAtom(Flink);
        }
        RtlpFreeAtom(v5);
      }
    }
    AtomTable->Signature = 0;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AtomTable->PushLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&AtomTable->PushLock);
    KeAbPostRelease((ULONG_PTR)&AtomTable->PushLock);
    KeLeaveCriticalRegion();
    ExHandleTable = AtomTable->ExHandleTable;
    ExpRemoveHandleTable((__int64)ExHandleTable);
    ExpFreeHandleTable(ExHandleTable);
    memset(AtomTable, 0, sizeof(struct _RTL_ATOM_TABLE));
    RtlpFreeAtom(AtomTable);
    return 0;
  }
  return -1073741811;
}
