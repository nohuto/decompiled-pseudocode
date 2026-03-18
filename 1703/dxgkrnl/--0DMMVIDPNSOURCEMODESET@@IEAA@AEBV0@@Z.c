/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0009870
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C0009FE8 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z @ 0x1C00075B0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@@@QEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  char *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DMMVIDPNSOURCEMODESET *v9; // rbx
  char *v10; // rbx
  DMMVIDPNSOURCEMODESET *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  if ( a2 )
    v4 = (char *)a2 + 24;
  else
    v4 = 0LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE>::DoublyLinkedList<DMMVIDPNSOURCEMODE>((__int64)this + 32, (__int64)(v4 + 8));
  *((_DWORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 4))((char *)this + 32) )
  {
    v9 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v9 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v10 = (char *)v9 - 8;
      while ( v10 )
      {
        if ( *((_QWORD *)v10 + 5) )
        {
          v14 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
          WdLogEvent5_WdAssertion(v14);
        }
        *((_QWORD *)v10 + 5) = this;
        v11 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v10 + 1);
        v10 = (char *)v11 - 8;
        if ( v11 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v10 = 0LL;
      }
    }
    v12 = *((_QWORD *)a2 + 18);
    if ( v12 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)this + 24, *(_DWORD *)(v12 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
