/*
 * XREFs of ??0DMMVIDPNSOURCEMODESET@@IEAA@AEBV0@@Z @ 0x1C0005B20
 * Callers:
 *     ??0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z @ 0x1C00038D0 (--0DMMVIDPNSOURCE@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0005730 (--0-$DoublyLinkedList@VDMMVIDPNSOURCEMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNSOURCEMODE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNSOURCEMODESET *__fastcall DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(
        DMMVIDPNSOURCEMODESET *this,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  char *v2; // r14
  __int64 v4; // rdx
  char *v6; // rcx
  char *v7; // rbx
  DMMVIDPNSOURCEMODESET *v8; // rcx
  DMMVIDPNSOURCEMODESET *v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax

  v2 = (char *)this + 24;
  *((_QWORD *)this + 1) = 0LL;
  v4 = (__int64)a2 + 32;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  *((_QWORD *)this + 3) = &Set<DMMVIDPNSOURCEMODE>::`vftable';
  v6 = (char *)this + 32;
  if ( !a2 )
    v4 = 8LL;
  DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>(
    (__int64)v6,
    v4);
  *((_DWORD *)v2 + 14) = 0;
  *(_QWORD *)v2 = &IndexedSet<DMMVIDPNSOURCEMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173004;
  *(_QWORD *)this = &DMMVIDPNSOURCEMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v2 = &DMMVIDPNSOURCEMODESET::`vftable'{for `IndexedSet<DMMVIDPNSOURCEMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNSOURCEMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNSOURCEMODESET::`vftable'{for `AggregatedBy<DMMVIDPNSOURCE>'};
  *((_QWORD *)this + 15) = &DMMVIDPNSOURCEMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNSOURCEMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))this + 4))((__int64)(v2 + 8)) )
  {
    v7 = 0LL;
    v8 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    if ( v8 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      v7 = (char *)v8 - 8;
    while ( v7 )
    {
      if ( *((_QWORD *)v7 + 5) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v12);
      }
      *((_QWORD *)v7 + 5) = this;
      v9 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)v7 + 1);
      v7 = (char *)v9 - 8;
      if ( v9 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
        v7 = 0LL;
    }
    v10 = *((_QWORD *)a2 + 18);
    if ( v10 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v2, *(_DWORD *)(v10 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
