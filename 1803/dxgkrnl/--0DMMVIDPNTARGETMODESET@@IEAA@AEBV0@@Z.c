/*
 * XREFs of ??0DMMVIDPNTARGETMODESET@@IEAA@AEBV0@@Z @ 0x1C000539C
 * Callers:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0004F00 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE@@@@@@QEAA@AEBV0@@Z @ 0x1C0004968 (--0-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@U-$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODE.c)
 *     ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005350 (-GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

DMMVIDPNTARGETMODESET *__fastcall DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODESET *a2)
{
  char *v2; // rsi
  __int64 v4; // rdx
  char *v6; // rcx
  struct DMMVIDPNTARGETMODE *NextMode; // rbx
  DMMVIDPNTARGETMODESET *v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rax

  *((_QWORD *)this + 1) = 0LL;
  v2 = (char *)this + 24;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
  v4 = (__int64)a2 + 32;
  *((_QWORD *)this + 3) = &Set<DMMVIDPNTARGETMODE>::`vftable';
  v6 = (char *)this + 32;
  if ( !a2 )
    v4 = 8LL;
  DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>::DoublyLinkedList<DMMVIDPNTARGETMODE,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODE>>(
    (__int64)v6,
    v4);
  *((_DWORD *)v2 + 14) = 0;
  *(_QWORD *)v2 = &IndexedSet<DMMVIDPNTARGETMODE>::`vftable';
  *((_QWORD *)this + 11) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 24) = 1;
  *((_BYTE *)this + 136) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 32) = 1833173005;
  *(_QWORD *)this = &DMMVIDPNTARGETMODESET::`vftable'{for `SetElement'};
  *(_QWORD *)v2 = &DMMVIDPNTARGETMODESET::`vftable'{for `IndexedSet<DMMVIDPNTARGETMODE>'};
  *((_QWORD *)this + 11) = &DMMVIDPNTARGETMODESET::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 13) = &DMMVIDPNTARGETMODESET::`vftable'{for `AggregatedBy<DMMVIDPNTARGET>'};
  *((_QWORD *)this + 15) = &DMMVIDPNTARGETMODESET::`vftable'{for `SignedWithClassSignature<DMMVIDPNTARGETMODESET>'};
  if ( (**((unsigned __int8 (__fastcall ***)(__int64))this + 4))((__int64)(v2 + 8)) )
  {
    NextMode = 0LL;
    v8 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)this + 6);
    if ( v8 != (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
      NextMode = (DMMVIDPNTARGETMODESET *)((char *)v8 - 8);
    for ( ; NextMode; NextMode = DMMVIDPNTARGETMODESET::GetNextMode(this, NextMode) )
    {
      if ( *((_QWORD *)NextMode + 5) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8);
        WdLogEvent5_WdAssertion(v11);
      }
      *((_QWORD *)NextMode + 5) = this;
    }
    v9 = *((_QWORD *)a2 + 18);
    if ( v9 )
      *((_QWORD *)this + 18) = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)v2, *(_DWORD *)(v9 + 24));
    else
      *((_QWORD *)this + 18) = 0LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = *((int *)this + 10);
  }
  return this;
}
