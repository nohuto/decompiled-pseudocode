/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00054F8
 * Callers:
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00050CC (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C000525C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        struct DMMVIDPNTARGET *a2)
{
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v4 = (char *)this + 32;
  *(_QWORD *)v4 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE,DoubleLinkedListElementDeleter<DMMVIDEOPRESENTSOURCE>>::`vftable';
  *((_QWORD *)v4 + 3) = v4 + 16;
  *((_QWORD *)v4 + 2) = v4 + 16;
  *((_DWORD *)v4 + 10) = 2;
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *((_QWORD *)this + 18) = 0LL;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (**((unsigned __int8 (***)(void))this + 4))() )
  {
    if ( a2 && *((_QWORD *)this + 14) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
    }
    *((_QWORD *)this + 14) = a2;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
