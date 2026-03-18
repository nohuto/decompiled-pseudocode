/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C000B1C0
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C000AC48 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C00042E0 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DMMVIDPNSOURCEMODESET *v6; // rbx
  char *v7; // rbx
  DMMVIDPNSOURCEMODESET *v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  if ( a2 )
    v4 = (__int64)a2 + 32;
  else
    v4 = 8LL;
  *((_QWORD *)this + 3) = &Set<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (__int64)this + 32,
    v4);
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
    v6 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v6 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      v7 = (char *)v6 - 8;
      while ( v7 )
      {
        if ( *((_QWORD *)v7 + 5) )
        {
          v11 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v11);
        }
        *((_QWORD *)v7 + 5) = this;
        v8 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v7 + 1);
        v7 = (char *)v8 - 8;
        if ( v8 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
          v7 = 0LL;
      }
    }
    v9 = *((_QWORD *)a2 + 18);
    if ( v9 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)this + 24, *(_DWORD *)(v9 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
